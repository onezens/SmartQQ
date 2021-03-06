//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSNumber, NSString, NSTimer, QQRecommendFriendsExposureDatabase;

@interface QQRecommendFriendsEngine : NSObject <IEngineDispatchDelegate>
{
    NSNumber *_rfPushTime;
    NSNumber *_rfPushUnreadCnt;
    NSString *_rfPushWording;
    QQRecommendFriendsExposureDatabase *_exposureDatabase;
    NSTimer *_reportTimer;
    NSString *_lastUin;
    _Bool hasRevPushMsg;
    _Bool isNewFriendPage;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *_rfPushTime; // @synthesize _rfPushTime;
@property(retain, nonatomic) NSNumber *_rfPushUnreadCnt; // @synthesize _rfPushUnreadCnt;
@property(retain, nonatomic) NSString *_rfPushWording; // @synthesize _rfPushWording;
- (void)addFriendButtonTaped:(id)arg1;
- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (void)changeAccount;
- (_Bool)compareRecommendFirendByTimeWithNewTime:(double)arg1 oldTime:(double)arg2;
- (void)dataSourceDidChanged:(id)arg1;
- (void)dataSourceShouldPersist:(id)arg1;
- (id)dataWithExposure:(id)arg1;
- (void)dealloc;
- (void)didReceivedNewFriendAcceptAddNotification:(id)arg1;
- (void)didReceivedNewFriendRefuseResponse:(id)arg1;
@property(retain, nonatomic) QQRecommendFriendsExposureDatabase *exposureDatabase; // @synthesize exposureDatabase=_exposureDatabase;
- (_Bool)handleFriendsRecommendPushV2:(id)arg1 time:(long long)arg2;
- (void)handleGetFriendsRecommendData:(id)arg1;
- (id)init;
- (id)latestReportTimeKeyForUin:(id)arg1;
- (void)processPushRecommendFriendsData:(id)arg1 type:(int)arg2;
- (void)readCachedRecommendFriendsData:(CDUnknownBlockType)arg1 hasReqFailed:(_Bool)arg2;
- (id)recommendFriendDataPersistentTimeKey;
- (id)recommendFriendPushMessageNotReadKey;
- (id)recommendFriendPushMessageTimeKey;
- (void)removeFriendButtonTaped:(id)arg1;
- (void)reportCacheExposuresWithForce:(_Bool)arg1 uin:(id)arg2;
- (void)reportControlTapedEventWithFriend:(id)arg1 actionID:(unsigned long long)arg2;
- (_Bool)reportExposureOrTapEventWithData:(id)arg1 uin:(unsigned long long)arg2;
- (void)reportRemovedEventWithFriend:(id)arg1;
- (void)requestDataWithCallback:(CDUnknownBlockType)arg1 isPush:(_Bool)arg2;
- (void)requestRecommendFriendsDataWithCallback:(CDUnknownBlockType)arg1;
- (void)saveRecommendFriendsPushMsgInfo;
- (void)setIsNewFriendPage:(_Bool)arg1;
- (void)setReqSceneType:(_Bool)arg1;
- (_Bool)shouldReportCacheExposuresForUin:(id)arg1;
- (_Bool)shouldRequestRecommendFriendsData;
- (void)userDidLogin;
- (void)userHeaderTaped:(id)arg1;
- (void)willFinishedExpose:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

