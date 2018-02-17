//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQZSlideToCloseFeedListViewController.h"

#import "QQAudioSessionManagerDelegate.h"
#import "QZBlackCommentControllerDelegate.h"
#import "QZLayerVideoViewDelegate.h"
#import "QZPageScrollViewProtocol.h"

@class NSDictionary, NSString, QUIShareView, QZBlackCommentController, QZFullScreenVideoControl, QZLayerVideoView, QZPageScrollView, QZVideoFeedListController, QzoneFeedModel, UIColor, UIImage, UIView;

@interface QZVideoLayerFullScreenViewController : MQZSlideToCloseFeedListViewController <QZLayerVideoViewDelegate, QZPageScrollViewProtocol, QQAudioSessionManagerDelegate, QZBlackCommentControllerDelegate>
{
    QZLayerVideoView *_srcVideoView;
    UIView *_srcVideoViewSuperView;
    id <QZLayerVideoViewDelegate> _srcVideoViewDelegate;
    QZBlackCommentController *_blackCommentController;
    QZFullScreenVideoControl *_fullscreenVideoControl;
    QZVideoFeedListController *_delegate;
    UIImage *_screenImage;
    QzoneFeedModel *_originFeedModel;
    NSDictionary *_busiParam;
    UIColor *_srcVideoViewPlayToEndMaskColor;
    NSString *_attachInfo;
    _Bool _hasSrcVideoView;
    long long _srcVideoViewIndexForList;
    struct CGRect _srcVideoViewOriginFrame;
    struct CGRect _srcVideoViewFrameInWindow;
    long long _srcVideoViewIndexInSuperView;
    _Bool _srcVideoViewEnablelayToEndMask;
    long long _requestId;
    _Bool _hasMore;
    _Bool _isForceCrossScreen;
    _Bool _isPushToWebView;
    _Bool _isFirstDidAppear;
    _Bool _isIndealloc;
    long long _startIndexOfCustomDropmenu;
    _Bool _needReplay;
    _Bool _isKeyboardShow;
    _Bool _isActionSheetShow;
    _Bool _isDisappear;
    _Bool _isShareButtonClicked;
    _Bool _isEnterToHomePageOrDetailPage;
    _Bool _isHideFeedAlertViewShow;
    _Bool _isActionSheetShowInLandscape;
    long long _startIndex;
    long long _scrollModel;
    _Bool _isInRotating;
    _Bool _isInClosing;
    _Bool _isInEntering;
    _Bool _obtainedAudioDevice;
    _Bool _isFirstEnter;
    _Bool _isCreatedBlackCommentController;
    _Bool _hasChangeSrcVideoViewPlayScene;
    long long _srcVideoViewPlayScene;
    _Bool _oldEnableSlideRightToClose;
    _Bool _enableDoubleTapToClose;
    _Bool _needFirstRefresh;
    _Bool _enableLoadMore;
    _Bool _isStatusBarHiddenParentVC;
    _Bool _needAudioManager;
    QZPageScrollView *_videoContentView;
    long long _triggerCrossScreenEvt;
    long long _videoLayerfromType;
    QUIShareView *_moreView;
    NSString *_oldVideoGravity;
    UIView *_inputMaskView;
}

+ (void)showVideoLayerFullScreen:(id)arg1 param:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool enableDoubleTapToClose; // @synthesize enableDoubleTapToClose=_enableDoubleTapToClose;
@property(nonatomic) _Bool enableLoadMore; // @synthesize enableLoadMore=_enableLoadMore;
@property(retain, nonatomic) UIView *inputMaskView; // @synthesize inputMaskView=_inputMaskView;
@property(nonatomic) _Bool isStatusBarHiddenParentVC; // @synthesize isStatusBarHiddenParentVC=_isStatusBarHiddenParentVC;
@property(nonatomic) __weak QUIShareView *moreView; // @synthesize moreView=_moreView;
@property(nonatomic) _Bool needAudioManager; // @synthesize needAudioManager=_needAudioManager;
@property(nonatomic) _Bool needFirstRefresh; // @synthesize needFirstRefresh=_needFirstRefresh;
@property(retain, nonatomic) NSString *oldVideoGravity; // @synthesize oldVideoGravity=_oldVideoGravity;
- (double)portraitHeight;
- (void)reportVideoConfigViewClicked:(id)arg1;
@property(nonatomic) long long triggerCrossScreenEvt; // @synthesize triggerCrossScreenEvt=_triggerCrossScreenEvt;
@property(retain, nonatomic) QZPageScrollView *videoContentView; // @synthesize videoContentView=_videoContentView;
@property(nonatomic) long long videoLayerfromType; // @synthesize videoLayerfromType=_videoLayerfromType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

