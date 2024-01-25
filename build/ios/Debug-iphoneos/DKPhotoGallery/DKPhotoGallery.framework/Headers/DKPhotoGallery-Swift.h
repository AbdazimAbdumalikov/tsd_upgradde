#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9.2 (swiftlang-5.9.2.2.56 clang-1500.1.0.2.5)
#ifndef DKPHOTOGALLERY_SWIFT_H
#define DKPHOTOGALLERY_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="DKPhotoGallery",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

@class NSCoder;

SWIFT_CLASS("_TtC14DKPhotoGallery9DKPDFView") SWIFT_AVAILABILITY(ios,introduced=11.0)
@interface DKPDFView : UIView
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class DKPhotoGalleryItem;
@class UIAlertAction;
@protocol UIPreviewActionItem;
@class UIScrollView;
@class NSString;
@class NSBundle;

/// ///////////////////////////////////////////////////////////////////////////////////////
SWIFT_CLASS("_TtC14DKPhotoGallery20DKPhotoBasePreviewVC")
@interface DKPhotoBasePreviewVC : UIViewController <UIScrollViewDelegate>
@property (nonatomic, readonly, strong) DKPhotoGalleryItem * _Null_unspecified item;
@property (nonatomic, readonly, strong) UIView * _Null_unspecified contentView;
@property (nonatomic, copy) NSArray<UIAlertAction *> * _Nullable customLongPressActions;
@property (nonatomic, copy) NSArray * _Nullable customPreviewActions;
@property (nonatomic, copy) void (^ _Nullable singleTapBlock)(void);
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
@property (nonatomic, readonly, copy) NSArray<id <UIPreviewActionItem>> * _Nonnull previewActionItems;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) UIStatusBarAnimation preferredStatusBarUpdateAnimation;
- (UIView * _Nullable)viewForZoomingInScrollView:(UIScrollView * _Nonnull)scrollView SWIFT_WARN_UNUSED_RESULT;
- (void)scrollViewDidZoom:(UIScrollView * _Nonnull)scrollView;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14DKPhotoGallery25DKPhotoBaseImagePreviewVC")
@interface DKPhotoBaseImagePreviewVC : DKPhotoBasePreviewVC
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end



@interface DKPhotoBasePreviewVC (SWIFT_EXTENSION(DKPhotoGallery))
+ (SWIFT_METATYPE(DKPhotoBasePreviewVC) _Nonnull)photoPreviewClassWith:(DKPhotoGalleryItem * _Nonnull)item SWIFT_WARN_UNUSED_RESULT;
+ (DKPhotoBasePreviewVC * _Nonnull)photoPreviewVCWith:(DKPhotoGalleryItem * _Nonnull)item SWIFT_WARN_UNUSED_RESULT;
@end

@class UIColor;

SWIFT_CLASS("_TtC14DKPhotoGallery27DKPhotoContentAnimationView")
@interface DKPhotoContentAnimationView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic) UIViewContentMode contentMode;
- (void)layoutSubviews;
@property (nonatomic, strong) UIColor * _Nullable backgroundColor;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@protocol DKPhotoGalleryIncrementalDataSource;
@class UIImageView;
enum DKPhotoGallerySingleTapMode : NSInteger;
@protocol DKPhotoGalleryDelegate;

