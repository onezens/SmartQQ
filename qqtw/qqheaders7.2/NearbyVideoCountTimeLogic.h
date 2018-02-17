//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer, NearbyAVCountDownView, NearbyFriendCellTag, NearbyVideoChatViewController, TriRectStyleView;

@interface NearbyVideoCountTimeLogic : NSObject
{
    _Bool _unLimited;
    _Bool _addTimeTipNotifySend;
    _Bool _isFirstShowCountDownTip;
    int _currentState;
    unsigned int _countedSeconds;
    unsigned int _remainSeconds;
    int _allAddSeconds;
    int _ctDownViewChangeTimeStamp;
    int _ctDownTextChangeTimeStamp;
    NearbyVideoChatViewController *_controller;
    NearbyAVCountDownView *_countDownView;
    NearbyFriendCellTag *_countUpView;
    NSTimer *_countDownTimer;
    double _ctDownTextAlphaChangePerSec;
    double _ctDownViewScaleChangePerSec;
    double _ctDownViewAlphaChangePerSec;
    NSTimer *_countUpTimer;
    TriRectStyleView *_countDownTipView;
    struct CGRect _currrCountDownViewFrame;
}

+ (void)_setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
+ (id)timeStrForSeconds:(int)arg1 State:(int)arg2;
- (void).cxx_destruct;
- (void)addTimeBySecond:(int)arg1;
@property(nonatomic) _Bool addTimeTipNotifySend; // @synthesize addTimeTipNotifySend=_addTimeTipNotifySend;
@property(nonatomic) int allAddSeconds; // @synthesize allAddSeconds=_allAddSeconds;
@property(nonatomic) __weak NearbyVideoChatViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(retain, nonatomic) TriRectStyleView *countDownTipView; // @synthesize countDownTipView=_countDownTipView;
- (id)countDownVideoPath;
@property(retain, nonatomic) NearbyAVCountDownView *countDownView; // @synthesize countDownView=_countDownView;
- (double)countDownViewBottomY;
@property(retain, nonatomic) NSTimer *countUpTimer; // @synthesize countUpTimer=_countUpTimer;
@property(retain, nonatomic) NearbyFriendCellTag *countUpView; // @synthesize countUpView=_countUpView;
@property(nonatomic) unsigned int countedSeconds; // @synthesize countedSeconds=_countedSeconds;
@property(nonatomic) double ctDownTextAlphaChangePerSec; // @synthesize ctDownTextAlphaChangePerSec=_ctDownTextAlphaChangePerSec;
@property(nonatomic) int ctDownTextChangeTimeStamp; // @synthesize ctDownTextChangeTimeStamp=_ctDownTextChangeTimeStamp;
@property(nonatomic) double ctDownViewAlphaChangePerSec; // @synthesize ctDownViewAlphaChangePerSec=_ctDownViewAlphaChangePerSec;
@property(nonatomic) int ctDownViewChangeTimeStamp; // @synthesize ctDownViewChangeTimeStamp=_ctDownViewChangeTimeStamp;
@property(nonatomic) double ctDownViewScaleChangePerSec; // @synthesize ctDownViewScaleChangePerSec=_ctDownViewScaleChangePerSec;
- (int)currentAllAddSeconds;
- (unsigned int)currentCountDownSeconds;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
@property(nonatomic) struct CGRect currrCountDownViewFrame; // @synthesize currrCountDownViewFrame=_currrCountDownViewFrame;
- (void)downloadCountDownVideo;
- (struct dispatch_queue_s *)downloadQueue;
- (void)handleCountDownTimer:(id)arg1;
- (void)handleCountUpTimer:(id)arg1;
- (id)initWithCountDownView:(id)arg1 CountUpView:(id)arg2 CountDownTipView:(id)arg3;
- (_Bool)isExistCountDownVideo;
@property(nonatomic) _Bool isFirstShowCountDownTip; // @synthesize isFirstShowCountDownTip=_isFirstShowCountDownTip;
- (void)moveCountDownViewInY:(double)arg1;
- (void)onCountDownTapGesture:(id)arg1;
- (void)releaseCountDownTimer;
- (void)releaseCountUpTimer;
- (void)releaseSource;
@property(nonatomic) unsigned int remainSeconds; // @synthesize remainSeconds=_remainSeconds;
- (void)resetCountDownViewState;
- (void)saveFile:(id)arg1;
- (void)setAllTimeBySecond:(int)arg1;
@property(nonatomic) _Bool unLimited; // @synthesize unLimited=_unLimited;
- (void)setupIsFirstShowCountDownTip;
- (void)showBeginnerCountDownTips;
- (void)startCount;
- (void)startCountDown;
- (void)startCountUp;
- (void)stopCount;
- (void)stopCountDown;
- (void)stopCountUp;

@end

