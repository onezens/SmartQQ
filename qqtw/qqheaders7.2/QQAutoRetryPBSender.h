//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface QQAutoRetryPBSender : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_pbInfoDic;
    NSMutableArray *_supportCmds;
    int _sequence;
}

- (void)dealloc;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)init;
- (void)notifyError:(id)arg1;
- (void)onMsfPacketStateWithNoErr:(id)arg1;
- (void)registerCmd:(id)arg1;
- (_Bool)sendBuffer:(id)arg1 serviceCmd:(id)arg2 sequence:(int *)arg3 retry:(int)arg4 delegate:(id)arg5;
- (void)unregisterAllCmd;
- (void)unregisterCmd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

