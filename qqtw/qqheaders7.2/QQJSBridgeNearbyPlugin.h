//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewPluginQQBizBase.h"

@interface QQJSBridgeNearbyPlugin : QQWebViewPluginQQBizBase
{
}

- (void)dealloc;
- (void)handleJsBridgeRequest_nearby_createMsgFromOther:(id)arg1;
- (void)handleJsBridgeRequest_nearby_editSchool:(id)arg1;
- (void)handleJsBridgeRequest_nearby_filterList:(id)arg1;
- (void)handleJsBridgeRequest_nearby_followUser:(id)arg1;
- (void)handleJsBridgeRequest_nearby_getLbsInfo:(id)arg1;
- (void)handleJsBridgeRequest_nearby_getNearbyPeopleAvatar:(id)arg1;
- (void)handleJsBridgeRequest_nearby_openFreshDetail:(id)arg1;
- (void)handleJsBridgeRequest_nearby_openMatchPeopleAio:(id)arg1;
- (void)handleJsBridgeRequest_nearby_openProfileCard:(id)arg1;
- (void)handleJsBridgeRequest_nearby_openVideoChat:(id)arg1;
- (void)handleJsBridgeRequest_nearby_shootAvatar:(id)arg1;
- (int)intValueFromDictionary:(id)arg1 key:(id)arg2 toplimit:(int)arg3;
- (void)onNearbyUserSummaryEditPhotoResult:(id)arg1;
- (void)requestFollow:(long long)arg1 toUin:(id)arg2 withFromFlag:(long long)arg3 callBack:(id)arg4;
- (id)stringValueFromDictionary:(id)arg1 key:(id)arg2;

@end

