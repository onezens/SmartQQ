//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetExportSession;

@interface MQZoneVideoComposer : NSObject
{
    id <MQZoneVideoComposerDelegate> _delegate;
    AVAssetExportSession *_exporter;
}

+ (id)compositionNewVideoUsingVideoPath:(id)arg1 startTime:(double)arg2 stopTime:(double)arg3 error:(id *)arg4;
+ (id)compositionUsingVideoPath:(id)arg1 startTime:(double)arg2 stopTime:(double)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (void)cancelCompose;
- (void)composeUsingVideoPath:(id)arg1 startTime:(double)arg2 stopTime:(double)arg3 outputPath:(id)arg4 delegate:(id)arg5;
@property(nonatomic) __weak id <MQZoneVideoComposerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVAssetExportSession *exporter; // @synthesize exporter=_exporter;
- (void)notifyFail:(id)arg1;

@end

