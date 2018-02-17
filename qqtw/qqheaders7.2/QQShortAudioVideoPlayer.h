//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QZVideoPlayerViewDelegate.h"
#import "QZVideoStateViewDelegate.h"
#import "TVKLiteMediaUrlRequestDelegate.h"
#import "TVKLogDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CellContainerView, NSError, NSMutableDictionary, NSString, NSTimer, NSURL, NSValue, QQGradientView, QQMessageModel, QQProgressBar, QZVideoPlayerView, TVKLiteMediaUrlRequest, UIButton, UIImageView, UILabel, UIProgressView, UISlider, UIView;

@interface QQShortAudioVideoPlayer : NSObject <QZVideoStateViewDelegate, TVKLiteMediaUrlRequestDelegate, TVKLogDelegate, UIGestureRecognizerDelegate, QZVideoPlayerViewDelegate>
{
    NSString *_filePath;
    id <QQShortAudioVideoPlayerDelegate> _delegate;
    UIView *_hostView;
    UIImageView *_audioBgd;
    UILabel *_audioName;
    UIButton *_moreButton;
    QZVideoPlayerView *_videoPlayerView;
    NSString *_videoURL;
    NSValue *_startTimeValue;
    long long _duration;
    QQProgressBar *_progressView;
    long long _loadErrorCode;
    UILabel *_wholeTipsView;
    UILabel *_audioCurrentTime;
    UILabel *_audioTotalTime;
    int _xo;
    _Bool _firstLoadFromNet;
    _Bool _isCacheExist;
    long long _userReturnCode;
    double _maxPlayProgress;
    int _playerID;
    UIButton *_hotVideoIconButton;
    _Bool _loadFileComplete;
    _Bool _fullScreen;
    _Bool _recommendationVideo;
    _Bool _isDraggingProgressBar;
    _Bool _manualPauseState;
    _Bool _didPlayToEnd;
    _Bool _isOtherVideo;
    _Bool _isBubble;
    UISlider *_audioScrubber;
    UIView *_uploadControlPanel;
    UIProgressView *_uploadProgressView;
    UIButton *_uploadCancelButton;
    UILabel *_uploadProgressLabel;
    QQGradientView *_playControlPanel;
    UIButton *_playPauseButton;
    unsigned long long _audioVideoType;
    NSURL *_contentURL;
    QQMessageModel *_msgModel;
    UIButton *_tipsButton;
    NSMutableDictionary *_reportInfo;
    NSError *_playError;
    unsigned long long _localCacheLength;
    NSTimer *_playProgressTimer;
    long long _pauseTime;
    NSString *_vid;
    TVKLiteMediaUrlRequest *_mediaUrlRequest;
}

