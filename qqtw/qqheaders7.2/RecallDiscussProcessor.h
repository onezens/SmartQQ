//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RecallGroupBaseProcessor.h"

@interface RecallDiscussProcessor : RecallGroupBaseProcessor
{
}

- (void)assignGroupCodeToRecallItem:(struct RecallItem *)arg1 msg:(id)arg2;
- (id)convertRecallItemToMsg:(struct RecallItem *)arg1 recallModel:(struct RecallModel *)arg2 msgType:(int)arg3 isOnline:(_Bool)arg4;
- (unsigned long long)getGroupCode:(id)arg1;
- (int)getGroupType;
- (id)getLocalMessage:(struct RecallItem *)arg1;
- (id)getLocalMsgByMsg:(id)arg1 msgId:(int)arg2;
- (id)getRecallMessageContent:(struct RecallModel *)arg1 item:(struct RecallItem *)arg2 msg:(id)arg3 isOnline:(_Bool)arg4;
- (int)getRecallModelType;
- (id)getRecentMessageModelByMsg:(id)arg1;
- (id)insertRecallMsg:(struct RecallModel *)arg1 item:(struct RecallItem *)arg2 msgType:(int)arg3 isOnline:(_Bool)arg4;
- (void)updateGroupMsgContentAndType:(id)arg1;
- (void)updateMessageContentAndType:(id)arg1 content:(id)arg2 msgType:(int)arg3;
- (void)updateMsgListByRecallNotify:(id)arg1;
- (void)updateMsgListOnlyContent:(id)arg1;

@end

