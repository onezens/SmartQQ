//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AsynFileStorageDelegate.h"
#import "IQQMessageProcessor.h"
#import "RegisterProxyTaskDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer, QQMessageReadConfirm, QQRegisterProxyTask;

@interface QQMsgSyncManager : NSObject <IQQMessageProcessor, RegisterProxyTaskDelegate, AsynFileStorageDelegate>
{
    NSString *_uin;
    NSMutableDictionary *_c2cSeqCache;
    NSMutableArray *_relationNoticeCache;
    NSMutableDictionary *_readConfirmCache;
    NSMutableArray *_syncTasks;
    QQRegisterProxyTask *_registerTask;
    _Bool _readingSaveTrafficModeOn;
    NSTimer *_httpRegTimer;
    double _httpRegTimerInterval;
    QQMessageReadConfirm *_readConfirm;
    NSMutableArray *_numberGroupList;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)ActionGetQQMessage:(id)arg1;
- (_Bool)UnreportMessage:(id)arg1 messages:(id)arg2;
- (void)_addTask:(id)arg1;
- (_Bool)_findSameAndSendingTaskInCacheTasks:(id)arg1;
- (_Bool)_needExcuteOnlineTask;
- (_Bool)_needExcuteTaskImmediately:(unsigned long long)arg1;
- (void)_processForContinueGetMsg:(id)arg1;
- (void)_processForGetMsgTimeout:(id)arg1;
- (void)_processForOnlineGetMsg:(id)arg1;
- (void)_processForRegisterGetMsg:(id)arg1;
- (void)_processForResponseWithoutContinueGetMsg;
- (unsigned int)_sendMessageRandom;
- (void)actionGetGroupSeq:(void *)arg1;
- (void)actionSendGroupMaxSeqConfirm:(id)arg1;
- (void)addNumberGroup:(id)arg1;
- (id)caculateUnreadCountWithGroupcode:(id)arg1 endSeq:(long long)arg2 memberSeq:(long long)arg3 msgArray:(id)arg4;
- (void)cancelRequestOfflineMessage:(unsigned int)arg1;
- (void)changeAccount:(id)arg1;
- (void)clearC2CUnreadAndSetReported:(id)arg1;
- (void)clearNumberGroupList;
- (id)createTaskForOfflineMsg:(unsigned int)arg1 taskRetrySeq:(unsigned long long)arg2 taskType:(unsigned int)arg3;
- (void)dealloc;
- (id)deepcopy:(id)arg1;
- (void)didSyncTaskFinished:(id)arg1;
- (void)enterReadingSaveTrafficMode;
- (int)getC2CLastReadTime:(id)arg1;
- (unsigned int)getC2CPTTMessageRandom;
- (unsigned short)getC2CPTTSendMessageSeq:(long long)arg1;
- (unsigned int)getC2CSendMessageRandom;
- (unsigned short)getC2CSendMessageSeq:(long long)arg1;
- (id)getCacheFileName:(id)arg1;
- (id)getDiscussGroupParameters;
- (id)getDiscussGroupParameters:(id)arg1;
- (id)getGroupParameters:(_Bool)arg1 withoutNumGroup:(_Bool)arg2;
- (id)getGroupParametersOfList:(id)arg1;
- (unsigned int)getGroupSendMessageRandom;
- (unsigned int)getPublicAccountPTTMessageRandom;
- (_Bool)hasUnreportMessage:(id)arg1;
@property(nonatomic) double httpRegTimerInterval; // @synthesize httpRegTimerInterval=_httpRegTimerInterval;
- (id)init;
- (_Bool)isC2CMessageCached:(id)arg1 allowDummy:(_Bool)arg2;
- (void)leaveReadingSaveTrafficMode;
@property(retain) NSMutableArray *numberGroupList; // @synthesize numberGroupList=_numberGroupList;
- (void)onC2CMessageReadNotify:(id)arg1;
- (void)onDiscussGroupMesssageReadNotif:(id)arg1;
- (void)onGroupMessageReadNotify:(id)arg1;
- (void)onHttpReqTimer;
- (void)onLoginSuccess;
- (void)onLogout;
- (void)onSaveFinish:(id)arg1 success:(_Bool)arg2;
- (id)processMsgEncapsulation:(id)arg1;
@property(nonatomic) _Bool readingSaveTrafficModeOn; // @synthesize readingSaveTrafficModeOn=_readingSaveTrafficModeOn;
- (void)registerPorxyTaskFinished;
- (id)requestNumberGroupList;
- (id)requestOfflineMessage:(unsigned int)arg1 taskRetrySeq:(unsigned long long)arg2 taskType:(unsigned int)arg3;
- (void)requestOfflineMsgFromRegiserProxy;
- (void)requestOfflineMsgFromRegiserProxy:(id)arg1 discussGroupList:(id)arg2;
- (void)resetDiscussMessage:(id)arg1 unReadConfirm:(double)arg2;
- (void)resetGroupMessage:(id)arg1 unReadConfirm:(double)arg2;
- (void)resetProxyRequest;
- (void)saveReadConfirmCache;
- (void)sendC2CMessageReadConfirm:(id)arg1;
- (void)sendC2CMessageReadConfirm:(id)arg1 unReadConfirm:(double)arg2;
- (void)sendC2CMessageReadConfirm_CRM:(id)arg1 withForce:(_Bool)arg2;
- (void)sendContactTmpMessageReadConfirm:(id)arg1;
- (void)sendGroupMessageReadConfirm:(unsigned int)arg1;
- (void)sendNearbyMsgReadedReportWithMsgArray:(id)arg1;
- (_Bool)sendRegProxyRequestWithOperScene:(int)arg1;
- (void)sendRegisterProxyRequest;
- (void)setGroupUnreadCount:(unsigned int)arg1 memberSeq:(long long)arg2 groupSeq:(long long)arg3;
- (void)startHttpRegTimer;
- (void)stopHttpRegTimer;
- (_Bool)updateC2CUnreadCountAmendment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

