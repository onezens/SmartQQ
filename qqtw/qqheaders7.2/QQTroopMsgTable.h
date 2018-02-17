//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQTroopMsgTableOperation, QQTroopMsgTableOperationNew;

@interface QQTroopMsgTable : NSObject
{
    NSString *_tableName;
    QQTroopMsgTableOperationNew *_dbOperation;
    struct CDBMaxMsgIdManager *_msgIdManager;
    QQTroopMsgTableOperation *dbOperation;
}

- (void).cxx_destruct;
- (long long)GetGroupMsgMaxSeq:(id)arg1;
- (void)QQDB_DeleteMessageBefore:(int)arg1;
- (int)QQDB_GetGroupAllTypeMessageCount;
- (int)QQDB_GetGroupMessageCount;
- (int)asyncDeleteGroupMsgWithMsgId:(long long)arg1 msgType:(int)arg2 callback:(id)arg3 userdata:(id)arg4;
- (int)asyncDeleteMsgsWithCallback:(id)arg1 userdata:(id)arg2;
- (int)asyncDeleteTroopMsgFromSeq:(id)arg1 callback:(id)arg2 userdata:(id)arg3;
- (int)asyncGetMsgFromTroopWithTypes:(id)arg1 notMoreThanSeq:(long long)arg2 limitCount:(unsigned int)arg3 callback:(id)arg4 userdata:(id)arg5;
- (int)asyncInsertTroopMessageArray:(id)arg1 callback:(id)arg2 userdata:(id)arg3;
- (int)asyncUpdateGroupMessageSeq:(long long)arg1 msgID:(id)arg2 callback:(id)arg3 userdata:(id)arg4;
- (int)asyncUpdateGroupRichMsgState:(int)arg1 msgTime:(int)arg2 state:(int)arg3 callback:(id)arg4 userdata:(id)arg5;
- (void)cleanMsg;
- (void)clearAllTroopMsg;
- (void)dealloc;
- (void)deleteGroupMsgWithMsgId:(long long)arg1 msgType:(int)arg2;
@property(readonly, nonatomic, getter=getDbOperationObject) QQTroopMsgTableOperation *dbOperation; // @synthesize dbOperation;
- (int)getGroupMessageCount:(id)arg1;
- (id)getLastMessageInGroup:(id)arg1;
- (id)getMessage:(id)arg1 msgSeq:(unsigned int)arg2;
- (id)getMessage:(id)arg1 msgSeq:(unsigned int)arg2 fromUin:(unsigned long long)arg3;
- (id)groupMessageAscWithPagesize:(unsigned long long)arg1 page:(unsigned long long)arg2;
- (id)groupMessageConsiderCriticalValueWithEndSeq:(long long)arg1 msgCount:(long long)arg2;
- (id)groupMessageDescWithMemUin:(id)arg1 typeArray:(id)arg2 pagesize:(unsigned long long)arg3 page:(unsigned long long)arg4;
- (id)groupMessageListIncludingMsg:(id)arg1 pageReturn:(int *)arg2 pagesize:(int)arg3;
- (id)groupMessageNoBlankWithEndSeq:(long long)arg1 count:(long long)arg2;
- (id)groupMessageWithKeyword:(id)arg1 pagesize:(unsigned long long)arg2 page:(unsigned long long)arg3 includeSelf:(_Bool)arg4;
- (id)groupMessageWithMsgID:(int)arg1;
- (id)groupMessageWithStartSeq:(long long)arg1 endSeq:(long long)arg2;
- (void)initDbOperationWithUin:(id)arg1;
- (id)initWithGroupCode:(id)arg1;
- (struct CDBMaxMsgIdManager *)msgIdManager;
- (int)removeMessage:(id)arg1;
- (void)saveChangeToDb:(id)arg1;
- (void)setMsgId:(id)arg1;
- (void)setTroopMsgSendStateWithMsgID:(id)arg1 state:(int)arg2 errorCode:(int)arg3;
@property(readonly, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
- (_Bool)updateGroupMsg:(id)arg1 Type:(int)arg2;
- (void)updateMessageAfterLargeMsgRecved:(id)arg1;
- (void)updateMessageContent:(id)arg1;
- (void)updateMessageContentAndType:(id)arg1;
- (void)updateMessageExInfo:(id)arg1;
- (void)updateMessagePicUrlOfRichInfo:(id)arg1;
- (void)updateMessageReadStateAndExInfo:(id)arg1;
- (void)updateMessageRichInfo:(id)arg1;

@end
