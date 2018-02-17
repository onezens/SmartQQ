//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TrackerInterface : NSObject
{
}

+ (void)addAppEventWithName:(id)arg1 description:(id)arg2;
+ (_Bool)defaultDetectIsKeyBoardTouchWithTouchInWindow:(id)arg1;
+ (void)recordIntege:(long long)arg1 key:(id)arg2;
+ (void)recordText:(id)arg1 key:(id)arg2;
+ (void)setIsKeyBoardTouchBlock:(CDUnknownBlockType)arg1;
+ (void)setMaxEventCount:(unsigned long long)arg1;
+ (void)setMointerBlock:(CDUnknownBlockType)arg1;
+ (void)setObjectDescriptionBlock:(CDUnknownBlockType)arg1;
+ (void)setOutPutPerEventLogBlock:(CDUnknownBlockType)arg1;
+ (void)setOutPutPerEventObjectBlock:(CDUnknownBlockType)arg1;
+ (void)startTrace;
+ (id)traceEventQueueLog;
+ (id)traceFullLog;

@end
