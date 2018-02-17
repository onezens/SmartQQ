//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_source>, NSString, QQLockDictionary;

@interface NearbyZanRequestManager : NSObject <IEngineDispatchDelegate>
{
    NSObject<OS_dispatch_source> *_timer;
    NSMutableDictionary *_requestCache;
    QQLockDictionary *_requestDict;
}

+ (id)getOIDBSSOPKGCmdV2:(long long)arg1 serviceType:(long long)arg2 buffer:(basic_string_075b6133)arg3;
+ (id)sharedInstance;
- (void)addLoginSigToEncoder:(struct CPBMessageEncoder *)arg1;
- (id)covertWarnMsgToNSString:(vector_1cc97d57)arg1;
- (void)dealloc;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (int)duplicateGetZanLimitInfoRequest:(unsigned long long)arg1 nearbyZanSource:(long long)arg2;
- (id)init;
- (_Bool)isNearbyOrTribeZan:(int)arg1;
- (void)notifyError:(id)arg1;
- (void)removeCache:(id)arg1;
- (int)requestNearbyZan:(long long)arg1;
- (void)requestNearbyZan:(id)arg1 summaryType:(int)arg2 isPayZan:(_Bool)arg3 nearbyZanSource:(long long)arg4 needDelay:(_Bool)arg5;
- (void)requestNearbyZan:(id)arg1 summaryType:(int)arg2 uSource:(int)arg3 isPayZan:(_Bool)arg4 needDelay:(_Bool)arg5;
- (int)requestZanLimitInfo:(unsigned long long)arg1 nearbyZanSource:(long long)arg2;
- (int)requestZanLimitInfo:(unsigned long long)arg1 nearbyZanSource:(long long)arg2 isNeedFirstInfo:(_Bool)arg3;
- (int)sendOIDBPackageWithCmd:(unsigned int)arg1 serviceType:(unsigned int)arg2 buffer:(basic_string_075b6133)arg3;
- (void)startNearbyZanLimitInfoRequestCheck:(long long)arg1;
- (void)stopNearbyZanLimitInfoRequestCheck:(long long)arg1;
- (void)updateChche:(id)arg1 type:(int)arg2 isPayZan:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
