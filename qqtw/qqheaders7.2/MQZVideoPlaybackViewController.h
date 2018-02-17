//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneViewController.h"

#import "IQZUrlDownloaderDelegate.h"
#import "QQAudioSessionManagerDelegate.h"
#import "QZVideoPlayerViewDelegate.h"
#import "QZVideoStateViewDelegate.h"

@class AVAsset, NSDictionary, NSString, NSValue, QQCircularProgressView, QZFeedVideoView, QZVideoPlayerToolbar, QZVideoPlayerView, QZVideoSectionInfo, QzoneFeedModel, QzoneFeedVideo, UIButton, UIImage, UIImageView, UIViewController, UIWindow;

@interface MQZVideoPlaybackViewController : QZoneViewController <QZVideoPlayerViewDelegate, QZVideoStateViewDelegate, QQAudioSessionManagerDelegate, IQZUrlDownloaderDelegate>
{
    QZVideoPlayerView *_playbackView;
    UIWindow *_qzMaskView;
    UIViewController *_parentCtrl;
    UIImageView *_bgImgViewOfPlaybackView;
    _Bool _isOldStatusBarHidden;
    _Bool _isOldNavigationBarHidden;
    _Bool _isAudioSessionObtained;
    UIButton *_bottomButton;
    QQCircularProgressView *_progressView;
    NSString *_localFileForOriginVideo;
    UIButton *_playButton;
    UIImageView *_learnMoreView;
    UIButton *_moreBottomBtn;
    UIImageView *_moreBtnImg;
    _Bool _isMoreButtonUnfolded;
    AVAsset *_videoAsset;
    struct CGSize _videoSize;
    NSValue *_startTimeValue;
    UIImage *_startImg;
    UIImage *_coverImage;
    NSValue *_startImgRectInScreenValue;
    NSString *_originURL;
    NSString *_clientKey;
    unsigned long long _originFileSize;
    _Bool _cyclePlay;
    NSString *_gdtURL;
    NSString *_shareVideoURL;
    NSDictionary *_cookie;
    long long _videoType;
    NSDictionary *_exrtaDic;
    double _seekTo;
    QZVideoPlayerToolbar *_toolbar;
    UIButton *_closeButton;
    CDUnknownBlockType _miniVideoLoadBlock;
    _Bool _isBackground;
    _Bool _neeReloadVideo;
    NSString *_downloadFilePath;
    double _lastDragtime;
    _Bool _isManualPlayed;
    _Bool _isLoaded;
    _Bool _isInDealloc;
    _Bool _isHasOriginCache;
    _Bool _isSelectedOrigin;
    QZVideoSectionInfo *_sectionInfo;
    _Bool _originButtonClick;
    _Bool _isInMorePage;
    _Bool _isInWebContentMorePage;
    _Bool _isOriginVideoStop;
    _Bool _isNeedEnsureVideoState;
    NSString *_videoURL;
    long long _duration;
    long long _canPlayTime;
    long long _totalTime;
    QzoneFeedModel *_feedModel;
    QzoneFeedVideo *_feedVideo;
    QZFeedVideoView *_feedVideoView;
    unsigned long long _sourcePlaySessionID;
    double _timeEnterForeground;
    struct CGSize _playerSize;
}

