//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQRichMediaPickerPerformanceReportor : NSObject
{
    double _onEntry_timeStamp;
    double _onFirstFramePresended_timeStamp;
    double _onViewDidAppear_timeStamp;
    double _onCaptureSessionSetup_timeStamp;
    double _onCaptureSessionSetup_timeCost;
    double _onCaptureSessionStart_timeStamp;
    double _onCaptureSessionStart_timeCost;
    double _onCaptureSessionStartup_timeStamp;
    double _onCaptureFirstFrame_timeStamp;
    double _onInitRenderView_timeCost;
    double _onInitFaceSDK_timeCost;
    double _onCheckAudioSession_timeStamp;
    double _onCheckAudioSession_timeCost;
    double _onCheckAudioInputRoute_timeStamp;
    double _onCheckAudioInputRoute_timeCost;
    double _onCheckAudioSessionMode_timeStamp;
    double _onCheckAudioSessionMode_timeCost;
    _Bool _isFirstStartup;
    long long _businessType;
    long long _cameraPosition;
    double _onCloseCamare;
    double _selectPandentTime;
    double _totalSelectPandentTime;
    int _pandentCount;
    double _editStartTime;
    double _editEndTime;
    double _editHoldTime;
    double _maxCutTime;
    CDStruct_1b6d18a9 _currentCachetime;
    CDStruct_1b6d18a9 _maxCacheTime;
    _Bool _isFirstRecord;
    double _onCreateVideoWriterInput;
    double _onCreateVideoWriterInput_cost;
    double _onCreateAudioWriterInput;
    double _onCreateAudioWriterInput_cost;
    double _onDoInit;
    double _onDoInit_cost;
    double _onStartWriting;
    double _onStartWriting_cost;
    double _onStartRecord;
    double _onStartRecord_cost;
    NSMutableDictionary *_report_dic;
}

+ (id)getInstance;
- (void)closeCamare:(int)arg1;
- (void)createAudioWriterInputFinish;
- (void)createAudioWriterInputStart;
- (void)createVideoWriterInputFinish;
- (void)createVideoWriterInputStart;
- (void)doInitFinish;
- (void)doInitStart;
- (void)doReortRecordFinished;
- (void)doReport;
- (void)doReportCameraHoldTime;
- (void)doReportStartRecord;
- (void)endEdit;
- (id)init;
- (void)onCaptureFirstFrame;
- (void)onCaptureSessionSetupFinish;
- (void)onCaptureSessionSetupStart;
- (void)onCaptureSessionStart;
- (void)onCaptureSessionStartFinish;
- (void)onCaptureSessionStartup;
- (void)onCheckAudioInputRoute;
- (void)onCheckAudioInputRouteFinish;
- (void)onCheckAudioSessionFinish;
- (void)onCheckAudioSessionMode;
- (void)onCheckAudioSessionModeFinish;
- (void)onCheckAudioSessionStart;
- (void)onEntry;
- (void)onFirstFramePresented;
- (void)onInitFaceSDKFinish;
- (void)onInitFaceSDKStart;
- (void)onInitRenderViewFinish;
- (void)onInitRenderViewStart:(long long)arg1;
- (void)onViewDidAppear;
- (void)recordFinished;
@property(retain, nonatomic) NSMutableDictionary *report_dic; // @synthesize report_dic=_report_dic;
- (void)sampleBufferForTime:(CDStruct_1b6d18a9)arg1;
- (void)selectPandentTime;
- (void)setCameraPosition:(long long)arg1;
- (void)startEdit;
- (void)startRecordFinish;
- (void)startRecordStart;
- (void)startWritingFinish;
- (void)startWritingStart;
- (void)unSelectPandentTime;

@end

