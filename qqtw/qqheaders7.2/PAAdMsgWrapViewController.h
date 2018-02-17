//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PAAdMsgPageViewController.h"

#import "PAAdMsgVCDelegate.h"
#import "PAAdMsgViewControllerProtocol.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSString, PAAdMsgCoverViewController, PAAdMsgViewModel, PAAdMsgWebviewController, UIPanGestureRecognizer;

@interface PAAdMsgWrapViewController : PAAdMsgPageViewController <UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, PAAdMsgVCDelegate, PAAdMsgViewControllerProtocol>
{
    UIPanGestureRecognizer *_panGesture;
    _Bool _readyForPanGesture;
    PAAdMsgCoverViewController *_coverViewController;
    PAAdMsgWebviewController *_articleViewController;
    PAAdMsgViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)adMsgReportNegFeedback;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)appDidBecomeActive;
@property(retain, nonatomic) PAAdMsgWebviewController *articleViewController; // @synthesize articleViewController=_articleViewController;
- (void)calculatePlayTimeBeforeExit;
- (void)closePAAdMsgViewController;
@property(retain, nonatomic) PAAdMsgCoverViewController *coverViewController; // @synthesize coverViewController=_coverViewController;
- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (void)loadStatusBar;
- (_Bool)needDismissWhenAVChat;
- (unsigned long long)numberOfPage;
- (void)pageDidChanged;
- (void)pageViewController:(id)arg1 didShowPage:(long long)arg2;
- (void)panGestureAction:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)presentInViewController:(id)arg1;
- (void)reloadArticleViewController;
- (void)reloadCoverViewController;
- (void)reportBeforeExit;
@property(retain, nonatomic) PAAdMsgViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (_Bool)shouldAutorotate;
- (_Bool)shouldHandlePanGesture;
- (unsigned long long)supportedInterfaceOrientations;
- (id)viewControllerForPage:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

