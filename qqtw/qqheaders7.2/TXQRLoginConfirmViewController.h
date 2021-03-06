//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXQRBaseViewController.h"

#import "MQQRcodePlugInterface.h"
#import "QRCodeCallBackProtocol.h"

@class MBProgressHUD, NSString, QQDeviceLockLoginVerifySchemeParser, TwoDimensionBarcodeManager, UIButton, UIImageView, UILabel, UIView;

@interface TXQRLoginConfirmViewController : TXQRBaseViewController <QRCodeCallBackProtocol, MQQRcodePlugInterface>
{
    MBProgressHUD *hud;
    UIView *_ctrlView;
    UIImageView *_avatarImageView;
    UILabel *_nicknameLabel;
    UILabel *_textLabel;
    UILabel *_subTextLabel;
    UIButton *_firstButton;
    UIButton *_secondButton;
    QQDeviceLockLoginVerifySchemeParser *_scheme;
    _Bool _verifyFlag;
    NSString *_qrcodeURL;
    _Bool _QRCodeInvalid;
    TwoDimensionBarcodeManager *_qrcodeMgr;
}

- (void).cxx_destruct;
- (void)auth_failed:(int)arg1 withMsg:(id)arg2;
- (void)auth_succ:(unsigned long long)arg1;
- (void)handleData:(id)arg1;
- (void)handleData:(id)arg1 RootNav:(id)arg2;
- (void)hideHUD;
- (void)hideHUDAndPopViewControllerAfterDelay:(id)arg1;
- (_Bool)isFit:(id)arg1;
- (double)layoutTextAndButtons:(id)arg1 withFirstButtonCaption:(id)arg2 andTempAuthPermisson:(unsigned int)arg3;
- (void)loadView;
- (void)onFirstButtonTap:(id)arg1;
- (void)onSecondButtonTap:(id)arg1;
- (void)qrCodeConfirm_failed:(int)arg1 withMsg:(id)arg2;
- (void)qrCodeConfirm_succ:(unsigned int)arg1 withAppName:(id)arg2;
- (void)qrCodeFailed:(int)arg1 withMsg:(id)arg2;
- (void)qrCodeReject_failed:(int)arg1 withMsg:(id)arg2;
- (void)qrCodeReject_succ;
- (void)qrCodeVerify_failed:(int)arg1 withMsg:(id)arg2;
- (void)qrCodeVerify_succ:(unsigned int)arg1 withAppName:(id)arg2;
- (void)qrLoginHelper:(int)arg1;
- (void)sendNotificationToInformQRCodeLoginSuccess:(_Bool)arg1;
- (void)showLoginFailViewWithErrorMsg:(id)arg1;
- (void)showQrPic_failed:(int)arg1 withMsg:(id)arg2;
- (void)showQrPic_succ:(id)arg1 withExpireTime:(unsigned int)arg2 withQueryTime:(unsigned short)arg3;
- (void)showQrPic_succWithPush:(id)arg1 withExpireTime:(unsigned int)arg2 withQueryTime:(unsigned short)arg3;
- (void)showSuccessHUD:(id)arg1;
- (void)showWaitHUD;
- (void)verifyQRCode;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(nonatomic, getter=isQRCodeInvalid) _Bool QRCodeInvalid; // @dynamic QRCodeInvalid;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak TwoDimensionBarcodeManager *qrcodeMgr; // @dynamic qrcodeMgr;
@property(copy, nonatomic) NSString *qrcodeURL; // @dynamic qrcodeURL;
@property(readonly) Class superclass;

@end

