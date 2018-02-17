//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CameraOutputAbstractLayer : NSObject
{
    _Bool _needAudio;
    long long _cameraPosition;
    NSString *_captureSessionPreset;
    id <CameraOutputAbstractLayerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)cameraController;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(retain, nonatomic) NSString *captureSessionPreset; // @synthesize captureSessionPreset=_captureSessionPreset;
@property(nonatomic) __weak id <CameraOutputAbstractLayerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)getCameraOutputOrientation;
- (id)init;
- (_Bool)loadCVDetectorModel:(id)arg1;
- (_Bool)loadDataModel:(id)arg1;
@property(nonatomic) _Bool needAudio; // @synthesize needAudio=_needAudio;
- (id)previewViewWidthFrame:(struct CGRect)arg1;
- (_Bool)putPixBuffer:(struct __CVBuffer *)arg1 andBufferTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)putSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)setDynamicDecoration:(id)arg1;
- (void)setupCameraController;
- (void)setupCapture;
- (_Bool)startRecorde:(id)arg1;
- (_Bool)stopRecorde;
- (void)switchCamera;
- (void)uninstallCapture;
- (void)updateSmoothLevel:(int)arg1;

@end

