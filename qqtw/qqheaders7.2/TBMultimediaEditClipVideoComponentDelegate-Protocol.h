//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVMutableComposition, TBStoryVideoPreviewView;

@protocol TBMultimediaEditClipVideoComponentDelegate <NSObject>
- (AVMutableComposition *)compositionVideoWithStartTime:(double)arg1 stopTime:(double)arg2;
- (void)startVideoPlayWithMusic:(_Bool)arg1 isGifClick:(_Bool)arg2;
- (void)stopVideoPlay;
- (TBStoryVideoPreviewView *)videoPreviewView;
@end

