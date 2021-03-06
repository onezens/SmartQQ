//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ARDownloadTaskDelegate.h"
#import "ARRenderingEngineDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"
#import "LocalProcessorTrackDelegate.h"
#import "QQARFaceRecogProtocol.h"
#import "QQARPretreatmentDelegate.h"
#import "QQARUploadResultCallback.h"

@class ARRenderingEngine, EAGLContext, NSDate, NSMutableArray, NSString, NSTimer, QQARCamera, QQARCloudProcessorController, QQARCommonConfigModel, QQARFeatureModel, QQARLocalProcessorManager, QQARTrackManager;

@interface AREngine : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, LocalProcessorTrackDelegate, QQARUploadResultCallback, ARRenderingEngineDelegate, ARDownloadTaskDelegate, QQARFaceRecogProtocol, QQARPretreatmentDelegate>
{
    QQARCommonConfigModel *_arCommonCfgModel;
    _Bool _enableARCloud;
    NSMutableArray *_recogCategorySortArray;
    QQARCamera *_arCamera;
    ARRenderingEngine *_arRenderEngine;
    QQARCloudProcessorController *_arCloudProcessController;
    QQARLocalProcessorManager *_arLocalProcessManager;
    NSTimer *_TrackLostTimer;
    _Bool _isInTrackDisappearTrackLost;
    NSTimer *_recogUnmatchTimer;
    QQARFeatureModel *_featureModel;
    unsigned long long _state;
    long long _cloudRecogType;
    QQARTrackManager *_arTrackManager;
    EAGLContext *_context;
    struct CGSize _framebufferDemensions;
    struct CGRect _visibleRect;
    double _dataReportFirstRenderTimeLen;
    NSDate *_dataReportFirstRenderStartTime;
    NSDate *_dataReportFirstRenderEndTime;
    double _dataReportFirstCloudRecogAndRenderTimeLen;
    NSDate *_dataReportFirstCloudRecogAndRenderStartTime;
    NSDate *_dataReportFirstCloudRecogAndRenderEndTime;
    _Bool _isFirstCapture;
    QQARFeatureModel *_reportFeature;
    _Bool _isOnlyRecogMode;
    id <AREngineDelegate> _delegate;
}

