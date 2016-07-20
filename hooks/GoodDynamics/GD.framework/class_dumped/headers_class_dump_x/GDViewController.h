/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

#import "GDInputUIDataDelegate-Protocol.h"
#import "GDViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class GDBaseViewController, GDScrollableContentView, NSArray, NSString, UIButton, UIImageView, UIView, UIViewController, UIWindow;

@interface GDViewController : _CATransform3DMakeScale <GDInputUIDataDelegate, GDViewDelegate, UIScrollViewDelegate>
{
    UIImageView *backgroundImageView;
    UIWindow *backupWindow;
    NSArray *backupViews;
    UIButton *cancelButton;
    UIButton *nextButton;
    UIButton *infoButton;
    NSString *helpMessage;
    UIView *bottomFadeView;
    BOOL isModal;
    BOOL defaultBackgroundImage;
    BOOL isRemoteLockFlow;
    GDBaseViewController *baseViewController;
    int priority;
    BOOL isViewRefreshed;
    int lastOrientationWhenRefreshed;
    int currentInterfaceOrientation;
    BOOL isKeyboardVisible;
    BOOL willRotate;
    UIImageView *topBrandingImage;
    UIView *lineView;
    UIButton *bottomInfoButton;
    UIViewController *backupRootViewController;
    GDScrollableContentView *contentView;
    float contentDeltaHeight;
    UIImageView *_bottomBrandingImage;
    struct CGRect keyboardRect;
}

- (void)setBottomBrandingImage:(id)fp8;
- (id)bottomBrandingImage;
- (void)setPriority:(int)fp8;
- (int)priority;
- (void)setBaseViewController:(id)fp8;
- (id)baseViewController;
- (void)setDefaultBackgroundImage:(BOOL)fp8;
- (BOOL)defaultBackgroundImage;
- (void)setIsModal:(BOOL)fp8;
- (BOOL)isModal;
- (void)setContentDeltaHeight:(float)fp8;
- (float)contentDeltaHeight;
- (void)setBottomFadeView:(id)fp8;
- (id)bottomFadeView;
- (void)setContentView:(id)fp8;
- (id)contentView;
- (void)setKeyboardRect:(struct CGRect)fp8;
- (struct CGRect)keyboardRect;
- (void)setWillRotate:(BOOL)fp8;
- (BOOL)willRotate;
- (void)setIsKeyboardVisible:(BOOL)fp8;
- (BOOL)isKeyboardVisible;
- (void)setIsRemoteLockFlow:(BOOL)fp8;
- (BOOL)isRemoteLockFlow;
- (void)setHelpMessage:(id)fp8;
- (id)helpMessage;
- (void)setInfoButton:(id)fp8;
- (id)infoButton;
- (void)setNextButton:(id)fp8;
- (id)nextButton;
- (void)setCancelButton:(id)fp8;
- (id)cancelButton;
- (void)setBackupViews:(id)fp8;
- (id)backupViews;
- (void)setBackupRootViewController:(id)fp8;
- (id)backupRootViewController;
- (void)setBackupWindow:(id)fp8;
- (id)backupWindow;
- (void)setBackgroundImageView:(id)fp8;
- (id)backgroundImageView;
- (void)setBottomInfoButton:(id)fp8;
- (id)bottomInfoButton;
- (void)setLineView:(id)fp8;
- (id)lineView;
- (void)setTopBrandingImage:(id)fp8;
- (id)topBrandingImage;
- (id).cxx_construct;
- (void)dismissUI:(id)fp(null);
- (void)dismissUI;
- (void)clearSensitiveData;
- (BOOL)shouldClearSensitiveData;
- (void)bottomInfoButtonAction;
- (void)showNEMMode;
- (void)showHelpPage;
- (BOOL)isLandscapeiPadOrientation:(int)fp8;
- (BOOL)isPortraitiPadOrientation:(int)fp8;
- (BOOL)isPortraitiPhoneOrientation:(int)fp8;
- (BOOL)isLandscapeiPhoneOrientation:(int)fp8;
- (void)adjustViewLocationForOrientation:(int)fp8;
- (void)adjustBottomBrandingImage:(int)fp8;
- (void)adjustBottomInfoButtonForSize:(int)fp8 buttonSize:(struct CGSize)fp12;
- (void)adjustViewLocationPerOrientation;
- (void)scrollViewDidScroll:(id)fp8;
- (float)infoButtonRequiredHeight;
- (void)setupFadeView:(id)fp8 withOpacityFrom:(float)fp12 to:(float)fp16;
- (void)updateDisplayingOfContentWithSizeHeight:(float)fp8 andFrameSize:(struct CGSize)fp12;
- (float)contentFrameHeight;
- (float)contentSizeHeight;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)updateUIToOrientation:(int)fp8;
- (void)willRotateToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)showLogoWithDuration:(double)fp8;
- (void)hideLogoWithDuration:(double)fp8;
- (void)moveBrandingLogoWithDuration:(double)fp8 isHiding:(BOOL)fp16;
- (void)makeiPhoneLayout:(int)fp8;
- (void)makeiPadLayout:(int)fp8;
- (void)makeLayout:(int)fp8;
- (BOOL)setBackgroundImage:(id)fp8;
- (void)locateNavigationButton:(id)fp8 originY:(float)fp12 orientation:(int)fp16;
- (void)refreshView;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)loadView;
- (void)makeKeyboardGuide:(id)fp8 to:(id)fp12;
- (void)showKeyboardGuide:(id)fp8;
- (void)keyboardDidHideNotification:(id)fp8;
- (void)keyboardDidShowNotification:(id)fp8;
- (void)keyboardWillShowOrHideNotification:(id)fp8;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end
