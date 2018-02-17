//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"
#import "IQQMessageProcessor.h"

@class DiscussGroupChatStorage, DiscussGroupMsgReadStorage, NSMutableArray, NSMutableDictionary, NSPointerArray, NSString;

@interface DiscussGroupChatEngine : NSObject <IEngineDispatchDelegate, IQQMessageProcessor>
{
    id <IDiscussGroupChatEngineDelegate> _Delegate;
    NSPointerArray *_delegateArray;
    DiscussGroupChatStorage *_chatStorage;
    NSMutableArray *_sendingMsgQueue;
    NSMutableDictionary *_msgCacheDict;
    NSMutableDictionary *_lastTipArray;
    NSMutableDictionary *_excessMsgDic;
    NSMutableDictionary *_disSeqResultListDict;
    DiscussGroupMsgReadStorage *_msgReadStorage;
    NSMutableDictionary *_requestCountDic;
    int soundTime;
    NSMutableDictionary *_recordTipsFlag;
    struct dispatch_queue_s *_queue;
    _Bool _isNeedAudioTip;
}

+ (id)getInstance;
- (void)InsertGroupAudioMessage:(id)arg1 discussGroupUin:(unsigned long long)arg2;
- (void)InsertTipMessage:(id)arg1 discussGroupUin:(unsigned long long)arg2;
- (_Bool)NeedDisplayTipsMessageInRecentView:(id)arg1;
- (id)QQMessageWithDiscussUin:(long long)arg1 msgID:(int)arg2;
- (void)SetFileMsgSendStateWithMsgID:(id)arg1 discussGroupUin:(id)arg2 state:(int)arg3 read:(int)arg4;
- (void)SetMsgSendStateWithMsgID:(id)arg1 discussGroupUin:(id)arg2 state:(int)arg3 errorCode:(int)arg4;
- (long long)_checkMessageContinuity:(id)arg1 begin:(long long)arg2 end:(long long)arg3;
- (void)_clearRequestCountOfDiscuss:(id)arg1;
- (void)_increaseRequestCountOfDiscuss:(id)arg1;
- (_Bool)_isToGetMoreForLargeMessage:(unsigned long long)arg1 msgArray:(id)arg2 requestRoam:(_Bool)arg3;
- (id)_mergeExcessMsgWithArray:(id)arg1 discussGroupUin:(id)arg2;
- (void)_onMessageSeqChanged:(id)arg1;
- (void)_reportAioMessageContinuityForDiscuss:(id)arg1 withIsContinuous:(_Bool)arg2 maxSeq:(long long)arg3 chasmSeq:(long long)arg4 continuousMsgCount:(unsigned long long)arg5;
- (unsigned long long)_requestCountOfDiscuss:(id)arg1;
- (void)_requestDiscussGroupMsg:(long long)arg1 endSeq:(long long)arg2 beginSeq:(long long)arg3;
- (void)addDelegate:(id)arg1;
- (void)addMessage:(id)arg1 toDisGroup:(long long)arg2;
- (_Bool)addNotifyMsg:(long long)arg1 msgModel:(id)arg2 type:(int)arg3;
- (void)asyncGetMessageFromDiscussGroup:(unsigned long long)arg1 fromMsgSeq:(long long)arg2 count:(unsigned int)arg3 requestRoam:(_Bool)arg4;
- (void)asyncGetMsgWithDiscussUin:(id)arg1 WithTypes:(id)arg2 notMoreThanSeq:(long long)arg3 limitCount:(unsigned int)arg4 callback:(id)arg5 userdata:(id)arg6;
- (void)changeAccount;
- (void)clearAllDiscussMsg;
- (void)clearDiscussGroupTipsFlag:(long long)arg1;
- (void)clearMsgSeq;
- (void)clearTipMsgCache:(unsigned long long)arg1;
- (void)deleteDiscussGroupSession:(unsigned long long)arg1;
- (void)deleteMsgWithDiscussGroup:(unsigned long long)arg1;
- (void)deleteMsgWithDiscussGroupUin:(unsigned long long)arg1 andMsgId:(int)arg2;
- (void)deleteRecentMsgWithDiscussUin:(unsigned long long)arg1;
- (void)deleteRecentMsgWithDiscussUin:(unsigned long long)arg1 msgId:(long long)arg2;
- (void)deleteServerDiscussGroupMsg:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)ftsGetDiscussGroupMsg:(unsigned long long)arg1 fromSeq:(long long)arg2 endSeq:(long long)arg3;
- (id)ftsGetRecentDiscussGroupMsg:(unsigned long long)arg1 count:(int)arg2;
- (char *)getDelMsgBuffer:(vector_fbf08522 *)arg1;
- (id)getDiscussGroupChatStorage;
- (unsigned long long)getDiscussGroupLastReadSeq:(id)arg1;
- (id)getDiscussGroupMsg:(unsigned long long)arg1 keyword:(id)arg2 pageSize:(int)arg3 page:(int)arg4 includeSelf:(_Bool)arg5;
- (id)getDiscussGroupMsg:(unsigned long long)arg1 pageSize:(int)arg2 page:(int)arg3;
- (char *)getDiscussGroupMsgBuffer:(long long)arg1 BeginSeq:(long long)arg2 EndSeq:(long long)arg3;
- (id)getDiscussGroupMsgListIncludingMsg:(id)arg1 pageReturn:(int *)arg2 pagesize:(int)arg3;
- (id)getDiscussGroupMsgNoBlank:(unsigned long long)arg1 count:(int)arg2 beforeSeq:(long long)arg3;
- (char *)getDiscussGroupMsgSeqBuffer:(vector_6cfd7a25)arg1 verifyType:(BOOL)arg2;
- (id)getDiscussGroupReadStorage;
- (unsigned int)getGrayTipIdWithType:(int)arg1;
- (id)getLatestMessageInGroup:(unsigned long long)arg1 uin:(id)arg2;
- (unsigned int)getMaxMsgSeq:(unsigned long long)arg1;
- (unsigned int)getMaxServerMsgSeq:(unsigned long long)arg1;
- (id)getMessage:(id)arg1 msgSeq:(unsigned int)arg2;
- (id)getMessage:(id)arg1 msgSeq:(unsigned int)arg2 fromUin:(unsigned long long)arg3;
- (unsigned int)getMsgNumOfDiscussGroup:(unsigned long long)arg1;
- (char *)getMsgReadConfirmBuffer:(long long)arg1 msgSeq:(long long)arg2 verifyType:(BOOL)arg3;
- (id)getRecentDiscussGroupArray:(unsigned int)arg1;
- (void)handleDiscussList:(id)arg1;
- (_Bool)hasUnreportMessage:(unsigned long long)arg1;
- (id)init;
- (void)insertMsgs:(id)arg1 discussUin:(unsigned long long)arg2;
- (void)insertRecentMessage:(id)arg1;
- (_Bool)isExistPttFile:(id)arg1 discussGroupUin:(unsigned long long)arg2;
@property(nonatomic) _Bool isNeedAudioTip; // @synthesize isNeedAudioTip=_isNeedAudioTip;
- (void)loadDiscussGroupTipsFlag;
- (void)netGetDiscussGroupMsg:(id)arg1;
- (void)notifyError:(id)arg1;
- (_Bool)notifyPushDiscussGroupMsg:(id)arg1 discussGroupUin:(unsigned long long)arg2 infoSeq:(unsigned long long)arg3 isFromMe:(_Bool)arg4;
- (void)notifyRegProxyDiscussGroupSeq:(char *)arg1 DataLen:(int)arg2;
- (_Bool)notifySendDiscussGroupMsg:(id)arg1 discussGroupUin:(unsigned long long)arg2;
- (void)notifySendDiscussGroupMsgResult:(_Bool)arg1 discussGroupUin:(unsigned long long)arg2 msgModelTimeStamp:(int)arg3 serverMsgTime:(unsigned int)arg4;
- (void)onDiscussGroupMessageReadNotify:(id)arg1;
- (void)onGetOfflineDiscussGroupMsg:(id)arg1;
- (id)parseChangeDiscussNameTipMsg:(unsigned long long)arg1 msgData:(char *)arg2 withNickName:(id)arg3;
- (int)parseGetDiscussGroupMsgSeq:(char *)arg1 dataLen:(int)arg2 response:(struct SvcResponsePullDisMsgSeq *)arg3;
- (int)parseMsgDel:(char *)arg1 dataLen:(int)arg2 response:(struct SvcResponseDelDisMsg *)arg3;
- (id)parsePrivacyTipMsg:(unsigned long long)arg1 msgData:(char *)arg2 withNickNames:(id)arg3;
- (int)parsePullDiscussGroupMsg:(char *)arg1 dataLen:(int)arg2 response:(struct SvcResponsePullDisMsg *)arg3;
- (int)parseResponsePullDisGroupSeq:(char *)arg1 dataLen:(int)arg2 response:(struct SvcResponsePullDisGroupSeq *)arg3;
- (id)parseRoamMsgs:(struct PbGetDiscussMsgResp *)arg1;
- (id)parseTipMsg:(unsigned long long)arg1 cmdUIN:(unsigned long long)arg2 opType:(int)arg3 nickAry:(id)arg4 extCmd:(int)arg5;
- (id)parseTipMsg:(unsigned long long)arg1 opType:(int)arg2 memAry:(id)arg3;
- (id)parseTipMsg:(unsigned long long)arg1 opType:(int)arg2 nickAry:(id)arg3;
- (void)prepareRegister;
- (id)processMsgEncapsulation:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *recordTipsFlag; // @synthesize recordTipsFlag=_recordTipsFlag;
- (void)removeDelegate:(id)arg1;
- (_Bool)removeMesasge:(id)arg1;
- (void)removeMsgSeq:(unsigned long long)arg1;
- (_Bool)requestDelDiscussGroupMsg:(id)arg1 msgSeq:(id)arg2;
- (void)requestDiscussGroupMsg:(long long)arg1 endSeq:(long long)arg2 beginSeq:(long long)arg3;
- (_Bool)requestDiscussGroupMsgReadConfirm:(BOOL)arg1 discussGroupUin:(unsigned long long)arg2 msgSeq:(unsigned long long)arg3;
- (void)requestDiscussGroupMsgSeq:(BOOL)arg1 DiscussGroupGroups:(id)arg2;
- (void)responseDiscussGroupDelMsg:(char *)arg1 DataLen:(int)arg2;
- (void)responseDiscussGroupMsgSeq:(char *)arg1 DataLen:(int)arg2;
- (void)saveDiscussTipsMessageShowFlag;
- (void)setDelegate:(id)arg1;
- (_Bool)setDiscussGroupMsgReadConfirm:(BOOL)arg1 discussGroupUin:(unsigned long long)arg2;
- (void)setDiscussGruopMsgReadConfirmForDeleteMsg:(unsigned long long)arg1;
- (void)setDisscussGroupMsgReadSeqForQuickReply:(id)arg1 seq:(unsigned long long)arg2;
- (void)startDownloadDiscussPicAndPtt:(id)arg1 discussGroupUin:(unsigned long long)arg2 afterDelay:(float)arg3;
- (void)transferDiscussGroupDelMsg:(unsigned long long)arg1 opType:(int)arg2 memUinAry:(id)arg3;
- (void)updateDiscussGroupInfo:(long long)arg1 infoSeq:(long long)arg2;
- (void)updateDiscussRichMsgState:(int)arg1 discussGroupUin:(long long)arg2 msgTime:(int)arg3 state:(int)arg4;
- (void)updateMessageAfterLargeMsgRecved:(id)arg1;
- (void)updateMessageContent:(id)arg1;
- (void)updateMessageContentAndType:(id)arg1;
- (void)updateMessageExInfo:(id)arg1;
- (void)updateMessagePicUrlByModel:(id)arg1;
- (void)updateMessageReadStateAndExInfo:(id)arg1;
- (void)updateMessageRichInfoByModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

