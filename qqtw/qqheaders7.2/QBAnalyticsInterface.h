//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QBAnalyticsInterface : NSObject
{
}

+ (_Bool)doReport:(id)arg1 isSucceed:(_Bool)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5;
+ (void)initAnalytics;
+ (void)reportAppInfo;
+ (void)reportPerformance:(id)arg1;
+ (void)reportURL:(id)arg1;

@end

