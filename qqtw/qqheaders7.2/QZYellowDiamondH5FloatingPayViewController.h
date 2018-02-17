//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneWebViewController.h"

@class NSDictionary, UIActivityIndicatorView, UIImage, UIView;

@interface QZYellowDiamondH5FloatingPayViewController : QZoneWebViewController
{
    UIView *_payMaskView;
    UIActivityIndicatorView *_indicatorView;
    _Bool _isShowing;
    _Bool _statusBarIsHidden;
    long long _statusBarStyle;
    _Bool _sysNavBarIsHidden;
    _Bool _sysNavBarIsTranslucent;
    UIImage *_sysNavBarBgImage;
    UIImage *_sysNavBarShadowImage;
    NSDictionary *_sysNavBarTitleAttr;
    _Bool _customNavBarIsHidden;
    _Bool _customNavBarTranslucent;
    double _navBarHeight;
}

+ (unsigned long long)showingInstanceCount;
- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (void)failLoad:(id)arg1 withError:(id)arg2;
- (void)finishLoad:(id)arg1;
- (id)initWithActId:(long long)arg1 andRuleId:(long long)arg2 andItemId:(long long)arg3;
- (id)initWithActId:(long long)arg1 andRuleId:(long long)arg2 andItemId:(long long)arg3 andHasAuth:(_Bool)arg4;
- (id)initWithPayUrl:(id)arg1;
- (id)initWithUin:(long long)arg1 openVipType:(long long)arg2 openMonth:(unsigned long long)arg3 aid:(id)arg4 iOSPayType:(long long)arg5;
- (_Bool)isOpaqueNavBar;
- (void)layoutWithParentControllerView:(id)arg1;
- (void)onPayMaskViewTap:(id)arg1;
- (void)recoverBarStatus:(_Bool)arg1;
- (void)setBackgroundTranspancy;
- (void)showInViewController:(id)arg1;
- (void)storeNavBar:(id)arg1;
- (void)storeStatusBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
