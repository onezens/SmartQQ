//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface StatisticModule : NSObject
{
    long long _totalOpenSuccess;
    long long _totalShare;
    double _startReadTime;
    long long _totalReadTime;
    long long _totalAioReadSend;
    long long _totalAioReadReceive;
}

+ (id)sharedInstance;
- (void)addAioRead;
- (void)addAioReadReceive;
- (long long)aioReadReceiveCount;
- (long long)aioReadSendCount;
- (void)endReadBookTime;
- (id)init;
- (_Bool)isToday;
- (void)openSuccessAdd;
- (long long)readBookSuccessCount;
- (void)saveToday;
- (void)shareAdd;
- (long long)shareCount;
- (void)startReadBookTime;
- (long long)totalReadBookTime;

@end

