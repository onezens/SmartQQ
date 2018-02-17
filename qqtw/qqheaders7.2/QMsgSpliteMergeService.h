//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMsgSpliteMergeService.h"
#import "IQQMessageProcessor.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface QMsgSpliteMergeService : NSObject <IMsgSpliteMergeService, IQQMessageProcessor>
{
    NSMutableDictionary *_sendLargeMsgCache;
    NSMutableDictionary *_getLargeMsgCache;
    NSMutableDictionary *_UIModelCache;
    NSMutableDictionary *_SeqCache;
    NSMutableDictionary *_messageTmpCache;
    long long _getGroupMessageSSOSeq;
    id <QMsgSpliteMergeProtocol> _delegate;
    NSString *_uin;
    BOOL _requestCount;
    int _state;
    NSMutableArray *_tmpLoadMessageCache;
    _Bool _nomoreRoamMessage;
    int _pullRecentMessageCount;
    NSMutableDictionary *_silentReqMsgSSOSeqDic;
}

+ (id)shareInstance;
- (id)GetPartString:(id)arg1 maxLen:(int)arg2;
- (id)MsgDivide:(id)arg1 maxSize:(int)arg2;
- (void)_actionGetGroupMaxSeq:(id)arg1;
- (long long)_checkMessageContinuity:(id)arg1;
- (void)_cleanUp;
- (void)_getLocalMessage:(id)arg1 Begin:(long long)arg2 End:(long long)arg3 RequestRoam:(_Bool)arg4 Count:(long long)arg5;
- (void)_getLocalMessage:(id)arg1 Begin:(long long)arg2 End:(long long)arg3 RequestRoam:(_Bool)arg4 Count:(long long)arg5 silent:(_Bool)arg6;
- (void)_getMessageFromLocalOrServer:(id)arg1 Begin:(long long)arg2 End:(long long)arg3 RequestRoam:(_Bool)arg4;
- (void)_getMessageFromLocalOrServer:(id)arg1 Begin:(long long)arg2 End:(long long)arg3 RequestRoam:(_Bool)arg4 silent:(_Bool)arg5;
- (void)_onMessageSeqChanged:(id)arg1;
- (void)_reportAioMessageContinuityForGroup:(id)arg1 withIsContinuous:(_Bool)arg2 maxSeq:(long long)arg3 chasmSeq:(long long)arg4 continuousMsgCount:(unsigned long long)arg5;
- (void)_resultForAIO:(id)arg1;
- (void)_resultSilentMsgForAIO:(id)arg1;
- (id)_sortedGroupMessageArrayFromArray:(id)arg1;
- (void)actionGetGroupMessage:(id)arg1;
- (int)amendOfflineUnreadMessageCountWithMsgArray:(id)arg1;
- (void)cacheBigMessage:(id)arg1;
- (void)cacheBigMessage:(id)arg1 cache:(id)arg2;
- (void)cacheBigMessage:(id)arg1 splite:(id)arg2;
- (BOOL)checkBigMessageAbility;
- (BOOL)checkBigMessageAbility:(id)arg1;
- (long long)checkMessageContinuity:(id)arg1 begin:(long long)arg2 end:(long long)arg3;
- (_Bool)checkMessageContinuity:(id)arg1 faultTime:(int)arg2;
- (int)checkPushLargeMsgWithMessageModel:(id)arg1;
- (void)checkSpliteMessage:(id)arg1 splite:(id)arg2;
- (void)dealloc;
@property(nonatomic) id <QMsgSpliteMergeProtocol> delegate; // @synthesize delegate=_delegate;
- (id)getBigMessageUniqueKey:(id)arg1;
- (id)getCacheLargeMsgArray:(id)arg1;
- (void)getCompleteMessage:(id)arg1 begin:(long long)arg2 end:(long long)arg3;
- (void)getCompleteMessage:(id)arg1 begin:(long long)arg2 end:(long long)arg3 requestRoam:(_Bool)arg4;
- (void)getCompleteMessage:(id)arg1 begin:(long long)arg2 end:(long long)arg3 requestRoam:(_Bool)arg4 silent:(_Bool)arg5;
- (void)getCompleteMessage:(id)arg1 begin:(long long)arg2 end:(long long)arg3 silent:(_Bool)arg4;
- (int)getGroupMessage:(id)arg1 begin:(long long)arg2 last:(long long)arg3;
- (int)getGroupMessage:(id)arg1 begin:(long long)arg2 last:(long long)arg3 silent:(_Bool)arg4;
- (void)getMessageFirstIntoAIO:(id)arg1 End:(long long)arg2 Count:(long long)arg3;
- (void)getMessageFirstIntoAIOForFrobidGroup:(id)arg1 Count:(long long)arg2;
- (id)getRelatedMsgIDFromMultiMsg:(id)arg1;
- (unsigned short)getSendMessageCharSeq:(long long)arg1;
- (unsigned short)getSendMessageSeq:(long long)arg1;
- (void)handleMsgResult:(id)arg1;
- (_Bool)handleWupSendResult:(int)arg1 recvWupStruct:(CDStruct_7895f40e *)arg2 userInfo:(id)arg3;
- (_Bool)hasFinishGetUnreadMsg:(long long)arg1;
- (id)init;
- (_Bool)isEmoji:(const char *)arg1;
- (id)mergerLargeMessage:(id)arg1;
- (void)onGetGroupMessage:(id)arg1;
- (void)printQQMessageModel:(id)arg1 sourceTips:(id)arg2;
- (id)processMsgEncapsulation:(id)arg1;
- (void)removeMsgDelegate:(id)arg1;
- (_Bool)requestCanContinue:(long long)arg1 countLimit:(int)arg2;
- (void)sendLargeMsg:(id)arg1;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (_Bool)silentRequestDone;
- (id)sortLargeMessage:(id)arg1;
- (_Bool)stringContainsEmoji:(id)arg1 emojiLen:(int *)arg2;
- (void)updateDiscussSendState:(id)arg1 discussGroupUin:(id)arg2 state:(int)arg3 errorCode:(int)arg4;
- (void)updateGroupSendState:(id)arg1 groupCode:(id)arg2 state:(int)arg3 errorCode:(int)arg4;
- (_Bool)userNewEmojiAnalyze;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

