//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQShareResultDialogDelegate.h"
#import "QUIAlertViewDelegate.h"
#import "RichMsgPreviewDialogDelegate.h"

@class NSString, NSTimer, QQHttpClientSession, QQRichMsgPreviewDialog, QQShareMsgInfo, QQShareResultDialog, QUIAlertView, QUICheckBoxAlertView;

@interface QQRichMsgUtil : NSObject <RichMsgPreviewDialogDelegate, QQShareResultDialogDelegate, QUIAlertViewDelegate>
{
    long long _lRequestVKeyTag;
    _Bool _isSharingQZone;
    id <QQRichMsgUtilDelegate> _delegate;
    QQShareMsgInfo *_shareInfo;
    int _xo;
    NSString *_connIpAddr;
    unsigned int _connIp;
    unsigned int _connPort;
    QQRichMsgPreviewDialog *_richPreMsgDlg;
    QQShareResultDialog *_shareResultDlg;
    QUICheckBoxAlertView *_shareResultAlertView;
    QUIAlertView *_qqAlertView;
    QQHttpClientSession *_session;
    NSString *_AddtionalMessage;
    NSTimer *_RequestTimer;
    NSString *_loadingPreImgPath;
    _Bool _willDownloadingIcon;
}

+ (id)getInstance;
- (void)HandleGetPluginInfoResp:(id)arg1;
- (void)SaveAddtionalMsg;
- (void)ShareToQZone;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)buttonClickOne:(id)arg1;
- (void)buttonClickSuccess:(id)arg1;
- (void)buttonClickTwo:(id)arg1;
- (void)cancelButtonClick;
- (_Bool)checkCurrentNetState;
- (void)clear;
- (void)compareOpenID:(id)arg1;
- (id)connAppID;
- (void)dealloc;
- (void)getImageDownloadErrorNotification:(id)arg1;
- (void)getImageFinishNotification:(id)arg1;
- (void)getOpenIDFinished:(id)arg1;
- (void)getOpenIDTimeOut;
- (id)getPreViewImage;
- (id)init;
- (void)onQQRequestSigVKeyFailNote:(id)arg1;
- (void)onQQRequestSigVKeySuccNote:(id)arg1;
- (void)onTimeout;
- (void)popAlertViewTip;
- (void)popQQRichPreMsgDlg:(id)arg1;
- (void)popQQRichPreMsgDlg:(id)arg1 needCheckOpenID:(_Bool)arg2;
- (void)popQQShareResultDlg:(_Bool)arg1 errorcode:(long long)arg2 msg:(id)arg3 to3rdApp:(_Bool)arg4;
- (void)qqHttpSessionDidLoad:(id)arg1 result:(id)arg2;
- (void)qqHttpSessionError:(id)arg1 error:(id)arg2;
- (void)realPopQQRichPreMsgDlg;
- (void)requestFetchVKey;
- (void)sendButtonClick:(id)arg1 msg:(id)arg2;
- (void)shareToQZoneWithShareInfo:(id)arg1 comment:(id)arg2;
- (void)shareToQzoneResult:(unsigned long long)arg1;
- (void)uploadPic:(id)arg1;
- (void)willDismissFromScreen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <QQRichMsgUtilDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isSharingQZone; // @dynamic isSharingQZone;
@property(retain, nonatomic) QQShareMsgInfo *shareInfo; // @dynamic shareInfo;
@property(readonly) Class superclass;

@end

