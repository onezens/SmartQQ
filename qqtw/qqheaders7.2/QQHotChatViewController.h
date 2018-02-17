//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupChatViewController.h"

#import "ActionSheetDataDelegate.h"
#import "AvatarServiceDelegate.h"
#import "HotChatWidgetDelegate.h"
#import "PreviewSecretPictureViewControllerDelegate.h"
#import "QQGroupRobotKeywordManagerDelegate.h"
#import "QQGroupRobotKeywordViewDelegate.h"
#import "UIActionSheetDelegate.h"

@class FlashPictureCacheMsgHandler, HotChatNoticeView, NSString, NSTimer, QQAIOMsgModel, QQGroupRobotKeywordManager, QQHotChatModel, QQWebShareActionSheet;

@interface QQHotChatViewController : QQGroupChatViewController <PreviewSecretPictureViewControllerDelegate, UIActionSheetDelegate, AvatarServiceDelegate, ActionSheetDataDelegate, QQGroupRobotKeywordManagerDelegate, QQGroupRobotKeywordViewDelegate, HotChatWidgetDelegate>
{
    _Bool _isCreateRoomSuccess;
    _Bool _removeTopMargin;
    _Bool _firstLoad;
    _Bool _shouldHideNoticeWhenCreaterFirstEnter;
    _Bool _receivedNoticePush;
    _Bool _needShowNotice;
    _Bool _kickActionSheetShowing;
    _Bool _recvSelfKickNotify;
    _Bool _hasSendMsgFailForKick;
    QQGroupRobotKeywordManager *_robotKeywordManager;
    QQHotChatModel *_wifiPOIInfoModel;
    FlashPictureCacheMsgHandler *_flashPictureCacheMsgHandler;
    HotChatNoticeView *_hotChatNoticeViewNew;
    NSTimer *_noticeCheckTimer;
    QQAIOMsgModel *_needKickUserModel;
    QQWebShareActionSheet *_shareSheet;
    NSString *_ownerNick;
    NSString *_ownerAvatarUrl;
    long long _memberListType;
}

