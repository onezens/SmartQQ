//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewPluginQQBizBase.h"

@interface QQJSBridgeRedPointPlugin : QQWebViewPluginQQBizBase
{
}

- (void)WebViewExecuteJSCallback:(id)arg1 withCallbackParams:(id)arg2;
- (long long)getLastLevelAppId:(id)arg1;
- (void)handleJsBridgeRequest_redpoint_getAppInfo:(id)arg1;
- (void)handleJsBridgeRequest_redpoint_getDynamicState:(id)arg1;
- (void)handleJsBridgeRequest_redpoint_getIndividuationType:(id)arg1;
- (void)handleJsBridgeRequest_redpoint_getRedPointShowInfo:(id)arg1;
- (void)handleJsBridgeRequest_redpoint_getServerTime:(id)arg1;
- (void)handleJsBridgeRequest_redpoint_isEnterFromRedPoint:(id)arg1;
- (void)handleJsBridgeRequest_redpoint_reportBusinessRedTouch:(id)arg1;
- (void)handleJsBridgeRequest_redpoint_reportRedTouch:(id)arg1;
- (void)handleJsBridgeRequest_redpoint_setAppInfo:(id)arg1;
- (void)handleJsBridgeRequest_redpoint_setDynamicState:(id)arg1;
- (void)jSBridgeCallReport:(id)arg1 cmd:(int)arg2 retCode:(int)arg3;
- (id)reportMissionsArrayStr:(id)arg1;

@end

