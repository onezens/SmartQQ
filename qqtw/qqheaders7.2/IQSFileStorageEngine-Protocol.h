//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CharmInfoModel, ClearFriendsModel, CommonCardModel, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, OGTConfigModel, OGTConfigTaskModel, QQActivateFriendsModel, QQCityWeatherInfo, QQProfileModel, RichStateModel, TeleEntryModel;

@protocol IQSFileStorageEngine <NSObject>
- (void)ansyOneWayFriendsInfo:(NSDictionary *)arg1;
- (void)ansySaveAccountListArray:(NSArray *)arg1;
- (void)ansySaveAccountNetworkFlowDictionary:(NSDictionary *)arg1;
- (void)ansySaveCommonCardModel:(CommonCardModel *)arg1 withUIN:(long long)arg2;
- (void)ansySaveContactBindingInfo:(NSDictionary *)arg1;
- (void)ansySaveContactsChatUINList:(NSDictionary *)arg1;
- (void)ansySaveFAClickReportDict:(NSDictionary *)arg1 toPath:(NSString *)arg2;
- (void)ansySaveFriendListDictionary:(NSDictionary *)arg1;
- (void)ansySaveFriendRequestSetting:(NSDictionary *)arg1;
- (void)ansySaveFriendsVerifyMsgInfo:(NSDictionary *)arg1;
- (void)ansySaveFriendsVerifyMsgStructMsgModleList:(NSArray *)arg1;
- (void)ansySaveGroupVerifyMsgInfo:(NSDictionary *)arg1;
- (void)ansySaveGroupVerifyMsgStructMsgModelList:(NSArray *)arg1;
- (void)ansySaveInvitedList:(NSDictionary *)arg1;
- (void)ansySaveMobilePhoneConfigList:(NSDictionary *)arg1;
- (void)ansySaveMobilePhoneWithountCountryList:(NSDictionary *)arg1;
- (void)ansySaveNetworkFlowDictionary:(NSDictionary *)arg1;
- (void)ansySaveNewAllContacts:(NSArray *)arg1;
- (void)ansySaveNewMatchContacts:(NSArray *)arg1;
- (void)ansySaveOneWayFriends:(NSArray *)arg1;
- (void)ansySaveProfileModel:(QQProfileModel *)arg1 withUIN:(long long)arg2;
- (void)ansySavePushFriendsVerifyMsgPeerUinTimeDic:(NSDictionary *)arg1;
- (void)ansySavePushGroupVerifyMsgPeerUinTimeDic:(NSDictionary *)arg1;
- (void)ansySavePushMsgArray:(NSArray *)arg1;
- (void)ansySavePushPobinMsgPeerUinTimeDic:(NSDictionary *)arg1;
- (void)ansySaveRecommendedFriendsPushMsg:(NSDictionary *)arg1;
- (void)ansySaveRecommendedGroups:(NSDictionary *)arg1;
- (void)ansySaveTemporaryUINList:(NSDictionary *)arg1;
- (void)ansySaveVipInfo:(NSDictionary *)arg1;
- (void)asycSaveActivateFriendsModel:(QQActivateFriendsModel *)arg1;
- (void)asycSaveHotRichStateModelCache:(NSDictionary *)arg1;
- (void)asycSaveInterestAccountUnreadCountDic:(NSDictionary *)arg1;
- (void)asycSaveInterestAccountUnreadCountDicNew:(NSDictionary *)arg1;
- (void)asycSaveLastDisplayWeather:(QQCityWeatherInfo *)arg1 forUin:(unsigned long long)arg2;
- (void)asycSaveMyRichState:(RichStateModel *)arg1;
- (void)asycSaveOperationGrayTipConfigModel:(OGTConfigModel *)arg1;
- (void)asycSaveOperationGrayTipConfigTaskModel:(OGTConfigTaskModel *)arg1;
- (void)asycSaveOperationGrayTipRandomWordings:(NSDictionary *)arg1;
- (void)asycSaveQDTransferInfoFetchFlag:(NSDictionary *)arg1;
- (void)asycSaveRecentHistoryHandledCountDic:(NSDictionary *)arg1;
- (void)asycSaveSCFRecommendModleList:(NSMutableArray *)arg1 forUin:(unsigned long long)arg2;
- (void)asycSaveSearchConditionModelCache:(NSDictionary *)arg1;
- (void)asynRemovePAReportLogs:(NSString *)arg1;
- (void)asynSaveBlackListDictionary:(NSDictionary *)arg1;
- (void)asynSaveGroupMemberShutupList:(NSDictionary *)arg1;
- (void)asynSavePAReportLogs:(NSDictionary *)arg1 forUin:(NSString *)arg2;
- (void)asynSaveStrangerListDictionary:(NSDictionary *)arg1;
- (void)asyncSaveClearFriendsModelCache:(ClearFriendsModel *)arg1;
- (void)asyncSaveFriendsVerifyCloneInfoModelDic:(NSDictionary *)arg1;
- (void)asyncSaveQIMFansNotifyList:(NSArray *)arg1 forUin:(long long)arg2;
- (void)asyncSaveTeleEntryModel:(TeleEntryModel *)arg1;
- (void)clearSearchConditionModelCache;
- (void)deleteOperationGrayTipConfigTaskModel:(NSString *)arg1;
- (_Bool)isExistSearchConditionModelCache;
- (NSMutableArray *)loadAccountListArray;
- (NSMutableDictionary *)loadAccountNetworkFlowDictionary;
- (NSMutableDictionary *)loadBlackListDictionary;
- (CharmInfoModel *)loadCharmInfoModel;
- (ClearFriendsModel *)loadClearFriendsModelCache;
- (CommonCardModel *)loadCommonCardModelWithUIN:(long long)arg1;
- (NSMutableDictionary *)loadContactsApplyBindingInfo;
- (NSMutableDictionary *)loadContactsBindingInfo;
- (NSDictionary *)loadContactsChatUINList;
- (NSMutableDictionary *)loadFAClickReportDictWithPath:(NSString *)arg1;
- (NSMutableDictionary *)loadFSIDictionary;
- (NSMutableDictionary *)loadFriendListDictionary;
- (NSMutableDictionary *)loadFriendRequestSetting;
- (QQActivateFriendsModel *)loadFriendsModel:(long long)arg1;
- (NSMutableDictionary *)loadFriendsVerifyCloneInfoModelDic;
- (NSMutableDictionary *)loadFriendsVerifyMsgInfo;
- (NSMutableArray *)loadFriendsVerifyMsgStructMsgModleList;
- (NSDictionary *)loadGroupInfoData;
- (NSMutableDictionary *)loadGroupMemberShutupList;
- (NSArray *)loadGroupMemberShutupListByGroupCode:(unsigned long long)arg1;
- (NSMutableDictionary *)loadGroupMemoDictionaryWithPath:(NSString *)arg1;
- (NSMutableDictionary *)loadGroupVerifyMsgInfo;
- (NSMutableArray *)loadGroupVerifyMsgStructMsgModelList;
- (NSMutableDictionary *)loadHotRichStateModelCache;
- (NSDictionary *)loadInterestAccountUnreadCountDic;
- (NSDictionary *)loadInterestAccountUnreadCountDicNew;
- (NSMutableDictionary *)loadInvitedList;
- (QQCityWeatherInfo *)loadLastDisplayWeather:(long long)arg1;
- (NSDictionary *)loadLastLoginContacts;
- (NSMutableDictionary *)loadMobilePhoneConfigList;
- (NSMutableDictionary *)loadMobilePhoneWithountCountryList;
- (RichStateModel *)loadMyRichState;
- (NSMutableDictionary *)loadNetworkFlowDictionary;
- (NSMutableArray *)loadNewAllContacts;
- (NSMutableArray *)loadNewMatchContacts;
- (NSMutableArray *)loadOneWayFriends;
- (NSMutableDictionary *)loadOneWayFriendsInfo;
- (OGTConfigModel *)loadOperationGrayTipConfigModel:(NSString *)arg1;
- (OGTConfigTaskModel *)loadOperationGrayTipConfigTaskModel:(NSString *)arg1;
- (NSDictionary *)loadOperationGrayTipRandomWordings;
- (QQProfileModel *)loadProfileModelWithUIN:(long long)arg1;
- (NSMutableDictionary *)loadPushFriendsVerifyMsgPeerUinTimeDic;
- (NSMutableDictionary *)loadPushGroupVerifyMsgPeerUinTimeDic;
- (NSMutableArray *)loadPushMsgArray;
- (NSMutableDictionary *)loadPushPobinMsgPeerUinTimeDic;
- (NSDictionary *)loadQDTransferInfoFetchFlag;
- (NSArray *)loadQIMFansNotifyList:(long long)arg1;
- (NSArray *)loadQQContacts;
- (NSArray *)loadRecentHistory;
- (NSDictionary *)loadRecentHistoryHandledCount;
- (NSDictionary *)loadRecommendFriendsPushMsgInfo;
- (NSMutableDictionary *)loadRecommendedGroups:(_Bool)arg1;
- (NSMutableDictionary *)loadRichStateModelCache;
- (NSMutableArray *)loadSCFRecommendModleList:(long long)arg1;
- (NSMutableDictionary *)loadSearchConditionModelCache;
- (NSMutableDictionary *)loadStrangerListDictionary;
- (TeleEntryModel *)loadTeleEntryModel;
- (NSMutableDictionary *)loadTemporaryUINList;
- (NSDictionary *)loadUploadedContacts;
- (NSMutableDictionary *)loadVipInfo:(long long)arg1;
- (NSDictionary *)readPAReportLogs:(NSString *)arg1;
- (_Bool)removeInterestAccountUnreadCountPath;
- (_Bool)saveAccountNetworkFlowDictionary:(NSDictionary *)arg1;
- (_Bool)saveBlackListDictionary:(NSDictionary *)arg1;
- (_Bool)saveCharmInfoModel:(CharmInfoModel *)arg1;
- (_Bool)saveContactsApplyBindingInfo:(NSDictionary *)arg1;
- (_Bool)saveFSIDictionary:(NSDictionary *)arg1;
- (_Bool)saveFriendListDictionary:(NSDictionary *)arg1;
- (_Bool)saveGroupFriendDictionary:(NSDictionary *)arg1;
- (_Bool)saveGroupInfoData:(NSDictionary *)arg1;
- (_Bool)saveGroupMemoDictionary:(NSDictionary *)arg1 withPath:(NSString *)arg2;
- (void)saveLastLoginContacts:(NSDictionary *)arg1;
- (_Bool)saveNetworkFlowDictionary:(NSDictionary *)arg1;
- (_Bool)saveNewAllContacts:(NSArray *)arg1;
- (_Bool)saveNewMatchContacts:(NSArray *)arg1;
- (_Bool)saveOperationGrayTipConfigModel:(OGTConfigModel *)arg1;
- (_Bool)saveOperationGrayTipRandomWordings:(NSDictionary *)arg1;
- (void)saveQQContacts:(NSArray *)arg1;
- (_Bool)saveRecentHistory:(NSArray *)arg1;
- (_Bool)saveRichStateModelCache:(NSDictionary *)arg1;
- (_Bool)saveSearchConditionModelCache:(NSDictionary *)arg1;
- (_Bool)saveStrangerListDictionary:(NSDictionary *)arg1;
- (void)saveUploadedContacts:(NSDictionary *)arg1;
- (_Bool)synSavePAReportLogs:(NSDictionary *)arg1 forUin:(NSString *)arg2;
- (void)syncSaveProfileModel:(QQProfileModel *)arg1 withUIN:(long long)arg2;
@end
