//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "BDHUploadDelegate.h"
#import "FTSAIMicphoneDelegate.h"
#import "QQPttRecorderDelegate.h"

@class FTSAIMicphone, FTSAIRecorder, NSString, NSTimer, QQVerticalAlignmentLabel, UIButton, UIImageView, UILabel, UINavigationController;

@interface FTSAISearchView : UIView <QQPttRecorderDelegate, FTSAIMicphoneDelegate, BDHUploadDelegate>
{
    NSTimer *_aiSearchTimer;
    CDUnknownBlockType _onHandleCallBack;
    UINavigationController *_nav;
    FTSAIRecorder *_ftsAIRecorder;
    NSString *_ftsUuid;
    long long _bdhTaskIdCache;
    NSString *_uniqueKeyCache;
    NSTimer *_aiSMTimer;
    unsigned long long _currAISearchState;
    NSString *_aiCurrShowKey;
    UIImageView *_aiBigMicphoneImgV;
    FTSAIMicphone *_aiMicphoneView;
    QQVerticalAlignmentLabel *_aiPromptLabel;
    UIButton *_aiCloseBtn;
    UIView *_aiRetryView;
    UILabel *_aiRetryLabel;
    int _callsource;
}

- (void).cxx_destruct;
- (void)aiSMDisplayChange;
- (void)aiSMExecuteSearch:(id)arg1;
- (void)aiSearchTimeOut;
- (void)aiShowKeyAdjust:(struct CGSize)arg1;
- (void)btnCloseAISearch;
@property(nonatomic) int callsource; // @synthesize callsource=_callsource;
- (void)dealloc;
- (void)didChangeStatusBarFrame:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 nav:(id)arg2 onHandleCallBack:(CDUnknownBlockType)arg3;
- (void)interruptAISearch:(id)arg1;
- (void)notifyBDHCancel:(long long)arg1 uploadDetail:(id)arg2;
- (void)notifyBDHFail:(long long)arg1 uploadDetail:(id)arg2 fail:(id)arg3;
- (void)notifyBDHSuccess:(long long)arg1 uploadDetail:(id)arg2;
- (void)onMicphoneEnding;
- (float)onMicphoneVolume;
- (void)onRecordEnd:(id)arg1 send:(_Bool)arg2;
- (void)onRecordFailed:(id)arg1;
- (void)onRecordTimeOut:(id)arg1;
- (void)onRecordVADCheckOver:(id)arg1;
- (void)p_aiSearchStateMachine:(unsigned long long)arg1;
- (void)p_buildRetryView;
- (void)p_closeAISearch;
- (void)p_ftsAIPageItem;
- (void)p_ftsInitAIRecorder;
- (void)p_ftsRegisterNotif;
- (void)p_ftsStartAIRecorder;
- (void)p_ftsStopAIRecorder:(_Bool)arg1;
- (double)p_ftsVolumePowerLevel;
- (void)p_pageItemShowAnimation:(struct CGPoint)arg1 forView:(id)arg2 duration:(double)arg3 order:(int)arg4;
- (void)p_voiceIdentityRequest:(id)arg1;
- (void)retryClick:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

