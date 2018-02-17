//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBPlayerDelegate.h"

@class AVPlayerItem, AVPlayerLayer, NSString, QQRichTinyVideoClips, TBPlayer, TBSwipeableFilterView, UILabel;

@interface TBStoryVideoPreviewView : UIView <TBPlayerDelegate>
{
    TBPlayer *_player;
    AVPlayerItem *_playItem;
    AVPlayerItem *_reservePlayItem;
    id _timerObserver;
    AVPlayerLayer *_playerLayer;
    unsigned long long _mediaType;
    double _startTime;
    double _endTime;
    _Bool _bWaitingReserve;
    _Bool _bReserved;
    float _videoRate;
    id <TBStoryVideoPreviewViewDelegate> _delegate;
    NSString *_videoGravity;
    TBSwipeableFilterView *_preView;
    unsigned long long _mediaSource;
    QQRichTinyVideoClips *_videoInfo;
    NSString *_reserveFilePath;
    id _periodTimerObserver;
    UILabel *_startTimeInfoLab;
}

- (void).cxx_destruct;
- (id)AVURLassetWithUrl:(id)arg1;
@property(nonatomic) _Bool bReserved; // @synthesize bReserved=_bReserved;
@property(nonatomic) _Bool bWaitingReserve; // @synthesize bWaitingReserve=_bWaitingReserve;
- (void)closePlayer;
- (void)dealloc;
@property(nonatomic) __weak id <TBStoryVideoPreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1 avasset:(id)arg2 startTime:(double)arg3 endTime:(double)arg4;
- (id)initWithFrame:(struct CGRect)arg1 videoClips:(id)arg2 startTime:(double)arg3 endTime:(double)arg4;
- (_Bool)isPlaying;
- (void)loadPlayerWithAsset:(id)arg1;
- (void)loadPlayerWithUrl:(id)arg1;
@property(nonatomic) unsigned long long mediaSource; // @synthesize mediaSource=_mediaSource;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onAVPlayerItemDidPlayToEndTimeNotification:(id)arg1;
- (void)onAVPlayerItemFailedToPlayToEndTimeNotification:(id)arg1;
- (void)onAVPlayerItemNewAccessLogEntryNotification:(id)arg1;
- (void)onAVPlayerItemNewErrorLogEntryNotification:(id)arg1;
- (void)onAVPlayerItemPlaybackStalledNotification:(id)arg1;
@property(retain, nonatomic) id periodTimerObserver; // @synthesize periodTimerObserver=_periodTimerObserver;
- (_Bool)play;
- (void)playViewDidPlay;
- (void)playViewDidStopPlay;
- (void)player:(id)arg1 didPlay:(CDStruct_1b6d18a9)arg2 loopsCount:(long long)arg3;
- (void)playerAutoRotate:(_Bool)arg1;
@property(retain, nonatomic) TBSwipeableFilterView *preView; // @synthesize preView=_preView;
- (void)rePlay;
- (void)reboot:(id)arg1;
- (void)rebootWithAVAsset:(id)arg1;
- (void)recreateReserveFile;
@property(retain, nonatomic) NSString *reserveFilePath; // @synthesize reserveFilePath=_reserveFilePath;
- (void)reserveVideoCompelted:(_Bool)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)setMute:(_Bool)arg1;
- (void)setRate:(float)arg1;
@property(retain, nonatomic) UILabel *startTimeInfoLab; // @synthesize startTimeInfoLab=_startTimeInfoLab;
@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(retain, nonatomic) QQRichTinyVideoClips *videoInfo; // @synthesize videoInfo=_videoInfo;
- (void)setupShadow;
- (_Bool)startPlay:(long long)arg1;
- (_Bool)stop;
- (void)updateFilterArray:(_Bool)arg1;
- (void)updateFilterArrayWithoutColors:(_Bool)arg1;
- (void)updateMosaic:(id)arg1;
- (void)videoChangedWithCMTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) float videoRate; // @synthesize videoRate=_videoRate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
