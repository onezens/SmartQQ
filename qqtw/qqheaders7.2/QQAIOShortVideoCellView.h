//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOCommonCellView.h"

#import "QQSVOriginalCellDelegete.h"
#import "QQShortAudioVideoPlayerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDelegate.h"

@class CALayer, NSArray, NSString, QQAIOShortVideoCellThumbView, QQAIOShortVideoPlayHelper, QQAIOVideoCellPlayBtnView, QQAnimatedRevealMaskView, QQShortAudioVideoPlayer, QQTwinkleCircleProgressView, UIImageView, UIView;

@interface QQAIOShortVideoCellView : QQAIOCommonCellView <QQShortAudioVideoPlayerDelegate, UIAlertViewDelegate, QQSVOriginalCellDelegete, UITableViewDelegate>
{
    QQAIOShortVideoCellThumbView *_thumbView;
    QQTwinkleCircleProgressView *_progressView;
    QQAnimatedRevealMaskView *_maskView;
    QQAIOVideoCellPlayBtnView *_buttonView;
    UIImageView *_refreshButtonView;
    UIView *_playerView;
    QQShortAudioVideoPlayer *_player;
    NSArray *_urlArray;
    _Bool _isScrolling;
    int _lastNetworkState;
    QQAIOShortVideoPlayHelper *_shortVideoPlayHelper;
    CALayer *_highlightLayer;
    CALayer *_borderLayer;
    struct CGSize _thumbSize;
}

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)autoPlayVideo;
- (void)becomeActive;
- (id)bubbleMask:(struct CGRect)arg1 isSelf:(_Bool)arg2;
- (_Bool)canAutoPlayIgnoreNetworkType;
- (_Bool)canAutoPlaying;
- (_Bool)canForward;
- (_Bool)canShowPopupMenu;
- (id)cellThumbView;
- (void)clickVideoView;
- (void)dealloc;
- (id)getMenuItems;
- (struct CGRect)getThumbImageRect;
- (struct CGRect)getThumbOriginalRectBySignString:(id)arg1;
- (struct CGRect)getThumbRect;
- (struct CGRect)getThumbViewFrame;
- (void)handleMSFNetworkApnStateNotification:(id)arg1;
- (void)handleVideoDownloadStateChangeNotificaion:(id)arg1;
- (void)hideCover;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;
- (_Bool)isIphone4;
- (_Bool)isIphone4s;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
- (void)loadBubbleImageNor:(int)arg1 imageSel:(int)arg2;
- (void)menuActionDelete:(id)arg1;
- (_Bool)netWorkChangePauseState;
- (void)onMenuButtonClick:(id)arg1;
- (void)onPlayerCurrentTime:(double)arg1;
- (void)onPlayerDidLoaded;
- (void)onPlayerLoadComplete;
- (void)onPlayerLoadError:(id)arg1;
- (void)onPlayerLoadProgress:(double)arg1;
- (void)onPlayerPlayError:(id)arg1;
- (void)onUploadCancelButtonClick;
- (void)onVideoChatEnd;
- (void)onVideoChatStart;
- (void)onVideoNeedPause;
- (void)onVideoNeedStart;
- (void)onVideoNeedStop;
- (void)onVideoUrlGet:(id)arg1;
- (void)playVideo:(id)arg1;
- (void)playerDidEndPlay;
- (void)preparePaopao:(id)arg1;
- (void)resignActive;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setAioModel:(id)arg1;
- (void)setAudioSessionMixWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDuration:(double)arg1;
- (void)setFailTipsText:(id)arg1;
- (void)setFileSize:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)setThumb:(id)arg1;
@property(nonatomic) struct CGSize thumbSize; // @synthesize thumbSize=_thumbSize;
@property(retain, nonatomic) NSArray *urlArray; // @synthesize urlArray=_urlArray;
- (void)shortVideoPlayerDidClickForwardButton:(id)arg1;
- (_Bool)shouldDisplayMsgSendFail;
- (void)showCover;
- (void)showMask:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showPlayButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showProgress:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showRefreshButton:(_Bool)arg1;
- (void)showToastWithString:(id)arg1;
- (void)startDownloadVideo:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)thumbImage;
- (struct CGRect)thumbRect;
- (void)updateBorderLayer:(struct CGRect)arg1 isSelf:(_Bool)arg2;
- (void)viewDidAppear;
- (_Bool)viewInScreen;
- (void)viewWillDisappear;
- (void)voiceSetData:(id)arg1;
- (void)willDrawBubble;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
