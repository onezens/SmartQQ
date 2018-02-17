//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewPluginQQBizBase.h"

@class NSMutableDictionary, NSString, QQViewController;

@interface VASWebViewPlugin : QQWebViewPluginQQBizBase
{
    QQViewController *_debugViewContrller;
    NSString *_uin;
    NSString *_skey;
    double _startLoadTime;
    double _finishLoadTime;
    double _nClickStart;
    double _nPageStart;
    double _nPageFinish;
    id _debugLogChangeObserver;
    NSMutableDictionary *_downloadImgCallBack;
}

+ (void)webViewLogDetail:(id)arg1 isEventLevel:(_Bool)arg2 forBusiness:(id)arg3 subBusiness:(id)arg4;
- (void).cxx_destruct;
- (void)clearWebViewCache;
- (void)dealloc;
- (void)downloadImageWithUrl:(id)arg1 toFile:(id)arg2;
- (double)getTimeSince1970;
- (_Bool)handleEvent:(int)arg1 userInfo:(id)arg2;
- (_Bool)handleJsBridgeRequest_common_saveImage:(id)arg1;
- (_Bool)handleJsBridgeRequest_qw_data_getDomainIpList:(id)arg1;
- (_Bool)handleJsBridgeRequest_qw_data_getFriendRemark:(id)arg1;
- (_Bool)handleJsBridgeRequest_qw_data_getPerformance:(id)arg1;
- (void)handleJsBridgeRequest_qw_debug_detailLog:(id)arg1;
- (_Bool)handleSchemaRequest:(id)arg1 schema:(id)arg2 fromEnv:(id)arg3;
- (id)init;
- (void)pluginDidInit;
- (void)pluginWillDestory;
- (void)reportUniformLog:(_Bool)arg1;
- (void)requestHandle:(id)arg1 callbackKey:(id)arg2;

@end

