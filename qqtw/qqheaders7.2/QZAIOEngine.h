//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseEngine.h"

@interface QZAIOEngine : QZBaseEngine
{
}

+ (id)instance;
- (void)checkCacheCount:(id)arg1;
- (void)checkCanShowQzoneNewestFeed:(long long)arg1 executeBlockOnMainThread:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)getAIONewestFeedFromCache:(long long)arg1;
- (long long)getAIONewestFeedFromNet:(long long)arg1;
- (double)getDelAllMsgTime;
- (double)getDellOneC2CMsgTime:(long long)arg1;
- (id)getHostDataInfo:(long long)arg1;
- (id)init;
- (void)onDellAllMsg;
- (void)onDellOneC2CMsg:(id)arg1;
- (void)updateAIONewestFeedInfo:(long long)arg1 feedInfo:(id)arg2;
- (void)updateCache;

@end

