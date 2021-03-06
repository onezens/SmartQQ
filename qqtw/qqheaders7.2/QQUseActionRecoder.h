//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSObject<OS_dispatch_queue>;

@interface QQUseActionRecoder : NSObject
{
    NSObject<OS_dispatch_queue> *_rdmEventSerialQueue;
    NSDate *_lastTouchEventDate;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)addAppEventWithName:(id)arg1 description:(id)arg2;
- (id)init;
@property(retain) NSDate *lastTouchEventDate; // @synthesize lastTouchEventDate=_lastTouchEventDate;
- (void)onNetReachabilityDidChange:(id)arg1;
- (void)recordImportantIntege:(long long)arg1 key:(id)arg2;
- (void)recordImportantText:(id)arg1 key:(id)arg2;
- (void)recordTempIntege:(long long)arg1 key:(id)arg2;
- (void)recordTempText:(id)arg1 key:(id)arg2;
- (void)reportWatchDogEventByRdq;
- (void)reprotOCSPlueinOpenTimesWithPluginID:(id)arg1;
- (void)startTrace;
- (id)traceEventQueueLog;
- (id)traceFullLog;

@end

