//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSMutableDictionary, NSString, VACDataReport;

@interface QQWalletServiceCenter : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_requestInfoCache;
    NSMutableDictionary *_completionBlockCache;
    NSMutableDictionary *_refreshPeriodCache;
    NSMutableDictionary *_lastRefreshTimeCache;
    VACDataReport *_currentReport;
}

+ (id)defaultCenter;
- (void).cxx_destruct;
- (int)_sendCommonRequest:(id)arg1 cmd:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addRequestSeqIdForCmd:(id)arg1 seq:(int)arg2;
- (void)cacheLastRefreshTime:(double)arg1 forKey:(id)arg2;
- (void)cacheRefreshPeriod:(double)arg1 forKey:(id)arg2;
- (void)cancelAllMsfPacketRequestForCmd:(id)arg1;
- (_Bool)checkIfNeedEnforceRefreshWithModule:(int)arg1 cacheFileName:(id)arg2;
- (_Bool)checkNetWorkStatusWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)checkParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)commonInit;
- (void)dealloc;
- (void)didReceivedActionCommand:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (CDUnknownBlockType)getCompletionBlockBySID:(int)arg1;
- (double)getLastRefreshTimeByKey:(id)arg1;
- (CDUnknownBlockType)getPrePayCompletionBlockBySID:(int)arg1;
- (double)getRefreshPeriodByKey:(id)arg1;
- (id)getRequestInfoBySID:(int)arg1;
- (void)handleError:(id)arg1;
- (void)handleQQWalletPrePayErrorBySeq:(int)arg1 errorCode:(int)arg2 errorTips:(id)arg3;
- (void)handleQQWalletScoreErrorBySeq:(int)arg1 errorCode:(int)arg2 errorTips:(id)arg3;
- (void)hideCoverViewController;
- (id)init;
- (void)notifyError:(id)arg1;
- (id)paramsForPay:(id)arg1 originReqParams:(id)arg2;
- (void)postError:(id)arg1 cmd:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)postParamError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)preRequestQQWalletRecommendWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerMsfDelegate;
- (void)removeCompletionBlockBySID:(int)arg1;
- (void)removeRequestInfoBySID:(int)arg1;
- (void)removeRequestSeqIdForCmd:(id)arg1 seq:(int)arg2;
- (void)requestBankCardDetailWithBankName:(id)arg1 cardType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestGetGoldMsgStatusWithFriendUin:(id)arg1 type:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestPuinInfoWithBargainorId:(id)arg1 subbargainorId:(id)arg2 bussId:(id)arg3 st:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)requestQQWalletAccountConfigUseCache:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestQQWalletAppAuthCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestQQWalletH5ConfigUseCache:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestQQWalletPayAuthWithParams:(id)arg1 report:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestQQWalletRecommendUseCache:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestQQWalletScoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestQQWalletServiceForModule:(int)arg1 useCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)requestQQWalletServiceFromCacheFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestQQWalletServiceFromNetworkForModule:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestQQWalletTenPaySkinConfigWithSkinID:(int)arg1 type:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestSetGoldMsgStatusWithFriendUin:(id)arg1 goldMsgSwitch:(int)arg2 goldMsgPrice:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestWalletPfaFriends:(CDUnknownBlockType)arg1 param:(id)arg2;
- (void)responseBankCardDetailBySeq:(int)arg1 withPacket:(id)arg2;
- (void)responseGetGoldMsgStatusBySeq:(int)arg1 withPacket:(id)arg2;
- (void)responsePfaFriendsBySeq:(int)arg1 withPacket:(id)arg2;
- (void)responsePuinInfoBySeq:(int)arg1 withPacket:(id)arg2;
- (void)responseQQWalletAppAuthCodeBySeq:(int)arg1 withPacket:(id)arg2;
- (void)responseQQWalletPrePayBySeq:(int)arg1 withPacket:(id)arg2;
- (void)responseQQWalletScoreBySeq:(int)arg1 withPacket:(id)arg2;
- (void)responseQQWalletServiceBySeq:(int)arg1 cmd:(id)arg2 withPacket:(id)arg3;
- (void)responseSetGoldMsgStatusBySeq:(int)arg1 withPacket:(id)arg2;
- (void)responseTenPaySkinBySeq:(int)arg1 withPacket:(id)arg2;
- (void)responseWithCode:(int)arg1 errMsg:(id)arg2 payInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1 forSID:(int)arg2;
- (void)setPrePayCompletionBlock:(CDUnknownBlockType)arg1 forSID:(int)arg2;
- (void)setRequestInfo:(id)arg1 forSID:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

