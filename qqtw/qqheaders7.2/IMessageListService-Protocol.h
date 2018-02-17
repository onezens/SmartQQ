//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSMutableArray, NSString, QQClusterMessageModel, QQMessageModel, QQRecentMessageModel, QQRecentSession;

@protocol IMessageListService
- (QQRecentMessageModel *)GetMessageModel:(NSString *)arg1;
- (QQRecentMessageModel *)GetMessageModel:(NSString *)arg1 type:(int)arg2;
- (QQRecentMessageModel *)GetMessageModelByModel:(QQMessageModel *)arg1;
- (void)addMessage:(QQMessageModel *)arg1;
- (void)asyncRefreshUnreadCount:(NSString *)arg1 type:(int)arg2 withValue:(unsigned int)arg3;
- (void)changeAccount:(NSString *)arg1;
- (void)clearAllMessageInfinitly;
- (void)clearGroupNotificationUnreadAndSetReported;
- (void)clearMessageList;
- (void)clearRecentMessageData;
- (void)clearUnReadCount:(QQMessageModel *)arg1;
- (void)clearUnreadCount:(NSArray *)arg1 type:(int)arg2;
- (void)clearUnreadCountWithKey:(NSString *)arg1;
- (void)convertSessionStateFromCluster:(long long)arg1;
- (void)deleteMessage:(QQMessageModel *)arg1;
- (void)deleteMessage:(NSString *)arg1 type:(int)arg2;
- (void)deleteMessageWithKeys:(NSArray *)arg1;
- (NSArray *)getAllSortedMessageList;
- (QQRecentMessageModel *)getMessageFromCache:(NSString *)arg1;
- (NSMutableArray *)getMessageList;
- (QQRecentSession *)getSessionFromCache:(NSString *)arg1;
- (NSMutableArray *)getSessionList;
- (NSArray *)getTimeSortedSessionList;
- (int)getUnreadMessageCount;
- (int)getUnreadMessageCount:(int)arg1;
- (int)getUnreadMessageCount:(NSString *)arg1 type:(int)arg2;
- (int)getUnreadMessageCountExceptMarkUnread;
- (NSArray *)getUnreadMessageIndexArrayBlue;
- (NSArray *)getUnreadMessageIndexArrayRed;
- (_Bool)haveUnReadMsg;
- (_Bool)haveUnReadMsg:(NSString *)arg1 type:(int)arg2;
- (_Bool)isUinInRenceMsgList:(NSString *)arg1;
- (_Bool)isValidMsgModelForMsgList:(QQMessageModel *)arg1;
- (void)markClusterMessageAsHandled:(QQClusterMessageModel *)arg1;
- (void)onlyForUpdateSummaryInRecentModel:(QQMessageModel *)arg1;
- (void)refreshUnreadCount:(NSString *)arg1 type:(int)arg2 withValue:(unsigned int)arg3;
- (_Bool)saveMessageList;
- (void)setMessageContent:(NSString *)arg1 type:(int)arg2 andContent:(NSString *)arg3;
- (void)setMessageContent:(NSString *)arg1 type:(int)arg2 andContent:(NSString *)arg3 andLongMsgState:(unsigned long long)arg4;
- (void)updateAllMessageTime;
- (void)updateChatlist;
- (void)updateLastMessage:(QQMessageModel *)arg1;
- (void)updateMessage:(QQMessageModel *)arg1;
- (void)updateMessageModel:(QQMessageModel *)arg1;
- (void)updateTroopExinfo:(NSString *)arg1 type:(int)arg2;

@optional
- (void)claerMarkUnreadForGroup:(NSString *)arg1;
- (void)enterAIOClearMarkUnread:(QQRecentMessageModel *)arg1;
- (int)getC2CUnreadCountForBackGroundReq;
- (int)getDiscussUnreadCountForBackGroudReq;
- (int)getGroupUnreadCountForBackGroudReq;
- (int)getMarkUnreadCount;
- (NSString *)getMessageKey:(QQMessageModel *)arg1;
- (NSString *)getMessageKey:(NSString *)arg1 type:(int)arg2;
- (int)getReadMsgSessionType:(QQMessageModel *)arg1;
- (NSString *)getUinFromMessageKey:(NSString *)arg1;
- (void)handleRecentExInfoLoaded:(_Bool)arg1;
- (NSString *)isDiscussMessageKey:(NSString *)arg1;
- (NSString *)isGroupMessageKey:(NSString *)arg1;
- (_Bool)isGroupRemoved:(QQMessageModel *)arg1;
- (void)loadLowLevelMsgs;
- (int)parseMessageType:(QQMessageModel *)arg1;
- (void)recoverMarkUnreadCount;
- (void)saveInterestAccountUnreadCountImmediately:(_Bool)arg1;
- (void)saveMessageListNew;
@end

