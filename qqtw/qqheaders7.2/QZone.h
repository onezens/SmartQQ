//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQConnectPluginCheckDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSDictionary, NSNotification, NSString, NSTimer, QQConnectPluginInfoQuery, QQShareMsgInfo, QZUserCreditLevelManager;

@interface QZone : NSObject <QQConnectPluginCheckDelegate, UIAlertViewDelegate>
{
    QZUserCreditLevelManager *_creditLevelManager;
    QQConnectPluginInfoQuery *_pluginInfoCheck;
    QQShareMsgInfo *_shareMsgInfo;
    NSDictionary *_shareParams;
    _Bool _hasPreload;
    NSTimer *_thirdShareTimer;
    NSNotification *_thirdShareNotification;
    NSNotification *_thirdURLShareNotification;
    _Bool _isURLShare;
    double _startAPPTime;
    unsigned long long _durationFromStartAPPToEnterQZone;
    NSString *_userLocalIP;
}

+ (id)instance;
+ (id)topViewControllerInCurrentTabBar;
- (void).cxx_destruct;
- (void)afterLoginAndMessageReceivedNotify:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)check3rdShareCanSend:(id)arg1;
- (void)checkAccountDifferent:(id)arg1;
- (void)checkOpenID:(id)arg1;
- (void)cleanPhotoEventCacheForNewVersion;
- (void)clearCacheByUser;
- (void)clearCacheOnDeleteAccount:(long long)arg1;
- (void)clearFeedCache;
- (void)configThirdAppShareParam:(id)arg1;
- (id)currentActiveFeedViewCtonroller:(id)arg1;
- (id)decodePushData:(id)arg1;
- (id)decodeUpdateData:(id)arg1;
- (void)dispatchThirdAppShareType:(long long)arg1 userInfo:(id)arg2;
- (unsigned long long)durationFromStartAPPToEnterQZone;
- (void)exportPituVideoWithDict:(id)arg1;
- (void)exportVideo:(id)arg1 paramDict:(id)arg2;
- (long long)getLastMiniFeedTimestampWithUin:(long long)arg1;
- (void)getOpenIDFinished:(id)arg1;
- (void)getOpenIDTimeOut;
- (id)getQzoneNeedClearCachePaths:(_Bool)arg1;
- (id)init;
- (void)initparseDNSModule;
- (void)innerOnLiveShow:(id)arg1;
- (_Bool)isActiveFeedVisible;
- (_Bool)isAppDelegateAlertViewShown;
- (_Bool)isFromWriteMood:(id)arg1;
- (_Bool)isPassiveFeedVisible;
- (_Bool)isQZoneViewControllerVisible:(id)arg1;
- (id)manageThirdAppTitle:(id)arg1 appid:(id)arg2;
- (void)notifyMQQCompetence:(id)arg1 errCode:(long long)arg2 msg:(id)arg3;
- (void)notifyMQQCompetence:(int)arg1 uin:(long long)arg2 isblack:(int)arg3 errCode:(long long)arg4 msg:(id)arg5;
- (void)on3rdShare:(id)arg1;
- (void)onAIOGZPassiveViewCtrShowNotify:(id)arg1;
- (void)onAlbumListShowNotify:(id)arg1;
- (void)onAppleWatchShare2QZone:(id)arg1;
- (void)onBeforeLoginOutNotify:(id)arg1;
- (void)onClearCacheBegin;
- (void)onClearCacheEnd;
- (void)onCompetenceSetting:(id)arg1;
- (void)onCrashShouldClearCache;
- (void)onCrashed;
- (void)onCrashedWithCrashStack:(id)arg1;
- (void)onEnterActiveViewCtr:(id)arg1;
- (void)onEnterActiveViewCtr:(id)arg1 isFromThirdApp:(_Bool)arg2;
- (void)onEnterActiveViewCtrAnd3rdShare:(id)arg1;
- (void)onEnterBackground;
- (void)onEnterDetail:(id)arg1;
- (void)onEnterForeGround;
- (void)onEnterHomepage:(id)arg1;
- (void)onEnterMoodEdit:(id)arg1;
- (void)onEnterPassiveViewCtr:(id)arg1;
- (void)onEnterQZSearchBoard:(id)arg1;
- (void)onEnterSendGiftInAIO:(id)arg1;
- (void)onEnterUploadPhoto:(id)arg1;
- (int)onGetBlackNotify:(id)arg1;
- (void)onGroupZoneAIOUrlNotify:(id)arg1;
- (void)onGroupZoneShowNotify:(id)arg1;
- (void)onHandleOpenQzoneSchemaNotify:(id)arg1;
- (void)onLiveShow:(id)arg1;
- (void)onLogin;
- (void)onLoginOutNotify:(id)arg1;
- (void)onQQConnectCheckPluginInfoComplete;
- (void)onQQPushGateInfoNotification:(id)arg1;
- (void)onReceiveForwardAIOPicturesToGroupAlbumNotification:(id)arg1;
- (void)onSHowQZGAAlbumListViewController:(id)arg1;
- (int)onSetBlackNotify:(id)arg1;
- (void)onSetUploadShowNotify:(id)arg1;
- (void)onSettingViewShowNotify:(id)arg1;
- (void)onShowFavourDetail:(id)arg1;
- (void)onThirdAppShareToQZone:(id)arg1;
- (void)onUpdateFavourCacheData:(id)arg1;
- (void)onWNSCommandNotify:(id)arg1;
- (void)preGenerateVipIcon;
- (void)preLoadInSubthread;
- (void)preloadLocalFriendFeeds;
- (void)preloadUserlogo;
- (void)pushGateInfoNotificationMainThread:(id)arg1;
- (void)releaseNotification;
- (void)removeQZoneTab;
- (void)scanRecentPhoto;
- (void)searchAssetWithAssetURL:(id)arg1 paramDict:(id)arg2;
@property(retain) NSString *userLocalIP; // @synthesize userLocalIP=_userLocalIP;
- (void)shareBackToThirdApp:(id)arg1;
- (void)shareToQzoneNative:(id)arg1;
- (void)showDifferAccountLoginHint;
- (double)startAPPTime;
- (void)startCheckPluginInfoValid;
- (id)tabBarController;
- (void)thirdAppForwardSpecialHandler:(id)arg1;
- (void)thirdAppShareToQZone:(id)arg1;
- (void)thirdAppShareVideo:(id)arg1;
- (void)thirdAppURLShare:(id)arg1;
- (id)topViewControllerWithRootViewController:(id)arg1;
- (long long)unreadActiveCount;
- (long long)unreadActiveLastUin;
- (long long)unreadPassiveCount;
- (void)uploadAIOGroupPhoto:(long long)arg1 albumModel:(id)arg2 refer:(id)arg3 compressBatchId:(long long)arg4 quality:(long long)arg5 uploadEntrance:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
