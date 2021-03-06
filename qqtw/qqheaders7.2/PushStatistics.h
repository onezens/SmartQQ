//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, PushVaildMsgStatisticsItem;

@interface PushStatistics : NSObject
{
    PushVaildMsgStatisticsItem *_vaildMsgStatisticsItem;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _needReport;
    NSMutableDictionary *_mDic;
}

+ (id)shareInstance;
- (void)addVoipSvrCount:(unsigned short)arg1;
- (void)didEnterbackground;
- (unsigned short)getCurVoipPushCount;
- (id)getPushVaildMsgFilePath;
- (id)getVaildItem;
- (id)getVoipPushCountFilePath;
- (id)getVoipPushMsgCountFilePath;
- (void)handleApnsPushMsg:(id)arg1;
- (void)handleReportValidMsgProbability;
- (void)handleVoipPushMsg:(id)arg1;
- (id)init;
- (void)onRecvApnsPushMsg:(id)arg1;
- (void)onRecvVoipPUsh:(id)arg1;
- (void)onRecvVoipPushMsg:(id)arg1;
- (void)reportValidMsgProbability;
- (void)reportVoipPushMsgCount;
- (void)saveVaildItem;
- (void)saveVoipPushCount;
- (void)willEnterForeground;

@end

