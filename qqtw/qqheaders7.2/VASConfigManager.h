//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"
#import "ISCBusinessCallback.h"
#import "ISCListenerCallback.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, QQNavigationController;

@interface VASConfigManager : NSObject <IEngineDispatchDelegate, ISCListenerCallback, ISCBusinessCallback>
{
    NSArray *_vipKeyWords;
    NSString *_vipKeyWordsSendTipWording;
    NSString *_vipKeyWordsSendTipKey;
    NSString *_vipKeyWordsSendTipUrl;
    NSString *_vipKeyWordsOpenTipWording;
    NSString *_vipKeyWordsOpenTipKey;
    NSString *_vipKeyWordsOpenTipUrl;
    _Bool _keyWordMatchEnable;
    NSObject<OS_dispatch_queue> *_matchQueue;
    NSArray *_vipSendList;
    _Bool _sendRenewEnable;
    long long _sendRenewCheckFreq;
    NSMutableDictionary *_vasSendRenewConfig;
    NSMutableDictionary *_ssoReqUinDict;
    long long _lastLoadPaySwitchTime;
    _Bool _isH5Pay;
    NSString *_currentUin;
    CDUnknownBlockType _currentCmpBlk;
    QQNavigationController *_backRunNav;
    _Bool _isBackWebRuning;
    _Bool _c2cEnable;
    _Bool _groupEnable;
    _Bool _discussGroupEnable;
    long long _showVipGrayTipFreqC2C;
    long long _showVipGrayTipFreqGroup;
    long long _showVipGrayTipFreqDiscussGroup;
    NSArray *_vipDirtyWords;
    NSArray *_vipKeyWordsGroupAndDiscussGroup;
    NSString *_groupGrayTail;
    NSString *_groupGiftWording;
    NSString *_groupGiftHighlightWording;
    NSString *_groupOpenWording;
    NSString *_groupOpenHighlightWording;
    NSMutableDictionary *_ssoReqBlockDict;
    long long _fetchVipGrayTipWordingTolerateTime;
    _Bool _hasAddBackWebItem;
    NSMutableArray *_backWaitRunItems;
    _Bool _isEmojiStickerEnable;
    int _maxStickPerMsg;
    int _maxStickerShowPerMsg;
    double _emojiCanStickTime;
    NSString *_gameIconBaseUrl;
    int _gameIconExpireDay;
    _Bool _highBoomMsgShouldDrawInAIO;
    _Bool _founderColorFontShouldDrawInAIO;
    unsigned long long _emojiJumpTimeInterval;
    long long _lastShowVipGrayTipTimeC2C;
    long long _lastShowVipGrayTipTimeGroup;
    long long _lastShowVipGrayTipTimeDiscussGroup;
}

