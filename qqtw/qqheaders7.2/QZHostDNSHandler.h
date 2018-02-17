//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface QZHostDNSHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_reqProcessQueue;
    NSMutableArray *_waitReqArray;
    long long _currentNetwork;
    NSMutableDictionary *_DNSOperationDic;
}

+ (void)scheduleDNSRequestOperation:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
+ (id)shareInstance;
- (void).cxx_destruct;
- (long long)getDNSOperationMaxNum;
- (id)init;
- (void)onNetReachabilityDidChange:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)scheduleRequestOperation:(id)arg1;
- (void)startNextRequest;
- (void)startReqImplementatio:(id)arg1;

@end

