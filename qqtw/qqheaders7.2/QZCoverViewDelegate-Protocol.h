//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol QZCoverViewDelegate <NSObject>

@optional
- (_Bool)HasPlayingFeedVideoView;
- (_Bool)enterGameBySchema:(NSString *)arg1;
- (void)enterGameByUrl:(NSString *)arg1;
- (_Bool)isActiveFeeds;
- (_Bool)isProfileFeeds;
- (_Bool)isTagEventFeeds;
- (void)pauseAllFeedVideo;
- (void)showTips:(NSString *)arg1;
@end
