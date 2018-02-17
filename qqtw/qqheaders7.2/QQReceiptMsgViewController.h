//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QUIActionSheetDelegate.h"

@class NSArray, NSString, QQBaseChatViewController, QQChatPhoto, QQCircularProgressView, QQEmotionLabel, QQMessageModel, QQProgressHUD, QQReceiptViewBottomBar, QQReceiptVoiceCell, UIImageView, UILabel, UIScrollView;

@interface QQReceiptMsgViewController : QQViewController <QUIActionSheetDelegate>
{
    UIScrollView *_contentView;
    QQReceiptViewBottomBar *_bottomBar;
    NSArray *_resModels;
    QQEmotionLabel *_textLabel;
    UIImageView *_imageView;
    QQChatPhoto *_chatPhoto;
    _Bool _hasReport;
    _Bool _isRequesting;
    _Bool _hasGetMsgReadState;
    NSArray *_discussReadList;
    NSArray *_discussUnreadList;
    long long _reportSeq;
    long long _getListSeq;
    QQReceiptVoiceCell *_voiceCell;
    UILabel *_tipsLabel;
    _Bool downPic;
    int _readReportRepeatCount;
    unsigned int _readMemberCount;
    UIImageView *_textBgView;
    UIImageView *_iconImgView;
    QQProgressHUD *_hud;
    _Bool _shouldReportVoiceState;
    QQCircularProgressView *_picHud;
    float _loadProgress;
    _Bool _failed;
    _Bool _isLoadImg;
    _Bool _useOldC2CReadReport;
    QQMessageModel *_msgModel;
    QQBaseChatViewController *_chatViewController;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) QQBaseChatViewController *chatViewController; // @synthesize chatViewController=_chatViewController;
- (void)clickBottomButton;
- (void)dealloc;
- (void)discussGroupReceipMsgReadReportNoti:(id)arg1;
- (void)doTap;
- (id)getImageWithType:(int)arg1;
- (void)handleC2CMsgReportResult:(id)arg1;
- (void)handleChatOrignalImageDownloadStateNotification:(id)arg1;
- (void)handleImageDownloadProgressNotification:(id)arg1;
@property(retain, nonatomic) QQMessageModel *msgModel; // @synthesize msgModel=_msgModel;
- (_Bool)notiModel:(id)arg1 isEqualToCurrentModel:(id)arg2;
- (void)onPttDownloadError:(id)arg1;
- (void)onPttDownloadFinish:(id)arg1;
- (void)onPttDownloadStart:(id)arg1;
- (void)onTextLabelLongPress:(id)arg1;
- (void)receiptPhotoBrowserImageLoadedNoti:(id)arg1;
- (void)reportWithKey:(id)arg1 msgModel:(id)arg2 isReadList:(_Bool)arg3;
- (void)requestReadCountFirstIfIsVoiceMsg;
- (id)resModel;
- (void)resModelStateChanged:(id)arg1;
- (void)sendMsgStateReqIfNeeded;
- (void)setupImageView:(id)arg1;
- (void)setupPttView:(id)arg1;
- (void)setupTextView:(id)arg1;
- (void)setupViews;
- (void)showDownloadFailedUI;
- (void)tapVoiceCell;
- (void)updateBottomBarReadCount:(int)arg1;
- (void)updateMsgModelState;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
