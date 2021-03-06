//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewPluginQQBizBase.h"

#import "UserInfoDelegate.h"

@class NSNumber, NSString, UserInfoHelp;

@interface QQJSBridgeConnectGameTeam : QQWebViewPluginQQBizBase <UserInfoDelegate>
{
    UserInfoHelp *_userInfoHelp;
    NSString *_wvUserInfoCallBack;
    NSString *_appStoreId;
    NSString *_teamId;
    NSNumber *_audioGroupId;
}

@property(copy, nonatomic) NSString *appStoreId; // @synthesize appStoreId=_appStoreId;
@property(copy, nonatomic) NSNumber *audioGroupId; // @synthesize audioGroupId=_audioGroupId;
- (void)dealloc;
- (void)didLoadUserInfo:(id)arg1;
- (id)getChatViewController:(id)arg1 accType:(int)arg2;
- (void)handleJsBridgeRequest_gameTeam_getUserInfo:(id)arg1;
- (void)handleJsBridgeRequest_gameTeam_launchApp:(id)arg1;
- (void)handleJsBridgeRequest_gameTeam_log:(id)arg1;
- (void)handleJsBridgeRequest_gameTeam_onload:(id)arg1;
- (void)handleJsBridgeRequest_gameTeam_sendTeamInvite:(id)arg1;
- (id)init;
- (void)notifyRefreshAudioStaus:(id)arg1;
- (void)notifyUpdateTeamInfo:(id)arg1;
@property(copy, nonatomic) NSString *teamId; // @synthesize teamId=_teamId;
@property(retain, nonatomic) UserInfoHelp *userInfoHelp; // @synthesize userInfoHelp=_userInfoHelp;
@property(copy, nonatomic) NSString *wvUserInfoCallBack; // @synthesize wvUserInfoCallBack=_wvUserInfoCallBack;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

