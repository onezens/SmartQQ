//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSMutableDictionary, NSString;

@interface QQC2CMsgChannel : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_msgHandleDelegateDic;
}

+ (id)getInstance;
- (void)dealloc;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)getMsgHandlerType:(unsigned int)arg1 c2cCmd:(unsigned int)arg2 msg:(Msg_f948e9b8 *)arg3;
- (void)handleC2CPbPushMsg:(struct PbPushMsg *)arg1 msg:(CDStruct_7895f40e)arg2 seqId:(int)arg3 requestId:(int)arg4 toUin:(long long)arg5;
- (id)handleMsgResp:(struct PbGetMsgResp *)arg1;
- (id)init;
- (void)notifyError:(id)arg1;
- (id)parseMsg:(Msg_f948e9b8 *)arg1;
- (id)parseUinPairMsg:(struct UinPairMsg *)arg1;
- (id)peekMsgSyncInfo:(struct UinPairMsg *)arg1;
- (void)printC2CLog:(id)arg1 wupInfo:(CDStruct_7895f40e)arg2;
- (_Bool)registerC2CMsgHandleDelegate:(id)arg1 handleDelegate:(id)arg2;
- (void)unregisterC2CMsgHandleDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

