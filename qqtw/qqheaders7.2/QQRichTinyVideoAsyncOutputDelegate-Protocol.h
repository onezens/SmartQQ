//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol QQRichTinyVideoAsyncOutputDelegate <NSObject>

@optional
- (void)onCaptureVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)onCaptureVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withInfo:(NSDictionary *)arg2;
- (void)onCatureAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
@end

