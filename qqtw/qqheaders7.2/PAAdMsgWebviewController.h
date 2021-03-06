//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewController.h"

#import "PAAdMsgViewControllerProtocol.h"
#import "negFeedbackMaskViewDelegate.h"

@class NSString, UIButton, UIView, negFeedbackMaskView;

@interface PAAdMsgWebviewController : QQWebViewController <PAAdMsgViewControllerProtocol, negFeedbackMaskViewDelegate>
{
    UIButton *_adIconTips;
    negFeedbackMaskView *_adMaskView;
    double _browseTime;
    NSString *_articleUrl;
    UIView *_headerBarCover;
    double _startBrowseTime;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *articleUrl; // @synthesize articleUrl=_articleUrl;
@property(nonatomic) double browseTime; // @synthesize browseTime=_browseTime;
- (void)clickAdIconAction;
- (void)clickAdTipsAction;
- (void)dealloc;
- (void)didEnterBackground;
@property(retain, nonatomic) UIView *headerBarCover; // @synthesize headerBarCover=_headerBarCover;
- (id)initWithArticleUrl:(id)arg1;
- (void)loadStatusBar;
- (_Bool)needDismissWhenAVChat;
- (void)onCloseBtnClick:(id)arg1;
- (void)orientationDidChanged:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)pushNewVCToAdMsgVC:(id)arg1;
- (void)resetNightMode;
@property(nonatomic) double startBrowseTime; // @synthesize startBrowseTime=_startBrowseTime;
- (void)touchesBegan:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (struct CGRect)webViewRectByStyleAndOrientation;
- (void)willEnterForeground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