SWIFT_CLASS("_TtC14DKPhotoGallery14DKPhotoGallery")
@interface DKPhotoGallery : UINavigationController <UIViewControllerTransitioningDelegate>
@property (nonatomic, copy) NSArray<DKPhotoGalleryItem *> * _Nullable items;
@property (nonatomic, strong) id <DKPhotoGalleryIncrementalDataSource> _Nullable incrementalDataSource;
@property (nonatomic, copy) UIImageView * _Nullable (^ _Nullable finishedBlock)(NSInteger, DKPhotoGalleryItem * _Nonnull);
@property (nonatomic, strong) UIImageView * _Nullable presentingFromImageView;
@property (nonatomic) NSInteger presentationIndex;
@property (nonatomic) enum DKPhotoGallerySingleTapMode singleTapMode;
@property (nonatomic, weak) id <DKPhotoGalleryDelegate> _Nullable galleryDelegate;
@property (nonatomic, copy) NSArray<UIAlertAction *> * _Nullable customLongPressActions;
@property (nonatomic, copy) NSArray * _Nullable customPreviewActions;
@property (nonatomic, strong) UIView * _Nullable footerView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (void)dismissGallery;
- (UIView * _Nonnull)currentContentView SWIFT_WARN_UNUSED_RESULT;
- (DKPhotoBasePreviewVC * _Nonnull)currentContentVC SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)currentIndex SWIFT_WARN_UNUSED_RESULT;
- (void)updateNavigation;
- (void)handleSingleTap;
- (void)toggleControlView;
- (void)showsControlView;
- (void)hidesControlView;
@property (nonatomic, readonly, copy) NSArray<id <UIPreviewActionItem>> * _Nonnull previewActionItems;
- (void)pushViewController:(UIViewController * _Nonnull)viewController animated:(BOOL)animated;
- (UIViewController * _Nullable)popViewControllerAnimated:(BOOL)animated SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=5.0);
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


/// /////////////////////////////////////////////////////////
SWIFT_CLASS("_TtC14DKPhotoGallery23DKPhotoGalleryContentVC")
@interface DKPhotoGalleryContentVC : UIViewController <UIScrollViewDelegate>
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
- (void)scrollViewWillEndDragging:(UIScrollView * _Nonnull)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(CGPoint * _Nonnull)targetContentOffset;
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP14DKPhotoGallery22DKPhotoGalleryDelegate_")
@protocol DKPhotoGalleryDelegate <NSObject>
@optional
/// Called by the gallery just after it shows the index.
- (void)photoGallery:(DKPhotoGallery * _Nonnull)gallery didShow:(NSInteger)index;
@end


SWIFT_PROTOCOL("_TtP14DKPhotoGallery35DKPhotoGalleryIncrementalDataSource_")
@protocol DKPhotoGalleryIncrementalDataSource <NSObject>
@optional
- (NSInteger)numberOfItemsIn:(DKPhotoGallery * _Nonnull)gallery SWIFT_WARN_UNUSED_RESULT;
@required
- (void)photoGallery:(DKPhotoGallery * _Nonnull)gallery itemsBefore:(DKPhotoGalleryItem * _Nullable)item resultHandler:(void (^ _Nonnull)(NSArray<DKPhotoGalleryItem *> * _Nullable, NSError * _Nullable))resultHandler;
- (void)photoGallery:(DKPhotoGallery * _Nonnull)gallery itemsAfter:(DKPhotoGalleryItem * _Nullable)item resultHandler:(void (^ _Nonnull)(NSArray<DKPhotoGalleryItem *> * _Nullable, NSError * _Nullable))resultHandler;
@end

@class UIImage;
@class NSURL;
@class PHAsset;

/// ///////////////////////////////////////////////////////////////
SWIFT_CLASS("_TtC14DKPhotoGallery18DKPhotoGalleryItem")
@interface DKPhotoGalleryItem : NSObject
/// The image to be set initially, until the image request finishes.
@property (nonatomic, strong) UIImage * _Nullable thumbnail;
@property (nonatomic, strong) UIImage * _Nullable image;
@property (nonatomic, copy) NSURL * _Nullable imageURL;
@property (nonatomic, copy) NSURL * _Nullable videoURL;
/// iOS 11 or higher required.
@property (nonatomic, copy) NSURL * _Nullable pdfURL;
/// DKPhotoGallery will automatically decide whether to create ImagePreview or PlayerPreview via the mediaType of the asset.
/// See more: DKPhotoPreviewFactory.swift
@property (nonatomic, strong) PHAsset * _Nullable asset;
@property (nonatomic, copy) NSString * _Nullable assetLocalIdentifier;
/// Used for some optional features.
/// For ImagePreview, you can enable the original image download feature with a key named DKPhotoGalleryItemExtraInfoKeyRemoteImageOriginalURL.
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable extraInfo;
- (nonnull instancetype)initWithImage:(UIImage * _Nonnull)image;
- (nonnull instancetype)initWithImageURL:(NSURL * _Nonnull)imageURL;
- (nonnull instancetype)initWithVideoURL:(NSURL * _Nonnull)videoURL;
- (nonnull instancetype)initWithPdfURL:(NSURL * _Nonnull)pdfURL SWIFT_AVAILABILITY(ios,introduced=11.0);
- (nonnull instancetype)initWithAsset:(PHAsset * _Nonnull)asset;
+ (NSArray<DKPhotoGalleryItem *> * _Nonnull)itemsWithImageURLs:(NSArray<NSURL *> * _Nonnull)URLs SWIFT_WARN_UNUSED_RESULT;
+ (NSArray<DKPhotoGalleryItem *> * _Nonnull)itemsWithImageURLStrings:(NSArray<NSString *> * _Nonnull)URLStrings SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14DKPhotoGallery26DKPhotoGalleryItemConstant")
@interface DKPhotoGalleryItemConstant : NSObject
+ (NSString * _Nonnull)extraInfoKeyRemoteImageOriginalURL SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)extraInfoKeyRemoteImageOriginalSize SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, DKPhotoGallerySingleTapMode, closed) {
  DKPhotoGallerySingleTapModeDismiss = 0,
  DKPhotoGallerySingleTapModeToggleControlView = 1,
};

