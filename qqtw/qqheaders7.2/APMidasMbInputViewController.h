//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "APMidasMbH5ViewControllerDelegate.h"
#import "APMidasMbInputViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class APMidasBizManager, APMidasMbH5ViewController, APMidasMbInputView, NSString;

@interface APMidasMbInputViewController : UIViewController <APMidasMbInputViewDelegate, APMidasMbH5ViewControllerDelegate, UIGestureRecognizerDelegate>
{
    id <APMidasMbInputViewControllerDelegate> mbInputDelegate;
    APMidasBizManager *bizManager;
    APMidasMbH5ViewController *webVc;
    APMidasMbInputView *inputView;
}

- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (void)onGetMbError:(long long)arg1 inner:(id)arg2 msg:(id)arg3;
- (void)onGetMbSucceeded;
- (void)onMbH5InputClose;
- (void)onMbH5InputSuccess;
- (void)onMbInputViewClose:(id)arg1;
- (void)onMbInputViewMainBtnClicked:(id)arg1;
- (void)onMbInputViewNavigateToUrl:(id)arg1 webTitle:(id)arg2 fromView:(id)arg3;
- (void)onMbInputViewResendBtnClicked:(id)arg1;
- (void)onNetworkError:(long long)arg1;
- (void)onTapBlank;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
