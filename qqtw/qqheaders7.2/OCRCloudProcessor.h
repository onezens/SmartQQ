//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQARUploadImgCallback.h"

@class NSDate, NSThread, QQARCloudProcessorUpload, QQARCommonConfigModel, QQARFileParameterInfo, QQARImageSelect, QQARMarkerParameterInfo, QQARPretreatmentManager, QQARRootParameterInfo;

@interface OCRCloudProcessor : QQARUploadImgCallback
{
    _Bool _isOCRCloadProcessorRun;
    _Bool _isOCRCloadProcessorPause;
    _Bool _isOCRImgUploading;
    _Bool _isOCRCloudProcessorPause;
    NSThread *_mOCRProcessorThread;
    QQARImageSelect *_mOCRImageSelect;
    QQARPretreatmentManager *_mOCRPretreatmentManager;
    QQARCloudProcessorUpload *_mOCRCloudProcessorUpload;
    QQARRootParameterInfo *_mOCRRootParmeterInfo;
    QQARFileParameterInfo *_mOCRFileParameterInfo;
    QQARMarkerParameterInfo *_mOCRMarkerParameterInfo;
    QQARCommonConfigModel *_mOCRConfigModel;
    NSDate *_OCRLocalStartCalcTime;
    double _OCRLocalTimeoutInterval;
    _Bool _OCRHadTrigeTimeout;
    float _imageThreshold;
    float _sameSceneDiff;
    float _picQuality;
    _Bool _isThisDealloc;
    id <OCRUploadResultCallback> _resultCallback;
    id <OCRImageSelectedFinishDelegate> _uiDelegate;
}

- (void).cxx_destruct;
- (void)addFrameBuffer:(id)arg1;
- (void)cloudProcessorCallBack:(id)arg1;
- (void)cloudProcessorResultCallBack:(id)arg1;
- (void)cloudProcessorThreadRun;
- (void)dealloc;
- (void)doCloudRecogWithImage:(id)arg1;
- (void)doInitCloudProcessor:(id)arg1;
- (void)failCallBack:(id)arg1;
- (void)getDcpConfig;
- (id)init;
@property(nonatomic) _Bool isThisDealloc; // @synthesize isThisDealloc=_isThisDealloc;
- (_Bool)isWatingForLocalTimeout;
- (void)pauseCloudProcessor;
- (void)releseImageSelect;
@property(nonatomic) __weak id <OCRUploadResultCallback> resultCallback; // @synthesize resultCallback=_resultCallback;
- (void)resumeCloudProcessor;
- (void)saveCloudProcessorModelData;
@property(nonatomic) __weak id <OCRImageSelectedFinishDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
- (void)startCloudProcessor;
- (void)stopCloudProcessor;
- (void)sucCallBack:(id)arg1;

@end