- (void).cxx_destruct;
- (void)beginAnimationToRectWhenDismiss:(struct CGRect)arg1;
- (void)beginAnimationToRectWhenShow:(struct CGRect)arg1;
- (void)bottomLearnMoreClicked;
@property(nonatomic) long long canPlayTime; // @synthesize canPlayTime=_canPlayTime;
- (void)changeMoreButtonState;
- (void)changeVideoControlState;
- (_Bool)checkIsIllegal;
- (void)close;
- (struct CGRect)convertRectFromHorizontalToVertical:(struct CGRect)arg1;
- (void)createBottomButton;
- (id)createBottomButtonWithTitle:(id)arg1 selector:(SEL)arg2;
- (void)createCloseButton;
- (void)createLearnMoreButton;
- (void)createSlider;
- (void)dealloc;
- (void)didEnterBackground:(id)arg1;
- (id)drawWithBackgoundWith:(id)arg1;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
- (void)enableToolbar:(_Bool)arg1;
@property(nonatomic) __weak QzoneFeedModel *feedModel; // @synthesize feedModel=_feedModel;
@property(nonatomic) __weak QzoneFeedVideo *feedVideo; // @synthesize feedVideo=_feedVideo;
@property(nonatomic) __weak QZFeedVideoView *feedVideoView; // @synthesize feedVideoView=_feedVideoView;
- (void)gdtPausePlay;
- (void)gdtStop:(_Bool)arg1;
- (id)getReportExtInfo;
- (void)handleVideoLoadingInterrupt;
- (void)hideLearnMoreButton;
- (id)init;
@property(nonatomic) _Bool isNeedEnsureVideoState; // @synthesize isNeedEnsureVideoState=_isNeedEnsureVideoState;
@property(nonatomic) _Bool isOriginVideoStop; // @synthesize isOriginVideoStop=_isOriginVideoStop;
- (void)jumpToGDTPage:(int)arg1;
- (void)jumpToWeb;
- (struct CGRect)landscapeAnimationImgViewFrame;
- (void)loadVideoPlaybackView;
- (void)loadView;
- (void)onAudioSessionActive;
- (void)onAudioSessionDeactive;
- (void)onIntterruptBegin;
- (void)onNetReachabilityDidChange:(id)arg1;
- (void)onNotifyCheckVideoIllegal:(id)arg1;
- (void)playbackEndBlock;
@property(nonatomic) struct CGSize playerSize; // @synthesize playerSize=_playerSize;
- (void)playerView:(id)arg1 currentTime:(double)arg2;
- (void)playerView:(id)arg1 loadSuccess:(_Bool)arg2 error:(id)arg3;
- (void)playerView:(id)arg1 playIsSuccess:(_Bool)arg2 error:(id)arg3;
- (void)playerView:(id)arg1 willLoadWithURL:(id)arg2 isStream:(_Bool)arg3 isLocalFile:(_Bool)arg4;
- (void)playerViewIsWaitingData:(id)arg1 currentTime:(double)arg2;
- (void)playerViewOneLoopToEnd:(id)arg1 playInfo:(id)arg2;
- (void)playerViewPausePlay:(id)arg1 playInfo:(id)arg2;
- (void)playerViewRestartPlay:(id)arg1 playInfo:(id)arg2;
- (void)playerViewStopPlay:(id)arg1 playInfo:(id)arg2;
- (void)qzSKStoreDidDisappearGDT;
- (void)reLayout:(_Bool)arg1;
- (void)reloadVideoWhenDownload;
- (void)removeMaskView;
- (void)reportAll;
- (void)reportPlayInfo:(_Bool)arg1;
- (void)reportPlayStartWithManul:(_Bool)arg1;
- (void)reportQuality;
- (void)requestFinished:(id)arg1;
- (void)requestProgress:(id)arg1 bytesOfThisTime:(unsigned long long)arg2 downloadedBytes:(long long)arg3 totalBytes:(long long)arg4;
- (void)saveContinueplayStatus;
- (void)saveCurPlayInfo;
- (void)saveCurPlayInfoRecent;
- (void)setExtraData:(id)arg1;
@property(nonatomic) unsigned long long sourcePlaySessionID; // @synthesize sourcePlaySessionID=_sourcePlaySessionID;
@property(nonatomic) double timeEnterForeground; // @synthesize timeEnterForeground=_timeEnterForeground;
@property(nonatomic) long long totalTime; // @synthesize totalTime=_totalTime;
- (void)setVideoControlHidden:(id)arg1;
@property(copy, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
- (void)setupToolbarDuration;
- (void)showLearnMoreButton;
- (void)showOriginVideoAction:(id)arg1;
- (void)sliderEndSeek;
- (void)sliderValueChanged:(id)arg1;
- (void)startVideoPlay:(id)arg1;
- (void)startVideoPlay:(id)arg1 isLandscape:(_Bool)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)toolbarBeginDragging;
- (void)videoControlDelayHidden;
- (void)videoStateTouchAction:(unsigned long long)arg1 param:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willEnterForeground:(id)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *clientKey; // @dynamic clientKey;
@property(copy, nonatomic) NSDictionary *cookie; // @dynamic cookie;
@property(retain, nonatomic) UIImage *coverImage; // @dynamic coverImage;
@property(nonatomic) _Bool cyclePlay; // @dynamic cyclePlay;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *gdtURL; // @dynamic gdtURL;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long originFileSize; // @dynamic originFileSize;
@property(copy, nonatomic) NSString *originURL; // @dynamic originURL;
@property(copy, nonatomic) NSString *shareVideoURL; // @dynamic shareVideoURL;
@property(retain, nonatomic) UIImage *startImg; // @dynamic startImg;
@property(retain, nonatomic) NSValue *startImgRectInScreenValue; // @dynamic startImgRectInScreenValue;
@property(retain, nonatomic) NSValue *startTimeValue; // @dynamic startTimeValue;
@property(readonly) Class superclass;
@property(retain, nonatomic) AVAsset *videoAsset; // @dynamic videoAsset;
@property(nonatomic) struct CGSize videoSize; // @dynamic videoSize;
@property(nonatomic) long long videoType; // @dynamic videoType;

@end
