import 'dart:developer';

import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:pharmacy_arrival/core/utils/app_router.dart';
import 'package:pharmacy_arrival/data/model/product_dto.dart';
import 'package:pharmacy_arrival/screens/accept_containers/bloc/accept_cont_launch_cubit/accept_cont_launch_cubit.dart';
import 'package:pharmacy_arrival/screens/accept_containers/bloc/accept_cont_qr_cubit/accept_cont_qr_cubit.dart';
import 'package:pharmacy_arrival/widgets/app_loader_overlay.dart';
import 'package:pharmacy_arrival/widgets/barcode_scanner_widget.dart';
import 'package:pharmacy_arrival/widgets/custom_app_bar.dart';
import 'package:pharmacy_arrival/widgets/snackbar/custom_snackbars.dart';

class AcceptContQrPage extends StatefulWidget {
  const AcceptContQrPage({super.key});

  @override
  State<AcceptContQrPage> createState() => _AcceptContQrPageState();
}

class _AcceptContQrPageState extends State<AcceptContQrPage> {
  @override
  Widget build(BuildContext context) {
    return AppLoaderOverlay(
      child: Scaffold(
        appBar: CustomAppBar(
          title: 'Сканируйте qr'.toUpperCase(),
          actions: <Widget>[
            IconButton(
              icon: const Icon(
                Icons.playlist_add_check_circle,
                color: Colors.black,
              ),
              tooltip: 'Documents',
              onPressed: () {
              },
            ),
          ],
        ),
        body: BlocConsumer<AcceptContQrCubit, AcceptContQrState>(
          listener: (context, state) {
            state.when(
              initialState: () => context.loaderOverlay.hide(),
              loadingState: () => context.loaderOverlay.show(),
              loadedState: (List<ProductDTO> products) {
                context.loaderOverlay.hide();
                ScaffoldMessenger.of(context).showSnackBar(
                  SnackBar(
                    backgroundColor: Colors.green,
                    content: Text("Контейнер успешно отправлен на сервер", style: TextStyle(color: Colors.white),),
                    duration: Duration(seconds: 2), // Установите желаемую длительность отображения сообщения
                  ),
                );
                BlocProvider.of<AcceptContLaunchCubit>(context).chageToActiveState();
              },
              errorState: (String message) {
                buildErrorCustomSnackBar(context, message);
                context.loaderOverlay.hide();
                Navigator.pop(context);
              },
            );
          },
          builder: (context, state) {
            return BarcodeScannerWidget(
              topPos: MediaQuery.of(context).size.height / 5,
              callback: (qr) async {
                // Вызываем метод для отправки данных на сервер при обнаружении скана.
                await _onScanSuccess(qr);
                log(qr);
              },
              title: 'Отсканируйте контейнер',
              height: MediaQuery.of(context).size.width - 40,
              width: MediaQuery.of(context).size.width - 40,
            );
          },
        ),
      ),
    );
  }
  Future<void> _onScanSuccess(String qrCode) async {
    try {
      await context.read<AcceptContQrCubit>().getContainerByAng(number: qrCode);
    } catch (e) {
      // Обработка ошибки, например, показать сообщение об ошибке.
      print('Ошибка при сканировании: $e');
      // Вызов метода, который отобразит уведомление об ошибке.
      _showErrorSnackbar('Ошибка при сканировании: $e');
    }
  }

  void _showErrorSnackbar(String errorMessage) {
    ScaffoldMessenger.of(context).showSnackBar(
      SnackBar(
        backgroundColor: Colors.red,
        content: Text(errorMessage, style: TextStyle(color: Colors.white)),
        duration: Duration(seconds: 2),
      ),
    );
  }
}