+ (void)checkCameraAvailable:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)AdjustRecogAfterCloudByProcessStrategy;
- (void)AdjustRecogBeforeCloudByProcessStrategy;
- (void)RecogUnmatchTimerLogic;
- (void)TrackLostTimerLogic;
- (void)advanceToNextVideo;
- (void)arStarFaceRecogStateDidChanged:(long long)arg1 faceList:(id)arg2 isRecognizing:(_Bool)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)cloudProcessorResultCallBack:(id)arg1;
- (void)cloudRecogPriorityProcess;
- (long long)cloudRecogResultProcessStrategy:(id)arg1;
- (_Bool)controlRenderPoseMatrix:(float *)arg1 ProjectionMatrix:(float *)arg2;
- (id)createManyVideoRendInfo:(id)arg1;
- (void)dataReport;
- (void)dealloc;
@property(nonatomic) __weak id <AREngineDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doCloudRecogPerFrame:(id)arg1;
- (id)doInitARRenderInfo:(id)arg1 item:(id)arg2;
- (_Bool)doInitArEngine:(struct CGRect)arg1 drawViewRect:(struct CGRect *)arg2 scanEndY:(double)arg3;
- (_Bool)doInitArTrack:(struct CGSize)arg1;
- (_Bool)doInitCamera:(struct CGSize)arg1;
- (_Bool)doInitCloudRecog;
- (_Bool)doInitConfigModel;
- (_Bool)doInitLocalRecog:(struct CGRect)arg1 drawRect:(struct CGRect *)arg2 avCaptureSize:(struct CGSize *)arg3;
- (_Bool)doInitRender:(struct CGSize)arg1 scanEndY:(double)arg2;
- (void)doLocalRecogPerFrame:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (_Bool)doTrackPerFrame;
- (void)enterOnlyRecogMode;
- (void)exitOnlyRecogMode;
@property(retain, nonatomic) QQARFeatureModel *featureModel; // @synthesize featureModel=_featureModel;
- (_Bool)frameRender;
- (struct CGRect)fullSceneVideoRect:(double)arg1 height:(double)arg2;
- (long long)getCurrentRecogState:(unsigned long long)arg1;
- (int)getCurrentRecogType;
- (long long)getReportArType;
- (long long)getReportVideoType;
- (void)handleSingleTap:(id)arg1;
- (_Bool)hiddenRender;
- (_Bool)hiddenScanLine;
- (_Bool)isOnlyRecogMode;
- (_Bool)loadDynamicFeature:(id)arg1;
- (struct CGRect)ndcTransformation:(struct CGRect)arg1;
- (void)onARFragmentLoadNotification:(id)arg1;
- (void)onARFragmentPlayNotification:(id)arg1;
- (void)onARFragmentRequestAwardNotification:(id)arg1;
- (void)onARResourceDownloadFailure:(id)arg1;
- (void)onARResourceDownloadProgress:(id)arg1;
- (void)onARResourceDownloadSuccess:(id)arg1;
- (void)onAddDynamicFeatureNotification:(id)arg1;
- (void)onCameraEnd;
- (void)onCameraFrameCapture;
- (void)onCameraStart:(id)arg1;
- (void)onEnd:(id)arg1 videoTask:(id)arg2;
- (void)onLocalRecogCallback;
- (void)onMarkerLocalRecogCallback:(id)arg1 item:(id)arg2 state:(unsigned long long)arg3;
- (void)onRenderEnd;
- (void)onRenderStart;
- (void)onStart:(id)arg1 videoTask:(id)arg2;
- (_Bool)pauseArEngine:(_Bool)arg1;
- (_Bool)pauseArRecog:(int)arg1 isAllPause:(_Bool)arg2;
- (_Bool)pauseCloudRecog;
- (_Bool)pauseLocalRecog;
- (_Bool)pauseLocalRecog:(int)arg1;
- (void)pretreatmentCallBack:(id)arg1;
- (_Bool)processCloudFaceRecogResult:(id)arg1;
- (_Bool)processCloudMarkerRecogResult:(id)arg1;
- (_Bool)processCloudObjectRecogResult:(id)arg1;
- (_Bool)refreshArEngine;
- (_Bool)resetConfigModel;
- (_Bool)resumeArEngine;
- (_Bool)resumeArRecog;
- (_Bool)resumeCloudRecog;
- (_Bool)resumeLocalRecog;
- (_Bool)resumeLocalRecog:(int)arg1;
- (_Bool)shouldEnterOnlyRecogMode:(id)arg1;
- (_Bool)showRender;
- (_Bool)showScanLine;
- (_Bool)startArEngine;
- (_Bool)startArTrack:(long long)arg1 featureType:(long long)arg2 markerSize:(struct CGSize)arg3;
- (_Bool)startCamera;
- (_Bool)startCloudRecog;
- (_Bool)startDownloadResource:(int)arg1;
- (_Bool)startLocalRecog:(int)arg1;
- (void)startRecogUnmatchTimer;
- (_Bool)startRender:(id)arg1;
- (void)startTrackLostTimer:(float)arg1;
- (_Bool)stopArEngine;
- (_Bool)stopArEngineButKeepCamera;
- (_Bool)stopArTrack;
- (_Bool)stopCamera;
- (_Bool)stopCloudRecog;
- (_Bool)stopDownloadResource;
- (_Bool)stopLocalRecog;
- (void)stopRecogUnmatchTimer;
- (_Bool)stopRender;
- (void)stopTrackLostTimer;
- (int)typeWithCloundType;
- (_Bool)updateArEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

