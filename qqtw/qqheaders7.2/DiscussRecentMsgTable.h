//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DiscussRecentMsgTableImpl;

@interface DiscussRecentMsgTable : NSObject
{
    DiscussRecentMsgTableImpl *_impl;
}

- (void).cxx_destruct;
- (void)SetFileMsgSendStateWithMsgID:(id)arg1 discussGroupUin:(id)arg2 state:(int)arg3 read:(int)arg4;
- (void)SetMsgSendStateWithMsgID:(id)arg1 discussGroupUin:(id)arg2 state:(int)arg3 errorCode:(int)arg4;
- (void)deleteMsgWithDiscussGroupUin:(unsigned long long)arg1 andMsgId:(int)arg2;
- (void)deleteMsgs;
- (void)deleteMsgsSync;
- (void)deleteRecordWtihDiscussGroupcode:(unsigned long long)arg1;
- (id)getRecentDiscuss:(unsigned int)arg1;
- (id)init;
- (void)insertMessags:(id)arg1;
- (id)loadDiscussRecentMsgs:(unsigned long long)arg1;
- (id)loadDiscussRecentMsgsWithDicussCodes:(id)arg1;
- (id)loadRecentMsgs;
- (_Bool)updateDiscussRichMsgState:(int)arg1 discussGroupUin:(long long)arg2 msgTime:(int)arg3 state:(int)arg4;
- (void)updateMessagePicUrlOfRichInfo:(id)arg1;
- (void)updateMessageRichInfo:(id)arg1;
- (void)updateMsgSeq:(int)arg1 byDiscussUin:(long long)arg2 msgID:(int)arg3 time:(int)arg4;
- (_Bool)updateSendMsgServerTime:(long long)arg1 msgModel:(id)arg2 oldMsgTime:(int)arg3;

@end

