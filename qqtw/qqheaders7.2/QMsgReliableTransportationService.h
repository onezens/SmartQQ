//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMsgReliableTransportationService.h"
#import "MessageSenderDelagate.h"

@class NSMutableArray, NSMutableDictionary, NSString, RTSDataSource;

@interface QMsgReliableTransportationService : NSObject <IMsgReliableTransportationService, MessageSenderDelagate>
{
    NSMutableDictionary *mSendResultHandlerDic;
    NSString *mUin;
    _Bool bSendingQueueLoaded;
    RTSDataSource *mDataSource;
    NSMutableArray *mSenderQueue;
    _Bool bUinFirstLogin;
    id <MessageSender> mQuickSender;
}

+ (id)getInstance;
- (void)dealloc;
- (void)doInit;
- (id)getAllPiecesOfOneLongMsg:(id)arg1;
- (id)getLicence:(id)arg1;
- (id)getSendingMsgCacheFileName;
- (_Bool)handleMSFData:(char *)arg1 cmd:(id)arg2 bufferLenght:(int)arg3 seqId:(int)arg4;
- (void)handleMsgSender:(id)arg1 msgSeqId:(int)arg2 responsePacket:(id)arg3;
- (void)handleMsgSender:(id)arg1 msgSeqId:(int)arg2 sendResult:(int)arg3;
- (void)installSenders;
- (_Bool)isMsgSending:(id)arg1;
- (_Bool)isMultiMessageSentOutCompletely:(id)arg1;
- (void)markMultiMessageAllFailed:(id)arg1;
- (void)notifyMsgCacheLoadFinished;
- (void)onAccountLogin:(id)arg1;
- (void)onAccountLogout:(id)arg1;
- (id)registerSendResultHandler:(id)arg1;
- (void)removeMultiMessagesFromSendQueue:(id)arg1;
- (id)removeSendingMsgBySeq:(int)arg1;
- (int)sendMessage:(id)arg1 transportLicence:(id)arg2;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=mUin;
- (_Bool)tryResendMsg:(id)arg1 bySender:(id)arg2 rtsErrorCode:(int *)arg3;
- (void)unregisterSendResultHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