@protocol UIViewControllerAnimatedTransitioning;
@protocol UIViewControllerInteractiveTransitioning;

SWIFT_CLASS("_TtC14DKPhotoGallery34DKPhotoGalleryTransitionController")
@interface DKPhotoGalleryTransitionController : UIPresentationController <UIViewControllerTransitioningDelegate>
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForPresentedController:(UIViewController * _Nonnull)presented presentingController:(UIViewController * _Nonnull)presenting sourceController:(UIViewController * _Nonnull)source SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForDismissedController:(UIViewController * _Nonnull)dismissed SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerInteractiveTransitioning> _Nullable)interactionControllerForDismissal:(id <UIViewControllerAnimatedTransitioning> _Nonnull)animator SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerInteractiveTransitioning> _Nullable)interactionControllerForPresentation:(id <UIViewControllerAnimatedTransitioning> _Nonnull)animator SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithPresentedViewController:(UIViewController * _Nonnull)presentedViewController presentingViewController:(UIViewController * _Nullable)presentingViewController SWIFT_UNAVAILABLE;
@end

@protocol UIViewControllerContextTransitioning;

SWIFT_CLASS("_TtC14DKPhotoGallery31DKPhotoGalleryTransitionDismiss")
@interface DKPhotoGalleryTransitionDismiss : NSObject <UIViewControllerAnimatedTransitioning>
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> _Nullable)transitionContext SWIFT_WARN_UNUSED_RESULT;
- (void)animateTransition:(id <UIViewControllerContextTransitioning> _Nonnull)transitionContext;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14DKPhotoGallery31DKPhotoGalleryTransitionPresent")
@interface DKPhotoGalleryTransitionPresent : NSObject <UIViewControllerAnimatedTransitioning>
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> _Nullable)transitionContext SWIFT_WARN_UNUSED_RESULT;
- (void)animateTransition:(id <UIViewControllerContextTransitioning> _Nonnull)transitionContext;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14DKPhotoGallery16DKPhotoImageView")
@interface DKPhotoImageView : UIImageView
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image highlightedImage:(UIImage * _Nullable)highlightedImage OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC14DKPhotoGallery19DKPhotoPDFPreviewVC") SWIFT_AVAILABILITY(ios,introduced=11.0)
@interface DKPhotoPDFPreviewVC : DKPhotoBasePreviewVC
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14DKPhotoGallery22DKPhotoPlayerPreviewVC")
@interface DKPhotoPlayerPreviewVC : DKPhotoBasePreviewVC
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14DKPhotoGallery12DKPlayerView")
@interface DKPlayerView : UIView
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) Class _Nonnull layerClass;)
+ (Class _Nonnull)layerClass SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)playAndHidesControlView;
- (void)pause;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end




@interface UIViewController (SWIFT_EXTENSION(DKPhotoGallery))
- (void)presentWithPhotoGallery:(DKPhotoGallery * _Nonnull)gallery completion:(void (^ _Nullable)(void))completion;
@end

#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
