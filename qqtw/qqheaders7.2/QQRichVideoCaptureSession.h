//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoPreviewLayer, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface QQRichVideoCaptureSession : NSObject
{
    NSObject<OS_dispatch_queue> *_sessionQueue;
    _Bool _hasFlash;
    _Bool _configing;
    NSString *_captureSessionPresetName;
    long long _defaultCameraPosition;
    long long _flashMode;
    long long _curDevicePosition;
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_cameraDeviceInput;
    AVCaptureDeviceInput *_cameraDeviceInputFront;
    AVCaptureVideoPreviewLayer *_previewLayer;
    AVCaptureDeviceInput *_videoDeviceInput;
    AVCaptureDeviceInput *_audioDeviceInput;
    AVCaptureDeviceInput *_defaultAudioDeviceInput;
    NSMutableArray *_captureOutput;
    NSMutableDictionary *_activeFormatCache;
    struct CGSize _deviceCaptureResolution;
    struct CGSize _deviceCaptureResolutionFront;
    struct CGSize _deviceNightModeResolution;
}

+ (id)aioTinyVideoCaputreSession;
+ (void)cleanAIOTinyVideoCaputreSession;
@property(retain, nonatomic) NSMutableDictionary *activeFormatCache; // @synthesize activeFormatCache=_activeFormatCache;
- (_Bool)addAudioDeviceInput:(id)arg1;
- (_Bool)addCaptureOutput:(id)arg1;
- (_Bool)asyncDispatchToSessionQueue:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) AVCaptureDeviceInput *audioDeviceInput; // @synthesize audioDeviceInput=_audioDeviceInput;
- (_Bool)beginConfig;
- (void)cacheDeviceFormat:(struct CGSize)arg1 format:(id)arg2 device:(id)arg3;
@property(retain, nonatomic) AVCaptureDeviceInput *cameraDeviceInput; // @synthesize cameraDeviceInput=_cameraDeviceInput;
@property(retain, nonatomic) AVCaptureDeviceInput *cameraDeviceInputFront; // @synthesize cameraDeviceInputFront=_cameraDeviceInputFront;
@property(retain, nonatomic) NSMutableArray *captureOutput; // @synthesize captureOutput=_captureOutput;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(retain, nonatomic) NSString *captureSessionPresetName; // @synthesize captureSessionPresetName=_captureSessionPresetName;
- (void)cleanCaptureSession;
@property _Bool configing; // @synthesize configing=_configing;
@property(nonatomic) long long curDevicePosition; // @synthesize curDevicePosition=_curDevicePosition;
- (void)dealloc;
@property(retain, nonatomic) AVCaptureDeviceInput *defaultAudioDeviceInput; // @synthesize defaultAudioDeviceInput=_defaultAudioDeviceInput;
- (id)defaultAudioInput;
@property(nonatomic) long long defaultCameraPosition; // @synthesize defaultCameraPosition=_defaultCameraPosition;
@property(nonatomic) struct CGSize deviceCaptureResolution; // @synthesize deviceCaptureResolution=_deviceCaptureResolution;
@property(nonatomic) struct CGSize deviceCaptureResolutionFront; // @synthesize deviceCaptureResolutionFront=_deviceCaptureResolutionFront;
@property(nonatomic) struct CGSize deviceNightModeResolution; // @synthesize deviceNightModeResolution=_deviceNightModeResolution;
- (_Bool)endConfig;
- (id)fetchActiveFormat:(struct CGSize)arg1 device:(id)arg2;
- (id)fetchCamera:(long long)arg1;
@property(nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
- (id)formatFromCache:(struct CGSize)arg1 device:(id)arg2;
- (id)getCameraDevice;
- (id)getCameraDeviceInput:(_Bool)arg1 nightMode:(_Bool)arg2;
@property(nonatomic) _Bool hasFlash; // @synthesize hasFlash=_hasFlash;
- (id)init;
- (_Bool)initCaptureSessionImpl;
- (_Bool)isConfiging;
- (_Bool)isRunning;
- (_Bool)isSameSession:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onCaptureInputPortFormatDescriptionDidChange:(id)arg1;
- (void)preFetchDevice:(struct CGSize)arg1 front:(struct CGSize)arg2;
- (void)prefetchAudioDevice;
- (void)preloadCaptureSession:(struct CGSize)arg1 front:(struct CGSize)arg2;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (struct CGSize)previewResolution;
- (_Bool)removeAudioDeviceInput;
- (_Bool)removeCaptureOutput:(id)arg1;
- (_Bool)removeVideoDeviceInput;
- (void)setISOChangeCallback:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) AVCaptureDeviceInput *videoDeviceInput; // @synthesize videoDeviceInput=_videoDeviceInput;
- (_Bool)setupCaptureSession:(_Bool)arg1;
- (_Bool)shutdown;
- (_Bool)startup;
- (_Bool)switchCamera;
- (_Bool)syncDispatchToSessionQueue:(CDUnknownBlockType)arg1;
- (void)updateDeviceActiveFormat:(id)arg1 resolution:(struct CGSize)arg2;

@end

