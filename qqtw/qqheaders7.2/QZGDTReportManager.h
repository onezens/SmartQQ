//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QZGDTReportManager : NSObject
{
}

+ (void)expourseGDTAdvInFeedWithModel:(id)arg1 feedIndex:(long long)arg2;
+ (void)expourseGDTAdvInVideoFeedWithModel:(id)arg1 controller:(id)arg2 params:(id)arg3;
+ (void)reportCGTAdvEvent:(id)arg1;
+ (void)reportClickEventWithFeedModel:(id)arg1 controller:(id)arg2 param:(id)arg3;
+ (void)reportLikeCommentServiceWithFeedModel:(id)arg1 feedIndex:(long long)arg2;
+ (void)reportTraceEventWithModel:(id)arg1 params:(id)arg2;

@end

