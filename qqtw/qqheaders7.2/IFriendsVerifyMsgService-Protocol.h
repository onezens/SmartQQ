//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FriendsVerifyMsgActionModel, FriendsVerifyMsgStructMsgModle, NSArray, NSString;

@protocol IFriendsVerifyMsgService <NSObject>
- (void)cleanUpFriendsVerifyMsgListWithArray:(FriendsVerifyMsgStructMsgModle *)arg1;
- (void)friendsVerifyMsgClear;
- (void)friendsVerifyMsgReload;
- (NSArray *)getAllFriendsVerifyMsgModleList;
- (unsigned int)getFriVerifyMsgIsOver;
- (unsigned int)getFriendsVerifyMsgUnReadCount;
- (NSArray *)getNextPageFriendsVerifyMsgModleList;
- (NSArray *)getSafeAllFriendsVerifyMsgModleList;
- (unsigned int)getSafeFriendsVerifyMsgUnReadCount;
- (NSString *)getSafeMsgDisplay;
- (_Bool)isLastPageInFriendsVerifyMsgModleList;
- (void)reportTValueOfFriendsVerifyCloneInfoForUin:(NSString *)arg1 read:(_Bool)arg2 reply:(_Bool)arg3;
- (int)requestAddAcceptedMsgReportMsgReadStateForUin:(NSString *)arg1;
- (int)requestFriendsVerifyMsgAction:(FriendsVerifyMsgStructMsgModle *)arg1 Action:(FriendsVerifyMsgActionModel *)arg2;
- (int)requestFriendsVerifyMsgClean;
- (int)requestFriendsVerifyMsgCleanSingle:(FriendsVerifyMsgStructMsgModle *)arg1;
- (int)requestFriendsVerifyMsgRead;
- (void)requestLatestFriendsVerifyMsgListOnPush;
- (int)requestNextPageFriendsVerifyMsgList;
- (void)respFriendsVerifyMsgPushUpdate:(const void *)arg1 DataLen:(int)arg2 subMsgType:(unsigned int)arg3;
- (void)updateFriendsList:(int)arg1 uin:(unsigned long long)arg2;
- (_Bool)whetherSendFriendsAndGroupVerifyMsgReq;
@end

