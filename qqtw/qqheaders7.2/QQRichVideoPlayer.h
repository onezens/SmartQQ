//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSOperationQueue;

@interface QQRichVideoPlayer : NSObject
{
    AVPlayer *_player;
    id _playerTimerEventCookie;
    AVPlayerLayer *_displayLayer;
    NSOperationQueue *_playerOperationQueue;
    _Bool _disableRepeat;
    int _playerStatus;
    id <QQRichViewPlayerDelegte> _delegate;
    long long _actionAtItemEnd;
    AVPlayerItem *_playItem;
    id _boundaryTimerObserver;
}

@property(nonatomic) long long actionAtItemEnd; // @synthesize actionAtItemEnd=_actionAtItemEnd;
- (void)appDidEnterBackgroundNotification:(id)arg1;
@property(retain, nonatomic) id boundaryTimerObserver; // @synthesize boundaryTimerObserver=_boundaryTimerObserver;
- (void)bufferingSomeSecond;
- (_Bool)closePlayer;
- (double)currentPos;
- (void)dealloc;
@property id <QQRichViewPlayerDelegte> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool disableRepeat; // @synthesize disableRepeat=_disableRepeat;
@property(readonly, nonatomic) double duration;
- (void)firePlayerStatusChangeEvent;
- (void)firePlayerTimeEvent:(CDStruct_1b6d18a9)arg1;
- (_Bool)hasPlayerExist;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (_Bool)isMuted;
- (_Bool)loadAsset:(id)arg1;
- (void)loadAssetAsynchronously:(id)arg1;
- (_Bool)loadFile:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)onPlayEnd:(id)arg1;
- (_Bool)pause;
- (_Bool)play;
- (void)playEnd;
@property(retain, nonatomic) AVPlayerItem *playItem; // @synthesize playItem=_playItem;
- (void)playViewDidPlay;
@property(nonatomic) int playerStatus; // @synthesize playerStatus=_playerStatus;
- (void)requestHostLayer;
- (void)resetPlayItemForReuse:(_Bool)arg1;
- (_Bool)seek:(double)arg1;
- (_Bool)seekToZero;
- (_Bool)seekVideoToTime:(double)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)setRate:(float)arg1;
- (_Bool)setupPlayer:(id)arg1;
- (_Bool)stop;
- (struct CGSize)videoSize;

@end

