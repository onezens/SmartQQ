//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureDevice, AVCaptureDeviceFormat, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, NSString, QQARCameraFrame;

@interface QQARCamera : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    _Bool _authorized;
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_input;
    AVCaptureVideoDataOutput *_output;
    AVCaptureDeviceFormat *_activeFormat;
    QQARCameraFrame *_currentFrame;
    id <AVCaptureVideoDataOutputSampleBufferDelegate> _delegate;
    AVCaptureDevice *_device;
    CDStruct_79c71658 _videoDimensions;
}

- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
@property(retain, nonatomic) QQARCameraFrame *currentFrame; // @synthesize currentFrame=_currentFrame;
- (void)dealloc;
@property(nonatomic) __weak id <AVCaptureVideoDataOutputSampleBufferDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AVCaptureDevice *device; // @synthesize device=_device;
- (id)init;
- (id)initWithPixelDimensions:(struct CGSize)arg1;
- (void)onSessionNotification:(id)arg1;
- (void)start;
- (void)stop;
@property(readonly, nonatomic) CDStruct_1ef3fb1f videoDimensions; // @synthesize videoDimensions=_videoDimensions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