@property(retain, nonatomic) UISlider *audioScrubber; // @synthesize audioScrubber=_audioScrubber;
@property(nonatomic) unsigned long long audioVideoType; // @synthesize audioVideoType=_audioVideoType;
- (void)autoDisappear;
@property(retain, nonatomic) UIButton *centerButton;
@property(retain, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
- (void)dealloc;
- (void)didMediaUrlRequestFailed:(id)arg1 error:(id)arg2;
- (void)didMediaUrlRequestFinished:(id)arg1 videoUrls:(id)arg2 viedoDurations:(id)arg3;
@property(nonatomic) _Bool didPlayToEnd; // @synthesize didPlayToEnd=_didPlayToEnd;
- (void)doReport;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
- (void)enhanceControlPanel;
- (id)getPlayerMgr;
- (id)getVideoSectionInfo:(id)arg1 url:(id)arg2;
- (id)getVideoSectionInfo:(id)arg1 vid:(id)arg2;
- (void)handleTapAction;
- (void)handleTapGesture:(id)arg1;
- (id)init;
- (void)invalidateProgressTimer;
@property(nonatomic) _Bool isBubble; // @synthesize isBubble=_isBubble;
@property(nonatomic) _Bool isDraggingProgressBar; // @synthesize isDraggingProgressBar=_isDraggingProgressBar;
@property(nonatomic, getter=isFullScreen) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
- (_Bool)isLocalFileExist;
@property(nonatomic) _Bool isOtherVideo; // @synthesize isOtherVideo=_isOtherVideo;
- (_Bool)isPausingVideo;
- (_Bool)isPlayingVideo;
@property(nonatomic, getter=isRecommendationVideo) _Bool recommendationVideo; // @synthesize recommendationVideo=_recommendationVideo;
@property(nonatomic, getter=isSelected) _Bool selected;
- (_Bool)isShortVideoHaveCache;
@property(nonatomic) _Bool loadFileComplete; // @synthesize loadFileComplete=_loadFileComplete;
- (void)loadVideoPlaybackView:(id)arg1 msgModel:(id)arg2;
- (void)loadVideoPlaybackView:(id)arg1 vid:(id)arg2;
- (unsigned long long)localCacheFileLen;
@property(nonatomic) unsigned long long localCacheLength; // @synthesize localCacheLength=_localCacheLength;
- (void)logLevel:(int)arg1 withLog:(id)arg2;
@property(nonatomic) _Bool manualPauseState; // @synthesize manualPauseState=_manualPauseState;
@property(retain, nonatomic) TVKLiteMediaUrlRequest *mediaUrlRequest; // @synthesize mediaUrlRequest=_mediaUrlRequest;
@property(retain, nonatomic) QQMessageModel *msgModel; // @synthesize msgModel=_msgModel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onMoreButtonClick:(id)arg1;
- (void)onStatusBarOrientationChange:(id)arg1;
- (void)onUploadCancelClick:(id)arg1;
@property(nonatomic) long long pauseTime; // @synthesize pauseTime=_pauseTime;
- (void)pauseVideo:(id)arg1;
- (void)play;
@property(retain, nonatomic) QQGradientView *playControlPanel; // @synthesize playControlPanel=_playControlPanel;
@property(retain, nonatomic) NSError *playError; // @synthesize playError=_playError;
@property(retain, nonatomic) UIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(retain, nonatomic) NSTimer *playProgressTimer; // @synthesize playProgressTimer=_playProgressTimer;
- (void)playProgressTimerFire;
- (void)playTencentVideo:(id)arg1 beginTime:(double)arg2;
- (void)playThirdVideo:(id)arg1 beginTime:(double)arg2;
- (void)playVideo:(id)arg1;
- (void)playerView:(id)arg1 currentTime:(double)arg2;
- (void)playerView:(id)arg1 loadProgress:(double)arg2;
- (void)playerView:(id)arg1 loadSuccess:(_Bool)arg2 error:(id)arg3;
- (void)playerView:(id)arg1 playIsSuccess:(_Bool)arg2 error:(id)arg3;
- (void)playerView:(id)arg1 setCurrentImage:(id)arg2;
- (void)playerViewLoadComplete:(id)arg1;
- (void)playerViewOneLoopToEnd:(id)arg1 playInfo:(id)arg2;
- (void)playerViewStopPlay:(id)arg1 playInfo:(id)arg2;
- (void)prepareForVideoWithHostViewFrame:(struct CGRect)arg1;
- (void)prepareForVideoWithHostViewFrame:(struct CGRect)arg1 isBubble:(_Bool)arg2;
- (void)redirectToHotVideoURL;
@property(retain, nonatomic) NSMutableDictionary *reportInfo; // @synthesize reportInfo=_reportInfo;
- (void)resetPlayer;
- (void)resetState;
- (void)resetStateView;
- (void)scrubVideo:(id)arg1;
- (void)scrubVideoBegin:(id)arg1;
- (void)scrubVideoDidEnd:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) NSValue *startTimeValue; // @synthesize startTimeValue=_startTimeValue;
@property(retain, nonatomic) UIButton *tipsButton; // @synthesize tipsButton=_tipsButton;
@property(retain, nonatomic) UIButton *uploadCancelButton; // @synthesize uploadCancelButton=_uploadCancelButton;
@property(retain, nonatomic) UIView *uploadControlPanel; // @synthesize uploadControlPanel=_uploadControlPanel;
@property(retain, nonatomic) UILabel *uploadProgressLabel; // @synthesize uploadProgressLabel=_uploadProgressLabel;
@property(retain, nonatomic) UIProgressView *uploadProgressView; // @synthesize uploadProgressView=_uploadProgressView;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) CellContainerView *videoStateView;
@property(copy, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) UILabel *wholeTipsView; // @synthesize wholeTipsView=_wholeTipsView;
- (void)showUploadControlPanel:(_Bool)arg1 animation:(_Bool)arg2;
- (void)showVideoControlPanel:(_Bool)arg1 animation:(_Bool)arg2;
- (void)startProgressTimer:(unsigned int)arg1;
- (void)stopVideo:(id)arg1;
- (id)thumbImage;
- (void)updateProgressView:(float)arg1;
- (void)updateUploadProgressView:(float)arg1;
- (void)updateVideoScrubber:(double)arg1;
- (void)updateWithCurrentTime:(double)arg1 TotalTime:(double)arg2;
- (void)videoStateTouchAction:(unsigned long long)arg1 param:(id)arg2;
- (void)weakenControlPanel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <QQShortAudioVideoPlayerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *filePath; // @dynamic filePath;
@property(readonly) unsigned long long hash;
@property(nonatomic) UIView *hostView; // @dynamic hostView;
@property(retain, nonatomic) QQProgressBar *progressView; // @dynamic progressView;
@property(readonly) Class superclass;
@property(retain, nonatomic) QZVideoPlayerView *videoPlayerView; // @dynamic videoPlayerView;

@end

