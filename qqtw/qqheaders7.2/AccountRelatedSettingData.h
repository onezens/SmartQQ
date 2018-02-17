//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, QQLockDictionary;

@interface AccountRelatedSettingData : NSObject
{
    NSMutableDictionary *_initialPushSetting;
    NSMutableDictionary *_currentPushSetting;
    NSString *_uin;
    QQLockDictionary *_groupMessageSettingLogTimeStamp;
}

+ (id)GetInstance;
- (id)_aioChasmSeqKeyForUin:(id)arg1 sessionType:(int)arg2;
- (id)_aioMaxSeqKeyForUin:(id)arg1 sessionType:(int)arg2;
- (id)_rawAioChasmSeqKeyForUin:(id)arg1 sessionType:(int)arg2;
- (id)_rawAioMaxSeqKeyForUin:(id)arg1 sessionType:(int)arg2;
- (long long)aioChasmSeqForUin:(id)arg1 sessionType:(int)arg2;
- (long long)aioMaxSeqForUin:(id)arg1 sessionType:(int)arg2;
- (id)allLocalGroupMsgSettings;
- (void)asyncSavePushSetting;
- (id)cleanFriendsTipsRecord;
- (void)clearAllForceShowContactsTipData;
- (void)clearSearchConditionDataWithType:(id)arg1;
- (_Bool)currentDayHasShowOnlineFriendGuide;
@property(retain, nonatomic) NSMutableDictionary *currentPushSetting; // @synthesize currentPushSetting=_currentPushSetting;
- (void)dealloc;
- (void)decreasePeakPreDownloadCountForGroup:(id)arg1;
- (void)delaySavePushSetting;
- (id)getAllPicNetFlow;
- (id)getAllSettings;
- (id)getArkHttpSetingFromKey:(id)arg1;
- (long long)getDoodleColorIndex;
- (long long)getDoodleGifIndex;
- (id)getFailedSetting:(id)arg1;
- (id)getForceShowContactsTipData;
- (id)getForceShowContactsTipDataWithKey:(id)arg1;
- (double)getGroupShareLBSAccUploadTime;
- (id)getGroupShareLBSUserPos;
- (id)getGroupSilentConfig;
- (int)getHostUserSummaryLastZanUnreadCount;
- (_Bool)getHostUserSummaryShowZanUnreadRedDot;
- (id)getIconMaxUnreadSetting;
- (int)getIgnoreMsgSetting:(id)arg1;
- (_Bool)getIsFirstRequestVideoViewIn3G;
- (_Bool)getIsFirstVerifyMsgFromGame;
- (int)getLargeMsgOpConfigVersion;
- (int)getLargeMsgOptimizeOpenFlag;
- (int)getMessageMonitorConfigVersion;
- (int)getMessageMonitorOpenFlag;
- (long long)getNMLastPublishTime;
- (id)getNearby686Config;
- (id)getNearbyAioTipsConfig;
- (int)getNearbyAioTipsConfigVersion;
- (int)getNoBindTime;
- (int)getOlympicStartVideoFlag;
- (long long)getPeakPreDownloadCountForGroup:(id)arg1;
- (id)getPreDownPolicyDataWithKey:(id)arg1;
- (int)getPushOpenRemindConfigVersion;
- (id)getPushSetting;
- (id)getQQPimValueByType:(int)arg1;
- (unsigned long long)getQQReadInJoyMultipleStopPushTime;
- (_Bool)getSearchConditionDataWithType:(id)arg1;
- (id)getSiriConfig;
- (int)getSiriRegisterConfigVersion;
- (int)getSmallViewPosition;
- (int)getSyncRevision;
- (id)getUinDictionaryDataWithKey:(id)arg1;
- (_Bool)getWYNeedVerifyIndiePassed;
- (int)groupAssistantPCPolicyForGroup:(id)arg1;
- (int)groupAssistantPolicyForGroup:(id)arg1;
@property(retain, nonatomic) QQLockDictionary *groupMessageSettingLogTimeStamp; // @synthesize groupMessageSettingLogTimeStamp=_groupMessageSettingLogTimeStamp;
- (_Bool)hasUpgradeSettings;
- (_Bool)ignoreOGTDownloadedStatus;
- (void)increasePeakPreDownloadCountForGroup:(id)arg1;
- (id)init;
- (_Bool)isAnyGroupNotHaveAssistantPolicySetting;
- (_Bool)isMessageBoxDeleted:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (_Bool)operationGrayTipHasBeenDownloadedWithMD5:(id)arg1;
- (_Bool)operationGrayTipHasBeenDownloadedWithUrl:(id)arg1;
- (id)receiveMsgKeyForGroup:(id)arg1;
- (void)removeAccountSettingWithUin:(id)arg1;
- (void)removeObjectForRawKey:(id)arg1 uinKey:(id)arg2;
- (void)removeValueForSetting:(id)arg1;
- (void)resetSettingForKey:(id)arg1;
- (void)saveCurrentSettingImmediantly;
- (void)savePushSetting:(id)arg1;
- (id)savedGroupAssistantPolicyForGroup:(id)arg1;
- (void)setAioChasmSeq:(long long)arg1 forUin:(id)arg2 sessionType:(int)arg3;
- (void)setAioMaxSeq:(long long)arg1 forUin:(id)arg2 sessionType:(int)arg3;
- (void)setAllPicNetFlow:(id)arg1;
- (void)setCleanFriendsTipsRecord:(id)arg1;
- (void)setCurrentDayShowOnlineFriendsGuide:(_Bool)arg1;
- (void)setDoodleColorIndex:(long long)arg1;
- (void)setDoodleGifIndex:(long long)arg1;
- (void)setFailedSetting:(id)arg1 forUin:(id)arg2;
- (void)setForceShowContactsTipDataWithKey:(id)arg1 forValue:(id)arg2;
- (void)setGroupAssistantPCPolicy:(int)arg1 forGroup:(id)arg2;
- (void)setGroupAssistantPolicy:(int)arg1 forGroup:(id)arg2;
- (void)setGroupShareLBSAccUploadTime:(double)arg1;
- (void)setGroupShareLBSUserPos:(id)arg1;
- (void)setGroupSilentConfig:(id)arg1;
- (void)setHasUpgradeSettings:(_Bool)arg1;
- (void)setHostUserSummaryLastZanUnreadCount:(int)arg1;
- (void)setHostUserSummaryShowZanUnreadRedDot:(_Bool)arg1;
- (void)setIconMaxUnreadSetting:(id)arg1;
- (void)setIgnoreMsgSetting:(_Bool)arg1 forGroup:(id)arg2;
- (void)setIgnoreOGTDownloadedStatus:(_Bool)arg1;
- (void)setInitialPushSetting;
- (void)setIsFirstVerifyMsgFromGame:(_Bool)arg1;
- (void)setLargeMsgOpConfigVersion:(int)arg1;
- (void)setLargeMsgOptimizeOpenFlag:(int)arg1;
- (void)setMessageBoxSetting:(id)arg1 isDeleted:(_Bool)arg2;
- (void)setMessageMonitorConfigVersion:(int)arg1;
- (void)setMessageMonitorOpenFlag:(int)arg1;
- (void)setNMPublishTime:(long long)arg1;
- (void)setNearby686Config:(id)arg1;
- (void)setNearbyAioTipsConfig:(id)arg1;
- (void)setNearbyAioTipsConfigVersion:(int)arg1;
- (void)setNobindTime:(int)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setOlympicStartVideoFlag:(int)arg1;
- (void)setOperationGrayTipConfigVersion:(long long)arg1;
- (void)setOperationGrayTipDownloadedStatus:(_Bool)arg1 withMD5:(id)arg2;
- (void)setOperationGrayTipDownloadedStatus:(_Bool)arg1 withUrl:(id)arg2;
- (void)setPushOpenRemindConfigVersion:(int)arg1;
- (void)setQQPimValue:(id)arg1 toType:(int)arg2;
- (void)setQQReadInJoyMultipleStopPushTime:(double)arg1;
- (void)setReShowOnlineFriendsGuide:(_Bool)arg1;
- (void)setRecieveGroupMsg:(_Bool)arg1 forGroup:(id)arg2;
- (void)setRecieveGroupPush:(_Bool)arg1 forGroup:(id)arg2;
- (void)setSearchConditionDataWithType:(id)arg1 forValue:(_Bool)arg2;
- (void)setShouldShowLoginedAccount:(_Bool)arg1;
- (void)setShouldShowOnlineFriendsGuide:(_Bool)arg1;
- (void)setSiriConfig:(id)arg1;
- (void)setSiriRegisterConfigVersion:(int)arg1;
- (void)setSmallViewPosition:(int)arg1;
- (void)setSyncRevision:(int)arg1;
- (void)setTmpValue:(id)arg1 forSetting:(id)arg2;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (void)setValue:(id)arg1 forRawKey:(id)arg2 uinKey:(id)arg3;
- (void)setValue:(id)arg1 forSetting:(id)arg2;
- (void)setWYNeedVerifyIndiePasswd:(_Bool)arg1;
- (_Bool)shouldReShowOnlineFriendsGuide;
- (_Bool)shouldShowLoginedAccount;
- (_Bool)shouldShowOnlineFriendsGuide;
- (void)shownNightModeTips;
- (int)shownNightModeTipsCount;
- (_Bool)supportATS;
- (id)valueForKey:(id)arg1;
- (id)valueForRawKey:(id)arg1 uinKey:(id)arg2;
- (long long)versionForOperationGrayTipConfig;

@end

