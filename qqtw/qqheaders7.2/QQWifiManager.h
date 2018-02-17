//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQWifiApNodeInfoDelegate.h"
#import "QQWifiConnDelegate.h"
#import "QQWifiConnectCallback.h"
#import "SimpleAlertViewDelegate.h"
#import "UIActionSheetDelegate.h"

@class ApInfo, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface QQWifiManager : NSObject <QQWifiApNodeInfoDelegate, QQWifiConnDelegate, QQWifiConnectCallback, UIActionSheetDelegate, SimpleAlertViewDelegate>
{
    _Bool _isConnViewOpen;
    _Bool _willOpenGuideView;
    _Bool _bindingPhone;
    _Bool _isBindPhoneNumber;
    _Bool _bReconnect;
    int _curNetStatus;
    int _errCode;
    int _qqwifiEntry;
    int _authType;
    NSURL *_needAfterLoginHandleUrl;
    id <QQWifiConnDelegate> _delegate;
    NSMutableDictionary *_apInfoDic;
    ApInfo *_authApInfo;
    ApInfo *_curApInfo;
    ApInfo *_reqApInfo;
    NSDictionary *_wifiExtraInfoDic;
    double _connectStartTime;
    double _connectUsedTime;
    NSDictionary *_luaReportDictionary;
    NSString *_oldWifiName;
    NSString *_curMacAddr;
}

+ (_Bool)canHandleUrl:(id)arg1;
+ (_Bool)canHandleUrlEncode:(id)arg1;
+ (id)getInstance;
- (_Bool)DoOpenURL:(id)arg1 sourceApplication:(int)arg2;
- (void)actionSheetCancel:(id)arg1 apInfo:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *apInfoDic; // @synthesize apInfoDic=_apInfoDic;
@property(retain, nonatomic) ApInfo *authApInfo; // @synthesize authApInfo=_authApInfo;
@property(nonatomic) int authType; // @synthesize authType=_authType;
@property(nonatomic) _Bool bReconnect; // @synthesize bReconnect=_bReconnect;
@property(nonatomic) _Bool bindingPhone; // @synthesize bindingPhone=_bindingPhone;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (_Bool)canJumpWifiSetting;
- (_Bool)cancelConnect:(id)arg1;
- (void)changeApInfo:(id)arg1 networkConnState:(int)arg2;
- (void)changeToApInfo:(id)arg1 bReconnect:(_Bool)arg2 byPhone:(_Bool)arg3;
- (void)closeConnect:(id)arg1;
- (_Bool)connect:(id)arg1 delegate:(id)arg2;
- (_Bool)connect:(id)arg1 delegate:(id)arg2 byPhone:(_Bool)arg3;
- (_Bool)connectByPhone:(id)arg1 delegate:(id)arg2;
@property(nonatomic) double connectStartTime; // @synthesize connectStartTime=_connectStartTime;
@property(nonatomic) double connectUsedTime; // @synthesize connectUsedTime=_connectUsedTime;
@property(retain, nonatomic) ApInfo *curApInfo; // @synthesize curApInfo=_curApInfo;
@property(retain, nonatomic) NSString *curMacAddr; // @synthesize curMacAddr=_curMacAddr;
@property(nonatomic) int curNetStatus; // @synthesize curNetStatus=_curNetStatus;
- (void)dealloc;
@property(retain, nonatomic) id <QQWifiConnDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doCheckCurState:(id)arg1;
@property(nonatomic) int errCode; // @synthesize errCode=_errCode;
- (unsigned long long)getContactsGuideEnterType;
- (int)getLastErrCode;
- (int)getURLSource;
- (id)getWifiApInfo;
- (int)getWifiAuth;
- (id)getWifiBlueBarAdUrl;
- (int)getWifiNetStatus;
- (_Bool)handleOpenURL:(id)arg1 sourceApplication:(int)arg2;
- (id)init;
@property(nonatomic) _Bool isBindPhoneNumber; // @synthesize isBindPhoneNumber=_isBindPhoneNumber;
@property(nonatomic) _Bool isConnViewOpen; // @synthesize isConnViewOpen=_isConnViewOpen;
- (_Bool)isNetInCurAp;
- (void)jumpWifiSetting;
@property(retain, nonatomic) NSDictionary *luaReportDictionary; // @synthesize luaReportDictionary=_luaReportDictionary;
@property(retain, nonatomic) NSURL *needAfterLoginHandleUrl; // @synthesize needAfterLoginHandleUrl=_needAfterLoginHandleUrl;
- (void)networkStateChanged:(id)arg1;
- (void)notificationUI:(int)arg1;
- (void)notificationUI:(int)arg1 apInfo:(id)arg2;
@property(retain, nonatomic) NSString *oldWifiName; // @synthesize oldWifiName=_oldWifiName;
- (void)onAppBecomeActive;
- (void)onNotifyLoginSuccess:(id)arg1;
- (void)onQQWiFiEnterBackgroundReport:(id)arg1;
- (void)onReceiveList:(_Bool)arg1 ApNodeCheckResult:(id)arg2 extraInfo:(id)arg3;
- (void)onTaskResult:(id)arg1 networkConnState:(int)arg2 networkConnErrorCode:(int)arg3 extraInfo:(id)arg4;
- (void)onTaskStatus:(id)arg1 networkConnState:(int)arg2;
@property(nonatomic) int qqwifiEntry; // @synthesize qqwifiEntry=_qqwifiEntry;
- (id)queryAvatar:(id)arg1;
- (void)recheckCurState;
- (void)reportBindPhone;
@property(retain, nonatomic) ApInfo *reqApInfo; // @synthesize reqApInfo=_reqApInfo;
- (void)requestAvatar:(id)arg1;
- (void)requestAvatar:(id)arg1 url:(id)arg2;
@property(retain, nonatomic) NSDictionary *wifiExtraInfoDic; // @synthesize wifiExtraInfoDic=_wifiExtraInfoDic;
@property(nonatomic) _Bool willOpenGuideView; // @synthesize willOpenGuideView=_willOpenGuideView;
- (void)set_delegate;
- (void)showAlert:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

