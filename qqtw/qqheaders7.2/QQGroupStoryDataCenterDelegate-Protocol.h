//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, QQGroupStoryDataCenter;

@protocol QQGroupStoryDataCenterDelegate <NSObject>
- (void)groupStoryDataCenter:(QQGroupStoryDataCenter *)arg1 didFailGetList:(unsigned long long)arg2 isFromNet:(_Bool)arg3;
- (void)groupStoryDataCenter:(QQGroupStoryDataCenter *)arg1 didFinishDelete:(_Bool)arg2 storyID:(NSString *)arg3;
- (void)groupStoryDataCenter:(QQGroupStoryDataCenter *)arg1 didFinishGetList:(NSArray *)arg2 isEnd:(_Bool)arg3 isFromNet:(_Bool)arg4;
@end
