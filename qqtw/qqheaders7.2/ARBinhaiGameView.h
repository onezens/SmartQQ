//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QTreasureBaseView.h"

#import "QQAudioSessionManagerDelegate.h"
#import "QREHongbaoViewDelegate.h"

@class ARBinhaiCatchCountView, ARBinhaiLoadingView, ARBinhaiRankView, ARBinhaiTimeView, ARDeviceMotion, AVAudioPlayer, CADisplayLink, NSArray, NSString, NSTimer, QREHongbaoView, UIImageView;

@interface ARBinhaiGameView : QTreasureBaseView <QREHongbaoViewDelegate, QQAudioSessionManagerDelegate>
{
    CADisplayLink *_displayLink;
    ARDeviceMotion *_motionManager;
    NSString *_resourcePath;
    unsigned long long _motionType;
    _Bool _isMotionReady;
    _Bool _isMotionARReady;
    _Bool _isMotionARUpReady;
    _Bool _isFuDaiExplodeAnimEnd;
    UIImageView *_raiseImageView;
    UIImageView *_raiseTipsView;
    int _countdown;
    UIImageView *_countdownImageView;
    NSTimer *_countdownTimer;
    ARBinhaiTimeView *_redPackTimeView;
    NSTimer *_redPackTimer;
    double _nowTime;
    ARBinhaiCatchCountView *_redPackCatchCountView;
    int _redPackCatchCount;
    UIImageView *_redPackCatchAddView;
    ARBinhaiLoadingView *_loadingView;
    NSArray *_redPackList;
    QREHongbaoView *_hongbaoView;
    ARBinhaiRankView *_rankView;
    NSString *_actId;
    int _rainTime;
    int _packCountLimt;
    _Bool _iOSARKitEnabled;
    AVAudioPlayer *_bgAudioPlayer;
    AVAudioPlayer *_acAudioPlayer;
    _Bool _isAuidoActived;
    int _fudaiClickCount;
    double _fpsTotal;
    int _fpsCount;
    _Bool _isUpdating;
    _Bool _isMotioning;
}

- (void).cxx_destruct;
- (_Bool)activeAudioCategoryIfNeed;
- (void)addFudaiStatusNotification;
- (void)closeHongbao;
- (void)createActionMusic:(id)arg1;
- (void)createBackgroundMusic:(id)arg1;
- (struct Game *)createGame:(struct Platform *)arg1;
- (void)dealloc;
- (void)didEnterBackground:(id)arg1;
- (void)didEnterforeground:(id)arg1;
- (struct Matrix)glkMatrix4ToGameplayMatrix:(union _GLKMatrix4)arg1;
- (void)handleBinhaiGameActionCallBack:(int)arg1 count:(int)arg2;
- (void)handleBinhaiGameClickedCallBack:(_Bool)arg1;
- (void)handleVideoChatEnd;
- (id)initWithFrame:(struct CGRect)arg1 resourcePath:(id)arg2 rainTime:(int)arg3 packCountLimt:(int)arg4 actId:(id)arg5 iOSARKitEnabled:(_Bool)arg6;
@property(readonly, nonatomic) _Bool isMotioning; // @synthesize isMotioning=_isMotioning;
@property(readonly, nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
- (void)onAudioSessionActive;
- (void)onAudioSessionDeactive;
- (void)onFudaiStatusNotification:(id)arg1;
- (void)onIntterruptBegin;
- (void)onIntterruptEnd;
- (void)openHongbaoJumpToWallet:(id)arg1;
- (void)pauseActionMusic;
- (void)pauseBackgroundMusic;
- (void)playActionMusic;
- (void)playBackgroundMusic;
- (void)redPackCatchGameEnd;
- (void)removeFudaiStatusNotification;
- (void)requestCaptureRedPack;
- (void)startCountdownTimer;
- (void)startDeviceMotion;
- (void)startRedPackTimer;
- (void)startUpdating;
- (void)stop;
- (void)stopActionMusic;
- (void)stopBackgroundMusic;
- (void)stopCountdownTimer;
- (void)stopDeviceMotion;
- (void)stopRedPackTimer;
- (void)stopUpdating;
- (void)updateCountdownTime;
- (void)updateDeviceMotion;
- (void)updateRedPackTimer;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

