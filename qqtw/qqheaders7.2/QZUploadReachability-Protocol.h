//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol QZUploadReachability <NSObject>
+ (NSString *)reachabilityDidChangedNotificationName;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithHostName:(NSString *)arg1;
- (_Bool)connectionRequired;
- (unsigned long long)currentReachabilityStatus;
- (_Bool)isReachableViaWiFi;
- (_Bool)startNotifier;
- (void)stopNotifier;
@end

