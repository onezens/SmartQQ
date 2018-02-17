//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MediaProcessTool : NSObject
{
}

+ (_Bool)addAudioTrackToCompositionUsingAudioPath:(id)arg1 composition:(id)arg2 audioMix:(id)arg3 duration:(CDStruct_1b6d18a9)arg4 error:(id *)arg5;
+ (id)addBackgroundMiusicWithAsset:(id)arg1 audioUrl:(id)arg2 dealType:(int)arg3 videoMute:(_Bool)arg4 progress:(float)arg5 andCaptureVideoDuration:(double)arg6;
+ (void)exportAVAsset:(id)arg1 outputURL:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)exportAVAsset:(id)arg1 outputURL:(id)arg2 withVideoSettings:(id)arg3 withAudioSettings:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
+ (id)makeVideoMixMusic:(id)arg1 withType:(int)arg2 musicModel:(id)arg3;
+ (id)mixDoodle:(id)arg1 andWaterImage:(id)arg2 withFrame:(struct CGRect)arg3 withOrientation:(int)arg4;
+ (void)processAsset:(id)arg1 editInfo:(id)arg2 wartermarkImage:(id)arg3 wartermarkFrame:(struct CGRect)arg4 outputVideoSettings:(id)arg5 outputAudioSettings:(id)arg6 outputPath:(id)arg7 completeHandle:(CDUnknownBlockType)arg8;
+ (void)processEditVideoWithInputPath:(id)arg1 editInfo:(id)arg2 wartermarkImage:(id)arg3 wartermarkFrame:(struct CGRect)arg4 outputVideoSettings:(id)arg5 outputAudioSettings:(id)arg6 outputPath:(id)arg7 completeHandle:(CDUnknownBlockType)arg8;
+ (void)processFilterAndDoodle:(id)arg1 withType:(int)arg2 withMediaType:(unsigned long long)arg3 withOverlay:(id)arg4 withFilter:(id)arg5 isSilence:(_Bool)arg6 outputVideoSettings:(id)arg7 outputAudioSettings:(id)arg8 outputPath:(id)arg9 withCompletionHandler:(CDUnknownBlockType)arg10;
+ (id)processForward:(id)arg1 withType:(int)arg2 isSilence:(_Bool)arg3;
+ (void)processOrientation:(id)arg1 outputPath:(id)arg2 withOrientation:(long long)arg3 withCompletionHanlder:(CDUnknownBlockType)arg4;
+ (void)processReverse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)videoOutputSettingWithBitrate:(unsigned long long)arg1 videoSize:(struct CGSize)arg2 withOrientation:(int)arg3;

@end
