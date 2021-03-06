//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "APMidasImgVerifyCodeViewDelegate.h"

@class APMidasBizManager, APMidasImgVerifyCodeView, NSString;

@interface APMidasImgVerifyCodeViewController : UIViewController <APMidasImgVerifyCodeViewDelegate>
{
    id <APMidasImgVerifyCodeViewControllerDelegate> delegate;
    APMidasBizManager *bizManager;
    APMidasImgVerifyCodeView *imgvcView;
}

- (void)dealloc;
- (void)onGetCodeErr:(long long)arg1 innerCode:(id)arg2 errMsg:(id)arg3;
- (void)onGetCodeSuccess;
- (void)onImgVerifyCodeViewClose:(id)arg1;
- (void)onImgVerifyCodeViewMainBtnClicked:(id)arg1;
- (void)onImgVerifyCodeViewResendBtnClicked:(id)arg1;
- (void)onNetworkError:(long long)arg1;
- (void)onTapBlank;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

