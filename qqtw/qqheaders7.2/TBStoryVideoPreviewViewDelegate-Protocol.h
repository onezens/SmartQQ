//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBStoryVideoPreviewView;

@protocol TBStoryVideoPreviewViewDelegate <NSObject>

@optional
- (void)storyVideoPreview:(TBStoryVideoPreviewView *)arg1 changedWithTime:(double)arg2 videoTotalDuration:(double)arg3;
- (void)storyVideoPreview:(TBStoryVideoPreviewView *)arg1 preparedStatus:(_Bool)arg2;
- (void)storyVideoPreviewDidPlay:(TBStoryVideoPreviewView *)arg1;
- (void)storyVideoPreviewDidStop:(TBStoryVideoPreviewView *)arg1;
- (void)storyVideoPreviewReadyToPlay:(TBStoryVideoPreviewView *)arg1;
@end

