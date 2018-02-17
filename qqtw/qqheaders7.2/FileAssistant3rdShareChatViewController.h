//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FileAssistantChatViewController.h"

#import "QUIAlertViewDelegate.h"
#import "RichMsgPreviewDialogDelegate.h"

@class NSString, QQRichMsgPreviewDialog, QQShareMsgInfo, QUICheckBoxAlertView, UIAlertView, UIWindow;

@interface FileAssistant3rdShareChatViewController : FileAssistantChatViewController <QUIAlertViewDelegate, RichMsgPreviewDialogDelegate>
{
    QQRichMsgPreviewDialog *_richMsgPreDlg;
    QQShareMsgInfo *_shareMsgInfo;
    QUICheckBoxAlertView *_shareResultAlertView;
    UIAlertView *_loadingAlertView;
    unsigned long long _uSessionId;
    _Bool _bImg;
    SEL _cancelSelect;
    SEL _okSelect;
    id _selectTarget;
    NSString *_loadingPreImgPath;
    UIWindow *_lastKeyWindow;
}

+ (void)Share2QQDataline:(id)arg1 shareInfo:(id)arg2 cancelSel:(SEL)arg3 okSel:(SEL)arg4 selTarget:(id)arg5;
- (id)GetFileIconByFileName:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)cancelButtonClick;
- (void)dealloc;
- (void)delayCloseKeyBoard;
- (void)didFileAssistantTransferUpdate:(id)arg1;
- (void)doSendShareContentToQQDataline;
- (void)finishShare:(_Bool)arg1;
- (void)getImageDownloadErrorNotification:(id)arg1;
- (void)getImageFinishNotification:(id)arg1;
- (id)getPreViewImageFromURL:(_Bool *)arg1;
- (id)getPreviewImage:(_Bool *)arg1;
- (id)init;
- (_Bool)parseFileData:(id)arg1 fileName:(id)arg2 image:(id)arg3;
- (void)sendButtonClick:(id)arg1 msg:(id)arg2;
@property(retain, nonatomic) id shareMsgInfo; // @synthesize shareMsgInfo=_shareMsgInfo;
- (void)showLoadingAlert:(id)arg1;
- (void)showShareResultAlertView:(_Bool)arg1 TipWording:(id)arg2;
- (void)showThirdAppForwardNotifyForDataline;
- (void)viewDidLoad;
- (void)willDismissFromScreen;

// Remaining properties
@property(nonatomic) SEL cancelSelect; // @dynamic cancelSelect;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) SEL okSelect; // @dynamic okSelect;
@property(retain, nonatomic) id selectTarget; // @dynamic selectTarget;
@property(readonly) Class superclass;

@end

