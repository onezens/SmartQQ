//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQSilkRecorderDelegate.h"

@class FTSAISilkRecorder, GetMicrophonePeakPowerLogic, NSObject<IPttRecorderInterface>, NSString;

@interface FTSAIRecorder : NSObject <QQSilkRecorderDelegate>
{
    FTSAISilkRecorder *_aiSilkRecorder;
    GetMicrophonePeakPowerLogic *_PeakPowerLogic;
    NSString *_ftsUuid;
    double _maxRecordTime;
    id <QQPttRecorderDelegate> _delegate;
    NSObject<IPttRecorderInterface> *_aiImplRecorder;
}

+ (id)getInstance;
- (void).cxx_destruct;
@property(retain) NSObject<IPttRecorderInterface> *aiImplRecorder; // @synthesize aiImplRecorder=_aiImplRecorder;
@property(nonatomic) __weak id <QQPttRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ftsCancelRecord;
- (double)ftsGetRecordedTime;
- (float)ftsGetVolumePower;
- (_Bool)ftsIsRecording;
- (void)ftsPrepareRecord:(id)arg1;
- (void)ftsRemoveRecordFile:(id)arg1;
- (void)ftsSetMaxRecordTime:(float)arg1;
- (_Bool)ftsStartRecvData;
- (void)ftsStopRecord:(_Bool)arg1;
- (void)onRecordBeInterrupt;
- (void)onRecordError:(int)arg1;
- (void)onRecordFinish:(id)arg1;
- (void)onRecordReady;
- (void)onSilkFrameRecord:(id)arg1 andTotalFrameCount:(unsigned long long)arg2;
- (void)onTimeOut;
- (void)onVADSilkCheckOver;
- (void)p_notifyError:(id)arg1;
- (void)p_resetParam;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

