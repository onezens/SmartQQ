//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, QQViewController;

@interface QQUrlParse : NSObject
{
    NSString *_serverName;
    NSString *_actionName;
    NSMutableDictionary *_urlParam;
    NSString *_clickPushBannerPicName;
    NSString *_robotUin;
    NSString *_plugID;
    int _urlFromType;
    QQViewController *_parentVC;
}

+ (id)getThirdAppNameBySchme:(id)arg1;
+ (_Bool)isSupportedSchemeUrl:(id)arg1;
- (_Bool)checkParamArray;
- (int)converSvrnamAndActnamToInternalCmd;
- (void)dealloc;
- (_Bool)handleInternalWebViewOpenUrl:(id)arg1 withOpenUrl:(id)arg2;
- (_Bool)handleLebarPlugOpenUrl:(id)arg1 withPlugID:(id)arg2;
- (_Bool)handlePubAcctPushMsgNativeJump:(id)arg1;
- (_Bool)handlePushBannerOpenUrl:(id)arg1 withClickPicName:(id)arg2;
- (_Bool)handleSchemeOpenUrl:(id)arg1;
- (_Bool)handleSchemeOpenUrl:(id)arg1 withViewController:(id)arg2;
- (_Bool)handleSelfMsgOpenUrl:(id)arg1 withRobotUin:(id)arg2;
- (id)init;
- (_Bool)parseCmdAndParam:(id)arg1 withUrlFrom:(int)arg2;
- (_Bool)postCmdNotify;
- (_Bool)processOpenUrlFromNoInternalWebView:(id)arg1 withUrlFrom:(int)arg2;
- (void)rdmReport;
- (void)resetData;

@end

