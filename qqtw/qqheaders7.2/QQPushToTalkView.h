//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QQAudioPlayDelegate.h"
#import "QQPttTouchDelegate.h"
#import "QQVoiceAnimDelegate.h"
#import "VolumeMeterDelegate.h"

@class NSString, NSTimer, QQAudioPlayView, QQBaseChatViewController, QQPttRecordBtn, QQPushToTalkAnimationView, QQVoicePlayAnimationView, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UILabel;

@interface QQPushToTalkView : UIView <QQPttTouchDelegate, QQAudioPlayDelegate, VolumeMeterDelegate, QQVoiceAnimDelegate>
{
    UILabel *_pttTipsLable;
    UIActivityIndicatorView *_indicator;
    UILabel *_preparingTipsLable;
    UILabel *_timeLable;
    UILabel *_operateTipsLabel;
    UIView *_operateViewContainer;
    UIButton *_playButton;
    UIButton *_deleteButton;
    UIImageView *_playButtonBg;
    UIImageView *_deleteButtonBg;
    UIImage *_operateBgNor;
    UIImage *_operateBgSel;
    UIButton *_cancelButton;
    UIButton *_sendButton;
    QQAudioPlayView *_audioPlayView;
    QQPttRecordBtn *_pushButton;
    QQVoicePlayAnimationView *_voicePlayAnimView;
    QQPushToTalkAnimationView *_animationLayer;
    NSTimer *_refreshTimer;
    _Bool _hasStartRecording;
    double max_scale;
    _Bool _isReceiptMode;
    QQBaseChatViewController *_chatViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QQPushToTalkAnimationView *animationLayer; // @synthesize animationLayer=_animationLayer;
@property(nonatomic) __weak QQBaseChatViewController *chatViewController; // @synthesize chatViewController=_chatViewController;
- (void)configAccTimeLAbel;
- (void)dealloc;
- (double)distanceFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (float)getCurrentVoicePeakPower;
- (double)getRecordTime;
- (void)hideOperateTips;
- (id)initWithFrame:(struct CGRect)arg1 chatViewController:(id)arg2;
@property(nonatomic) _Bool isReceiptMode; // @synthesize isReceiptMode=_isReceiptMode;
- (_Bool)needShowVoiceAnimation;
- (void)onCancel;
- (void)onPlayedTime:(int)arg1;
- (void)onRecordCancel;
- (void)onRecordDeviceReady;
- (void)onRecordTimeout;
- (void)onSend;
- (double)peakPowerLevel;
- (void)refreshTimeLable:(int)arg1;
- (void)removeFromSuperview;
- (void)resetToStart;
- (double)scacleOfView:(id)arg1 forPoint:(struct CGPoint)arg2;
- (void)showAudioPlayView;
- (void)showOpreateTips:(id)arg1;
- (void)touchBegin:(id)arg1;
- (void)touchCancel:(id)arg1;
- (void)touchEnd:(id)arg1;
- (void)touchMove:(id)arg1;
- (void)updateRecordTime;
- (void)videoReqInterrupt;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