+ (id)getPersonalityDecorationViewController:(long long)arg1;
+ (_Bool)isValidMode:(id)arg1;
+ (id)shareManager;
- (void)autoRunWebViewWithConfig:(id)arg1;
- (id)buildTipParamWithInfo:(id)arg1 msgUin:(id)arg2;
- (_Bool)canUpdate:(unsigned long long)arg1 scid:(id)arg2 from:(id)arg3;
- (_Bool)checkRenewGiftVip:(id)arg1;
- (void)clearBackWebViewInner;
- (void)clearBackgroundWebViewIfExist;
- (void)dealWithBackgroundWebViewConfig:(id)arg1;
- (void)delayClearWebViewInnerWithConfig:(id)arg1;
- (void)delayPerformRunActionWithConfig:(id)arg1;
- (_Bool)deleteFiles:(unsigned long long)arg1 scid:(id)arg2;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)downloadConfigFilesIfNotExists;
- (_Bool)founderColorFontShouldDrawInAIO;
- (double)getEmojiCanStickTime;
- (unsigned long long)getEmojiJumpRecommRequestTimeInterval;
- (_Bool)getEmojiStickerEnableFlag;
- (id)getGTKFromSKey:(id)arg1;
- (id)getGameIconUrlWithAppId:(unsigned int)arg1;
- (id)getGameIconUrlWithAppId:(unsigned int)arg1 gameRank:(unsigned int)arg2;
- (_Bool)getItem:(unsigned long long)arg1 scid:(id)arg2 info:(id)arg3;
- (int)getMaxStickNumPerMsg;
- (int)getMaxStickerShowNumPerMsg;
- (id)getUrlByEnteryId:(id)arg1;
- (_Bool)hasEnteredGameIconWebView;
- (_Bool)highBoomMsgShouldDrawInAIO;
- (id)init;
- (_Bool)isATSClosed;
- (_Bool)isCurrentUinQBWebViewSwitchOn;
- (_Bool)isDomainPreDNS:(id)arg1;
- (_Bool)isFileExists:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)isInGray:(id)arg1;
- (_Bool)isJumpLimitSwtichOn;
- (_Bool)isQBInnerUsingWK;
- (_Bool)isUrlCanUseQBWebView:(id)arg1;
- (long long)jumpLimitCount;
@property(nonatomic) long long lastShowVipGrayTipTimeC2C; // @synthesize lastShowVipGrayTipTimeC2C=_lastShowVipGrayTipTimeC2C;
@property(nonatomic) long long lastShowVipGrayTipTimeDiscussGroup; // @synthesize lastShowVipGrayTipTimeDiscussGroup=_lastShowVipGrayTipTimeDiscussGroup;
@property(nonatomic) long long lastShowVipGrayTipTimeGroup; // @synthesize lastShowVipGrayTipTimeGroup=_lastShowVipGrayTipTimeGroup;
- (void)loadGameIconInfoWithDic:(id)arg1;
- (void)loadGiftConfigInfo;
- (_Bool)loadKeywordDataByJson:(id)arg1;
- (void)loadMagicFontConfigInfo;
- (void)loadPersonalitySwitchJsonWithUin:(id)arg1 Aid:(id)arg2 Complection:(CDUnknownBlockType)arg3;
- (void)loadloadPersonalitySwitchBySSOWithUin:(id)arg1 Aid:(id)arg2 Complection:(CDUnknownBlockType)arg3;
- (_Bool)matchGiftVipKeyWord:(id)arg1;
- (void)matchKeywordAndPostNotify:(id)arg1 withInfo:(id)arg2;
- (void)notifyError:(id)arg1;
- (void)observeApplicationDidEnterBackground:(id)arg1;
- (void)observeApplicationDidEnterForeground:(id)arg1;
- (void)onCompleted:(unsigned long long)arg1 scid:(id)arg2 cfgScid:(id)arg3 from:(id)arg4 result:(int)arg5 httpcode:(int)arg6;
- (void)onVipPaySwitchResp:(id)arg1;
- (void)parseVipGrayTipsInfoWithDic:(id)arg1;
- (void)parseVipPersonalCardConfigJson:(id)arg1;
- (id)personalCardConfig;
- (id)preDNSDomains;
- (void)qbWebViewSwitchOff;
- (void)readBackgroundWebViewConfig;
- (id)recordStoreKey:(_Bool)arg1;
- (void)requestCheckRenewGiftTips:(id)arg1;
- (void)requestVipGrayTipsWordingWithMatchKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveSendRenewConfig:(id)arg1;
- (void)saveWebViewConfig:(id)arg1;
- (void)saveWebViewWhiteList:(id)arg1;
- (void)setEmojiStickerEnableFlag:(_Bool)arg1;
- (void)setFounderColorFontShouldDrawInAIO:(_Bool)arg1;
- (void)setHighBoomMsgShouldDrawInAIO:(_Bool)arg1;
- (void)setMaxStcikNumPerMsg:(int)arg1;
- (void)setMaxStickerShowNumPerMsg:(int)arg1;
- (id)sharpHeaderForUrl:(id)arg1;
- (_Bool)shouldShowVipGrayTipsWithMsgModel:(id)arg1;
- (_Bool)showGameIconWithLastLoginTime:(unsigned long long)arg1;
@property(readonly, nonatomic) long long showVipGrayTipFreqC2C; // @synthesize showVipGrayTipFreqC2C=_showVipGrayTipFreqC2C;
@property(readonly, nonatomic) long long showVipGrayTipFreqDiscussGroup; // @synthesize showVipGrayTipFreqDiscussGroup=_showVipGrayTipFreqDiscussGroup;
@property(readonly, nonatomic) long long showVipGrayTipFreqGroup; // @synthesize showVipGrayTipFreqGroup=_showVipGrayTipFreqGroup;
- (void)updateDecreaseForEntryId:(id)arg1 repeat:(_Bool)arg2;
- (void)updateLastShowVipGrayTipsTimeWithMsgModel:(id)arg1;
- (id)vipEntryNameFetch;
- (id)vipPersonalCardConfigJsonPath;
- (id)webViewWhiteList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