- (void).cxx_destruct;
- (void)QQAIOShareMessageCellDidAction:(id)arg1 aioModel:(id)arg2;
- (void)QQBaseChatMessageDidGetAllOffLineTroopMessage:(id)arg1;
- (void)actionAlbumForFlashPicture:(id)arg1;
- (void)actionDeliverGift:(id)arg1;
- (void)actionInputbarRobotPanel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)adjustNotifyControl;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)appendMessage:(id)arg1 shouldReloadData:(_Bool)arg2 shouldScrollToEndWithAnimation:(_Bool)arg3;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (_Bool)canDeleteOther:(id)arg1;
- (void)checkNoticeCenter;
- (void)configNoticeCheck;
- (id)convertNoticeModel:(id)arg1;
- (void)dealloc;
- (struct UIEdgeInsets)defaultScrollViewContentInset;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (void)didPressReturnKey;
- (void)didSelectSystemNotificationCell:(id)arg1;
- (void)didTouchRichKeyBorad:(id)arg1 withControl:(id)arg2 forEvent:(id)arg3;
- (void)didTouchSecretPictureEventNew:(id)arg1;
- (void)dissmissKeyboard;
- (void)doSelectFlashPicture:(id)arg1;
- (void)enterFlowerShopWithUin:(id)arg1;
- (void)enterFlowerShopWithUin:(id)arg1 groupCode:(id)arg2;
- (void)enterSendFlowersList;
- (void)fetchNewConfigNotification:(id)arg1;
@property(nonatomic) _Bool firstLoad; // @synthesize firstLoad=_firstLoad;
@property(retain, nonatomic) FlashPictureCacheMsgHandler *flashPictureCacheMsgHandler; // @synthesize flashPictureCacheMsgHandler=_flashPictureCacheMsgHandler;
- (id)getDataForConfig:(id)arg1;
- (id)getDataForShareItem:(id)arg1 onThisItem:(int)arg2;
- (double)getTitleViewWidth;
- (int)getTopWidgetOffset;
- (void)groupGiftSelectionViewDidSelect;
- (void)groupRankLabelTouch:(id)arg1 clkUin:(id)arg2 clkNick:(id)arg3 isDeliverGiftFlag:(_Bool)arg4 source:(id)arg5;
@property(nonatomic) _Bool hasSendMsgFailForKick; // @synthesize hasSendMsgFailForKick=_hasSendMsgFailForKick;
- (void)headIconTouch:(id)arg1;
@property(retain, nonatomic) HotChatNoticeView *hotChatNoticeViewNew; // @synthesize hotChatNoticeViewNew=_hotChatNoticeViewNew;
- (void)initNotification;
- (id)initWithHotChatModel:(id)arg1;
- (void)insertTopSpaceWithHeight:(double)arg1;
@property(nonatomic) _Bool isCreateRoomSuccess; // @synthesize isCreateRoomSuccess=_isCreateRoomSuccess;
- (_Bool)isHotChat;
- (_Bool)isPTTHotChat;
- (_Bool)isSupportFullScreenLayout;
- (_Bool)isSupportRightDragToGoBack;
@property(nonatomic) _Bool kickActionSheetShowing; // @synthesize kickActionSheetShowing=_kickActionSheetShowing;
- (void)leftButtonClick:(id)arg1;
- (void)loadView;
@property(nonatomic) long long memberListType; // @synthesize memberListType=_memberListType;
- (id)messageModelWithTips:(id)arg1;
@property(retain, nonatomic) QQAIOMsgModel *needKickUserModel; // @synthesize needKickUserModel=_needKickUserModel;
@property(nonatomic) _Bool needShowNotice; // @synthesize needShowNotice=_needShowNotice;
@property(retain, nonatomic) NSTimer *noticeCheckTimer; // @synthesize noticeCheckTimer=_noticeCheckTimer;
- (void)onApplicationBecomeActive:(id)arg1;
- (void)onGetNoticeNotificationForOffice:(id)arg1;
- (void)onHotchatMemberListDidSelect:(id)arg1;
- (void)onMemberSelected:(id)arg1;
- (void)onNewUserJoinedWifiChat:(id)arg1;
- (void)onPushNoticeNotification:(id)arg1;
- (void)onSelfKickedWifiChat:(id)arg1;
- (void)onSendMsgFailForKick:(id)arg1;
- (void)onUserExitedWifiChat:(id)arg1;
- (void)onUserKickedWifiChat:(id)arg1;
- (void)onWidgetHeightChanged:(double)arg1;
@property(retain, nonatomic) NSString *ownerAvatarUrl; // @synthesize ownerAvatarUrl=_ownerAvatarUrl;
@property(retain, nonatomic) NSString *ownerNick; // @synthesize ownerNick=_ownerNick;
- (void)previewSecretPictureViewController:(id)arg1 didPreviewedSecretPictureWithCell:(id)arg2;
- (void)pushHotChatMemViewController:(id)arg1 selectedLocation:(long long)arg2;
- (void)pushHotChatToSettingViewController;
@property(nonatomic) _Bool receivedNoticePush; // @synthesize receivedNoticePush=_receivedNoticePush;
- (void)recieveGroupRobotKeywords:(id)arg1 robotUIN:(unsigned long long)arg2;
@property(nonatomic) _Bool recvSelfKickNotify; // @synthesize recvSelfKickNotify=_recvSelfKickNotify;
- (void)refreshRecentList;
- (void)registerHotChatAIOTimeReporter;
@property(nonatomic) _Bool removeTopMargin; // @synthesize removeTopMargin=_removeTopMargin;
- (void)reportWebShareWithItem:(int)arg1;
- (void)requestGroupNotice;
- (void)resetCustomTitleView;
- (void)resetViewControllerTitle;
@property(retain, nonatomic) QQGroupRobotKeywordManager *robotKeywordManager; // @synthesize robotKeywordManager=_robotKeywordManager;
- (id)saveTips:(id)arg1;
- (void)sendGroupRobotKeyword:(id)arg1 needFlag:(_Bool)arg2;
- (void)sendGroupRobotKeywordToServer:(id)arg1;
@property(retain, nonatomic) QQWebShareActionSheet *shareSheet; // @synthesize shareSheet=_shareSheet;
@property(nonatomic) _Bool shouldHideNoticeWhenCreaterFirstEnter; // @synthesize shouldHideNoticeWhenCreaterFirstEnter=_shouldHideNoticeWhenCreaterFirstEnter;
@property(retain, nonatomic) QQHotChatModel *wifiPOIInfoModel; // @synthesize wifiPOIInfoModel=_wifiPOIInfoModel;
- (void)setupInputbarItems;
- (void)setupRichAIOKeypadEntries;
- (id)shareTitleWithItem:(int)arg1;
- (void)show24HoursMessagesTipIfNeeded;
- (void)showCharmAlertView;
- (void)showCreateHotChatRoomSuccessTip;
- (void)showFastSendImagePopoverIfNeeded;
- (void)showHotChatNoticeView:(id)arg1;
- (void)showHotChatNoticeViewIfNeed:(id)arg1;
- (void)showJoinTips;
- (void)showKeyboard:(id)arg1;
- (void)showKeyboardForVoice:(id)arg1;
- (void)showRobotKeywordPanel;
- (void)showShareActionSheet;
- (void)showTips:(id)arg1 duplicatedEnable:(_Bool)arg2;
- (void)showUserExitedTips:(id)arg1;
- (void)showUserJoinedTips:(id)arg1;
- (void)showUserKickedTips:(id)arg1;
- (void)startSavingAnimation;
- (void)stopSavingAnimation;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeForAt:(id)arg1;
- (void)updateAIONoticeNotification:(id)arg1;
- (void)updateNoticeModelToQQHotChatModel:(id)arg1;
- (void)updateRightItems;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)webShare;
- (void)willChangeInputbarStatus:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

