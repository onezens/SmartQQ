//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSearchBaseViewController.h"

#import "FriendSelectedChildViewDeletage.h"
#import "MulMemSelBusiProcessDelegate.h"
#import "QQBizTaskDelegate.h"
#import "QQConnectPluginCheckDelegate.h"
#import "QQForwardImageEditHandleDelegate.h"
#import "QQFriendSelectedViewControllerDelegate.h"
#import "QQMutipleImageHandlerDelegate.h"
#import "QQSearchResultClickResponding.h"
#import "QQShareResultDialogDelegate.h"
#import "QQStructureMsgUtilityDelegate.h"
#import "QQThirdAppShareCancelDelegate.h"
#import "QQURLRichMsgHelperDelegate.h"
#import "QUIAlertViewDelegate.h"
#import "RichMsgPreviewDialogDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class FAModel, MarketFaceInfo, NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSNumber, NSObject, NSString, NSTimer, QQAIOModel, QQAIOSMMessageModel, QQActivateFriendsNotifyMemorialDayModel, QQAlertView, QQAvatarView, QQConnectPluginInfoQuery, QQForwardImageEditHandle, QQForwardMutipleImageHandler, QQHttpClientSession, QQMessageView, QQPreviewImageRetriever, QQRichMediaPickerController, QQRichMsgBizTask, QQRichMsgPreviewDialog, QQShareResultDialog, QQStructureMsgUtility, QQURLRichMsgHelper, QQWalletPFAFriendsHandler, QUICheckBoxAlertView, UIImage, UIViewController;

@interface QQFriendSelectedViewController : QQSearchBaseViewController <QQURLRichMsgHelperDelegate, QUIAlertViewDelegate, UITableViewDataSource, UIAlertViewDelegate, UITableViewDelegate, QQMutipleImageHandlerDelegate, QQSearchResultClickResponding, QQForwardImageEditHandleDelegate, MulMemSelBusiProcessDelegate, QQConnectPluginCheckDelegate, QQFriendSelectedViewControllerDelegate, RichMsgPreviewDialogDelegate, UITextFieldDelegate, QQShareResultDialogDelegate, FriendSelectedChildViewDeletage, QQBizTaskDelegate, QQThirdAppShareCancelDelegate, QQStructureMsgUtilityDelegate>
{
    NSString *_filePath;
    NSString *_uin;
    NSString *_content;
    NSString *_displayContent;
    NSString *_groupCode;
    QQMessageView *_messageView;
    QQAIOModel *_shareMsgModel;
    id <QQFriendSelectedViewControllerDelegate> _delegate;
    _Bool _isGroup;
    _Bool _isDiscussGroup;
    _Bool _isContact;
    _Bool _isRecommendContactFriend;
    int _msgType;
    int _fileStatus;
    int _accType;
    UIViewController *_superControl;
    int _ctrlType;
    int _forwardBusinessType;
    _Bool _isLoadPic;
    unsigned int _appShareID;
    NSString *_richMsgPreTitle;
    NSString *_richMsgPreDes;
    NSString *_richMsgPreImgPath;
    NSString *_richMsgPreActionUrl;
    NSString *_richMsgPreAppName;
    NSString *_richMsgPreImgUrl;
    NSString *_richMsgPreFlashUrl;
    NSString *_richMsgPreFileType;
    unsigned long long _shareControlFlags;
    NSNumber *_shareServiceID;
    NSNumber *_connAppID;
    NSString *_thirdAppDisplayName;
    QQRichMsgPreviewDialog *_richMsgPreDlg;
    id _leftBtnClickTarget;
    SEL _leftBtnClickSel;
    SEL _leftBtnClickSelForSuccess;
    id _chatViewCtrlLeftBtnClickTarget;
    SEL _chatViewCtrlLeftBtnClickSel;
    NSString *_AddtionalMessage;
    QQShareResultDialog *_ShareResultDialog;
    NSTimer *_RequestTimer;
    QQAlertView *_qqAlertView;
    FAModel *_fileModel;
    NSMutableArray *_fileModelArray;
    int _forwardFileType;
    _Bool _willDownloadingIcon;
    QQStructureMsgUtility *_structureMsgUtility;
    NSDictionary *_shortUrlDictionary;
    NSMutableArray *_shortUrlKeyArr;
    _Bool _isUploadPic;
    _Bool _bookGift;
    NSObject *_bookInfo;
    NSDictionary *_otherParams;
    QQRichMsgBizTask *_shareBizTask;
    _Bool _autoFilter;
    _Bool _autoJudgeCQ;
    _Bool _showComputer;
    _Bool _showQzone;
    _Bool _shareMyFavorites;
    _Bool _sentThirdAppShareMsg;
    long long _discussgroupShareCode;
    NSString *_groupFileID;
    NSData *_compatibilityText;
    _Bool _popBackWhenShareSuccess;
    _Bool _popBackThenShowTips;
    _Bool _isNeedAddtionalMsg;
    _Bool _isNeedGoAIO;
    _Bool _isSendMyself;
    QUICheckBoxAlertView *_shareResultAlertView;
    int _chatType;
    int _multiMsgForwardPicNum;
    _Bool _bQQMasterQCall;
    _Bool _bEntryCreatDis;
    int _retryCount;
    int _filterType;
    int _clusterEnterFilterType;
    QQConnectPluginInfoQuery *_pluginInfoCheck;
    _Bool _bWaitCheckBundleID;
    NSString *_uinSource;
    int _accSourceType;
    NSString *_richMsgPreDest;
    NSString *_navTitle;
    int _headerViewConfigMode;
    NSString *_layoutType;
    QQHttpClientSession *_session;
    NSString *_openID;
    NSString *_shareUin;
    UIImage *_richMsgPreImg;
    MarketFaceInfo *_marketFaceInfo;
    UIImage *_image;
    NSArray *_forwardPicInfoArray;
    NSArray *_forwardMsgInfoArray;
    NSArray *_forwardShortVideoMsgModelArray;
    QQAIOSMMessageModel *_msgModel;
    NSString *_appBundleID;
    _Bool _bShowFavorite;
    NSString *_internalForwardSource;
    QQURLRichMsgHelper *_urlRichMsgHelper;
    NSString *_videoExtractionFlag;
    NSNumber *_longPressItemIndex;
    _Bool _createDiscussForForwarding;
    _Bool _isJSShare;
    int _shareToType;
    NSDate *_startTime;
    NSString *_tailMsg;
    NSString *_sendTitle;
    NSDate *_uploadShareImgStartTime;
    NSDate *_richStartTime;
    _Bool _isForceToAIO;
    _Bool _isLeftTitleRightPicture;
    _Bool _isSendToGoldMsgAIO;
    QQPreviewImageRetriever *_imageRetriever;
    _Bool _isShareFromCreateDiscussGroupReport;
    NSMutableArray *_recentMsgListData;
    Class _originalDelegateClass;
    _Bool bNoOriginForwardMode;
    _Bool _bCtrlTypeInternalForwardFromWeb;
    _Bool _bRichSucc;
    _Bool _needRoundAvatar;
    _Bool _isStoryShare;
    _Bool _isRecommendCampusCircleFriend;
    _Bool _isSendToSmartDeviceVc;
    int _serviceType;
    int _storyUserCardUserType;
    int _forwordType;
    NSString *_serviceID;
    NSString *_strUrlUseToRich;
    long long _newSessionPersonCountMax;
    NSString *_storyUserCardHeadUrl;
    NSString *_storyUserCardNick;
    unsigned long long _storyUserCardUid;
    NSString *_storyUserCardUnionId;
    NSDictionary *_shortVideoInfo;
    QQRichMediaPickerController *_fastSendVideoPicker;
    QQActivateFriendsNotifyMemorialDayModel *_memorialModel;
    QQForwardMutipleImageHandler *_forwardMutipleImageHandler;
    QQForwardImageEditHandle *_forwardImageEditHandle;
    QQAvatarView *_avaterView;
    QQWalletPFAFriendsHandler *_walletPFAFriendsHandler;
}

+ (void)forwardStructuredMessageThenReturnWithParams:(id)arg1 content:(id)arg2 parentVC:(id)arg3;
+ (void)forwardStructuredMessageThenReturnWithThirdAppDisplayName:(id)arg1 richMsgPreTitle:(id)arg2 richMsgPreDes:(id)arg3 richMsgPreImgPath:(id)arg4 content:(id)arg5 compatibilityText:(id)arg6 msgModel:(id)arg7 parentVC:(id)arg8;
+ (void)forwardStructuredMessageWithParams:(id)arg1 content:(id)arg2;
+ (void)forwardStructuredMessageWithRichMsgTask:(id)arg1;
+ (void)forwardStructuredMessageWithThirdAppDisplayName:(id)arg1 richMsgPreTitle:(id)arg2 richMsgPreDes:(id)arg3 richMsgPreImgPath:(id)arg4 content:(id)arg5 compatibilityText:(id)arg6 msgModel:(id)arg7;
+ (void)sendBookGiftAppDisplayName:(id)arg1 richMsgPreTitle:(id)arg2 richMsgPreDes:(id)arg3 richMsgPreImg:(id)arg4 richMsgPreImgPath:(id)arg5 content:(id)arg6 bookInfo:(id)arg7;
- (void)HandleGetPluginInfoResp:(id)arg1;
- (void)QQThirdAppShareCancel;
- (void)SaveAddtionalMsg;
- (void)ShareToFriend:(id)arg1 msg:(id)arg2;
- (void)_FAToastHandle;
- (_Bool)_QFriSelCheckRecentMsgListIsValid;
- (void)_QFriSelFilterRecentMsgList;
- (void)_QFriSelMsgListReloadNotif:(id)arg1;
- (void)_QFriSelMsgListReloadNotifForCreateDis:(id)arg1;
- (void)_QFriSelRefreshControlRegisterNotif:(id)arg1;
- (void)_QFriSelRefreshControlUnRegisterNotif;
- (void)_QFriSelReloadFriendSelectorUI;
- (void)_clearNavigationOpStack;
- (id)_getAdjustThirdAppDisplayName;
- (_Bool)_isFilePreviewForward;
- (void)_mainThreadReloadRecentMsgListForCreatDis;
- (void)_notifyHandleToastTips:(id)arg1;
- (void)actionCreateDisGroupSuccForShareHongbao:(id)arg1;
- (void)actionCreateDisGroupSuccRefreshNotif:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) QQAvatarView *avaterView; // @synthesize avaterView=_avaterView;
@property(nonatomic) _Bool bCtrlTypeInternalForwardFromWeb; // @synthesize bCtrlTypeInternalForwardFromWeb=_bCtrlTypeInternalForwardFromWeb;
@property(nonatomic) _Bool bNoOriginForwardMode; // @synthesize bNoOriginForwardMode;
@property(nonatomic) _Bool bRichSucc; // @synthesize bRichSucc=_bRichSucc;
- (void)buttonClickOne:(id)arg1;
- (void)buttonClickSuccess:(id)arg1;
- (void)buttonClickTwo:(id)arg1;
- (void)cancelAllRequests;
- (void)cancelButtonClick;
- (void)cancelRedirect;
@property(nonatomic) SEL chatViewCtrlLeftBtnClickSel; // @synthesize chatViewCtrlLeftBtnClickSel=_chatViewCtrlLeftBtnClickSel;
- (void)checkAndshareMsgToQQFriend:(id)arg1 msg:(id)arg2;
- (void)checkIfForeceGotoAIO;
- (id)checkString:(id)arg1 WithLength:(unsigned long long)arg2;
- (id)checkTitleAndSummary;
- (void)childViewCellDidSelected:(id)arg1 type:(int)arg2;
- (void)collectQQAIORichMixModel;
- (void)compareOpenID:(id)arg1;
@property(readonly, nonatomic) NSNumber *connAppID; // @dynamic connAppID;
- (id)creatXMLMessageForDiscussGroupLinkShared;
- (id)creatXMLMessageForGrouLinkShared;
- (id)creatXMLMessageForQQReadInJoy;
- (id)creatXMLMessageForQQStoryUserCardShared;
- (id)creatXMLMessageString;
- (id)createActiveFriendSharedXMLMessageString;
- (void)createDisGroupFromFriendSelector;
@property(nonatomic) _Bool createDiscussForForwarding; // @synthesize createDiscussForForwarding=_createDiscussForForwarding;
- (id)createFakePreImageUrl;
- (id)createMessagePicInfoByImage:(id)arg1;
- (id)createMessagePicInfoByImagePath:(id)arg1;
- (id)createPictureXMLMessageString:(id)arg1;
- (id)createSpriteGameXMLMessageString;
- (id)createThirdAppShareModel;
- (void)dealloc;
- (void)dealloc;
- (id)defaultShareContext;
- (void)delayNotify:(id)arg1;
- (void)delaySpriteNotify:(id)arg1;
@property(nonatomic) id <QQFriendSelectedViewControllerDelegate> delegate; // @dynamic delegate;
- (void)disAbleClusterEnterItem:(int)arg1;
- (void)disAbleItem:(int)arg1;
@property(nonatomic) long long discussgroupShareCode; // @synthesize discussgroupShareCode=_discussgroupShareCode;
- (void)enAbleClusterEnterItem:(int)arg1;
- (void)enAbleItem:(int)arg1;
- (id)engine;
- (void)enterFavorites:(_Bool)arg1;
- (void)fastSendShortVideo;
@property(nonatomic) QQRichMediaPickerController *fastSendVideoPicker; // @synthesize fastSendVideoPicker=_fastSendVideoPicker;
- (void)filerMsgData:(id)arg1;
@property(retain, nonatomic) QQForwardImageEditHandle *forwardImageEditHandle; // @synthesize forwardImageEditHandle=_forwardImageEditHandle;
@property(retain, nonatomic) QQForwardMutipleImageHandler *forwardMutipleImageHandler; // @synthesize forwardMutipleImageHandler=_forwardMutipleImageHandler;
@property(nonatomic) int forwordType; // @synthesize forwordType=_forwordType;
- (id)friSelGetChatViewController:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)friendListSelected:(id)arg1 head:(int)arg2 type:(int)arg3;
- (void)friendListSelected:(id)arg1 head:(int)arg2 type:(int)arg3 fromSearch:(_Bool)arg4;
- (id)getAlertView;
- (id)getChatViewController:(id)arg1 accType:(int)arg2;
- (int)getClusterEnterFilterValue;
- (void)getHeadViewImage:(id)arg1;
- (struct CGRect)getImageEditorFrame;
- (id)getNavigationController;
- (void)getOpenIDFinished:(id)arg1;
- (void)getOpenIDTimeOut;
- (id)getParentView;
- (id)getPreViewImage;
- (int)getReportSelectType:(id)arg1;
- (id)getResourceForFile:(id)arg1;
- (id)getSendImage;
- (void)getShortUrl;
- (id)getSmartDeviceList;
- (id)getSourceNameForAppShare;
- (void)getTitleAndSummary:(id)arg1;
- (void)getURLandSetXMLmsg:(id)arg1;
- (void)goToAIOChatViewController;
- (void)goToContactList:(id)arg1;
- (void)goToFriendList;
- (void)goToGroupAndDiscussList;
- (void)handleQQPluginInfoUpdatedNotification:(id)arg1;
- (void)handleWebForPttOpenAIO:(int)arg1 withOpenID:(id)arg2;
- (void)headerViewInitCompletedProcess;
- (void)hongbaoConfirmBoxCreate;
- (void)hongbaoHandleException:(id)arg1 witherrcode:(long long)arg2;
- (_Bool)hongbaoNetWorkReachabilityCheck;
- (void)hongbaoPromptCancel:(id)arg1;
- (void)hongbaoPromptRetry:(id)arg1;
- (void)hongbaoRecvTypeAssign:(id)arg1 sendNick:(id)arg2 isGroup:(_Bool)arg3 isDisGroup:(_Bool)arg4;
- (void)hongbaoRefreshRecentList;
- (void)hongbaoRetryLogic:(id)arg1;
- (void)hongbaoTmpRecvTypeAssign:(id)arg1 sendNick:(id)arg2 isGroupTmp:(_Bool)arg3 groupUin:(id)arg4 isDisGroupTmp:(_Bool)arg5 disGroupUin:(id)arg6;
- (void)imageDownloadError:(id)arg1;
- (void)imageRetrieved:(id)arg1;
- (id)init;
- (void)initHeadUI;
@property(nonatomic) _Bool isForceToAIO; // @synthesize isForceToAIO=_isForceToAIO;
@property(nonatomic) _Bool isJSShare; // @synthesize isJSShare=_isJSShare;
@property(nonatomic) _Bool isLeftTitleRightPicture; // @synthesize isLeftTitleRightPicture=_isLeftTitleRightPicture;
- (_Bool)isNeedShowNearbyMsgBox:(id)arg1;
@property(nonatomic) _Bool isRecommendCampusCircleFriend; // @synthesize isRecommendCampusCircleFriend=_isRecommendCampusCircleFriend;
@property(nonatomic) _Bool isSendToSmartDeviceVc; // @synthesize isSendToSmartDeviceVc=_isSendToSmartDeviceVc;
- (_Bool)isSingleOrientationFriend:(id)arg1;
- (_Bool)isSmartDeviceMsg:(id)arg1;
@property(nonatomic) _Bool isStoryShare; // @synthesize isStoryShare=_isStoryShare;
- (_Bool)isSupportFullScreenLayout;
- (_Bool)isSupportRightDragToGoBack;
- (_Bool)isTmpChat:(id)arg1;
@property(nonatomic) SEL leftBtnClickSel; // @synthesize leftBtnClickSel=_leftBtnClickSel;
@property(nonatomic) SEL leftBtnClickSelForSuccess; // @synthesize leftBtnClickSelForSuccess=_leftBtnClickSelForSuccess;
- (void)leftButtonClick:(id)arg1;
- (void)loadView;
- (void)makeUpSendBookXMLToUin:(id)arg1 receiverName:(id)arg2;
@property(retain, nonatomic) QQActivateFriendsNotifyMemorialDayModel *memorialModel; // @synthesize memorialModel=_memorialModel;
- (void)mutipleImageHandler:(id)arg1 didPreparedWithError:(id)arg2;
- (id)navigationWithMobilePhone:(id)arg1;
- (_Bool)needAsyncShare;
@property(nonatomic) _Bool needRoundAvatar; // @synthesize needRoundAvatar=_needRoundAvatar;
@property(nonatomic) long long newSessionPersonCountMax; // @synthesize newSessionPersonCountMax=_newSessionPersonCountMax;
- (void)newShowThirdAppForwardNotify:(id)arg1 withType:(int)arg2 withNick:(id)arg3;
- (void)onBizTask:(id)arg1 imageCompleted:(id)arg2;
- (void)onBizTaskCompleted:(id)arg1;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)onImage:(id)arg1 downloadStatus:(int)arg2 type:(int)arg3;
- (void)onPreViewImageClick;
- (void)onQQConnectCheckPluginInfoComplete;
- (void)onResponseRichMsgData:(id)arg1 errorCode:(int)arg2;
- (void)onResultCellClick:(id)arg1;
- (void)onSendEditedImage:(id)arg1 withPicInfo:(id)arg2;
- (void)openAIOType:(int)arg1 withOpenID:(id)arg2;
- (id)p_QFriGetNick:(id)arg1 isGroup:(_Bool)arg2 isDiscussGroup:(_Bool)arg3 isContact:(_Bool)arg4;
- (void)p_QFriPackageBusiHandleForQCall:(id)arg1;
- (void)p_QFriSelectItem:(id)arg1 nick:(id)arg2 accType:(int)arg3 friType:(int)arg4 isGroup:(_Bool)arg5 isDiscussGroup:(_Bool)arg6 isContact:(_Bool)arg7;
- (void)pluginUpdated:(id)arg1;
- (void)popAlertViewTip;
- (void)popMyselfToWindowTop;
- (void)popMyselfToWindowTopWithAnimated:(_Bool)arg1;
- (void)popSelf;
- (void)prepareForwardImageEdit:(id)arg1;
- (void)prepareForwardImageEditWithPath:(id)arg1;
- (void)prepareForwardImages:(id)arg1;
- (void)qqHttpSessionDidLoad:(id)arg1:(id)arg2;
- (void)qqHttpSessionError:(id)arg1 error:(id)arg2;
- (void)qqReadInJoyArticeShareReport:(id)arg1 opType:(id)arg2;
- (void)reSetLeftButtonTitle;
- (void)readInJoyArticleShareSourceTransform;
- (void)recentListSelected:(id)arg1 accType:(int)arg2 groupCode:(id)arg3 head:(int)arg4 isShareQZone:(_Bool)arg5;
- (void)recentListSelected:(id)arg1 isGroup:(_Bool)arg2 isDiscussGroup:(_Bool)arg3 isContact:(_Bool)arg4 head:(int)arg5 isShareQZone:(_Bool)arg6;
- (void)refreshRichMsgPreImg:(id)arg1;
- (void)report3rdAppIcon;
- (void)reportHongbaoFailed;
- (void)reportRichResult:(id)arg1 errorCode:(int)arg2;
- (void)reportShareLack;
- (void)reportSpriteGame;
- (void)reportStartRich;
- (void)reportStartRich;
- (id)returnChatViewController:(id)arg1 callback:(CDUnknownBlockType)arg2;
@property(retain, nonatomic, setter=setRichMsgPreActionUrl:) NSString *richMsgPreActionUrl; // @synthesize richMsgPreActionUrl=_richMsgPreActionUrl;
@property(retain, nonatomic) QQRichMsgPreviewDialog *richMsgPreDlg; // @synthesize richMsgPreDlg=_richMsgPreDlg;
- (void)saveRichPreImageUrl:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)selectActiveFriendSharedView;
- (id)sendAdditonTextMsg;
- (void)sendArkApp;
- (void)sendButtonClick:(id)arg1 msg:(id)arg2;
- (void)sendFile;
- (void)sendFileToFileAssistant:(id)arg1;
- (void)sendFileWithChatViewController:(id)arg1;
- (void)sendFlashChat;
- (void)sendHighBoom;
- (void)sendHongbao;
- (void)sendImage;
- (void)sendMarketFace;
- (void)sendMsgDirectlyWithFriendSelected:(id)arg1 type:(int)arg2;
- (void)sendMultiMsgButtonClick:(id)arg1;
- (void)sendShortVideo;
- (void)sendStoryShareVideo;
- (void)sendText;
- (void)sendThirdAppShareMsg:(id)arg1 msg:(id)arg2;
- (void)sendThirdAppShareMsgToFileAssistant:(id)arg1;
@property(retain, nonatomic) NSString *sendTitle; // @synthesize sendTitle=_sendTitle;
- (void)sendToTheUin:(id)arg1;
@property(retain, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
- (void)setActiveFriendMemorialModel:(id)arg1;
- (void)setDiscussJoinLink:(id)arg1;
- (void)setEngine:(id)arg1;
- (void)setGroupJoinLink:(id)arg1;
- (double)setHeightForRow:(id)arg1;
- (void)setLinkAndShow:(id)arg1;
@property(retain, nonatomic) QQAIOModel *shareMsgModel; // @synthesize shareMsgModel=_shareMsgModel;
@property(retain, nonatomic) NSDictionary *shortVideoInfo; // @synthesize shortVideoInfo=_shortVideoInfo;
@property(copy, nonatomic) NSString *storyUserCardHeadUrl; // @synthesize storyUserCardHeadUrl=_storyUserCardHeadUrl;
@property(copy, nonatomic) NSString *storyUserCardNick; // @synthesize storyUserCardNick=_storyUserCardNick;
@property(nonatomic) unsigned long long storyUserCardUid; // @synthesize storyUserCardUid=_storyUserCardUid;
@property(copy, nonatomic) NSString *storyUserCardUnionId; // @synthesize storyUserCardUnionId=_storyUserCardUnionId;
@property(nonatomic) int storyUserCardUserType; // @synthesize storyUserCardUserType=_storyUserCardUserType;
@property(retain, nonatomic) NSString *strUrlUseToRich; // @synthesize strUrlUseToRich=_strUrlUseToRich;
@property(retain, nonatomic) NSString *tailMsg; // @synthesize tailMsg=_tailMsg;
@property(retain, nonatomic) QQWalletPFAFriendsHandler *walletPFAFriendsHandler; // @synthesize walletPFAFriendsHandler=_walletPFAFriendsHandler;
- (void)shareMsgToQQFriend:(id)arg1 msg:(id)arg2;
@property(readonly, nonatomic) NSNumber *shareServiceID; // @dynamic shareServiceID;
- (void)shareToMyFavorites:(id)arg1 msg:(id)arg2;
- (void)showConfigCompanyHongbaoErrorTips;
- (void)showFavFileNotify;
- (void)showHaveSendState;
- (void)showInternalForwardNotif:(id)arg1 withNick:(id)arg2;
- (void)showMyComputer:(_Bool)arg1 showQzone:(_Bool)arg2;
- (void)showPFASuggestionCommentListDlg:(id)arg1;
- (void)showShareNamePlate;
- (void)smartDeviceProperUpdate;
- (void)specialDataProcessing;
- (void)startCheckPluginInfoValid;
- (void)startGetShortUrl;
- (void)startToUploadImage;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)tellDelegateButtonClicked:(long long)arg1;
- (_Bool)tellDelegateFriendSelected:(id)arg1 type:(int)arg2;
- (void)thirdAppForwardSpecialHandle;
- (void)updateLocalUITabInfo:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)webFilterRecentContact:(id)arg1;
- (void)willDismissFromScreen;

// Remaining properties
@property(nonatomic) int accSourceType; // @dynamic accSourceType;
@property(nonatomic) int accType; // @dynamic accType;
@property(retain, nonatomic) NSString *appBundleID; // @dynamic appBundleID;
@property(nonatomic) unsigned int appShareID; // @dynamic appShareID;
@property(nonatomic) _Bool autoFilter; // @dynamic autoFilter;
@property(nonatomic) _Bool bEntryCreatDis; // @dynamic bEntryCreatDis;
@property(nonatomic) _Bool bQQMasterQCall; // @dynamic bQQMasterQCall;
@property(nonatomic) _Bool bShowFavorite; // @dynamic bShowFavorite;
@property(nonatomic) _Bool bookGift; // @dynamic bookGift;
@property(retain, nonatomic) NSObject *bookInfo; // @dynamic bookInfo;
@property(nonatomic) int chatType; // @dynamic chatType;
@property(nonatomic) id chatViewCtrlLeftBtnClickTarget; // @dynamic chatViewCtrlLeftBtnClickTarget;
@property(retain, nonatomic) NSData *compatibilityText; // @dynamic compatibilityText;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) int ctrlType; // @dynamic ctrlType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *displayContent; // @dynamic displayContent;
@property(retain, nonatomic) FAModel *fileModel; // @dynamic fileModel;
@property(retain, nonatomic) NSMutableArray *fileModelArray; // @dynamic fileModelArray;
@property(retain, nonatomic) NSString *filePath; // @dynamic filePath;
@property(nonatomic) int fileStatus; // @dynamic fileStatus;
@property(nonatomic) int forwardBusinessType; // @dynamic forwardBusinessType;
@property(nonatomic) int forwardFileType; // @dynamic forwardFileType;
@property(retain, nonatomic) NSArray *forwardMsgInfoArray; // @dynamic forwardMsgInfoArray;
@property(retain, nonatomic) NSArray *forwardPicInfoArray; // @dynamic forwardPicInfoArray;
@property(retain, nonatomic) NSArray *forwardShortVideoMsgModelArray; // @dynamic forwardShortVideoMsgModelArray;
@property(retain, nonatomic) NSString *groupCode; // @dynamic groupCode;
@property(retain, nonatomic) NSString *groupFileID; // @dynamic groupFileID;
@property(readonly) unsigned long long hash;
@property(nonatomic) int headerViewConfigMode; // @dynamic headerViewConfigMode;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
@property(retain, nonatomic) NSString *internalForwardSource; // @dynamic internalForwardSource;
@property(nonatomic) _Bool isNeedAddtionalMsg; // @dynamic isNeedAddtionalMsg;
@property(nonatomic) _Bool isNeedGoAIO; // @dynamic isNeedGoAIO;
@property(retain, nonatomic) NSString *layoutType; // @dynamic layoutType;
@property(nonatomic) id leftBtnClickTarget; // @dynamic leftBtnClickTarget;
@property(retain, nonatomic) NSNumber *longPressItemIndex; // @dynamic longPressItemIndex;
@property(retain, nonatomic) MarketFaceInfo *marketFaceInfo; // @dynamic marketFaceInfo;
@property(retain, nonatomic) QQAIOSMMessageModel *msgModel; // @dynamic msgModel;
@property(nonatomic) int msgType; // @dynamic msgType;
@property(nonatomic) unsigned long long multiMsgForwardPicNum; // @dynamic multiMsgForwardPicNum;
@property(retain, nonatomic) NSString *navTitle; // @dynamic navTitle;
@property(retain, nonatomic) NSString *openID; // @dynamic openID;
@property(retain, nonatomic) NSDictionary *otherParams; // @dynamic otherParams;
@property(nonatomic) _Bool popBackThenShowTips; // @dynamic popBackThenShowTips;
@property(nonatomic) _Bool popBackWhenShareSuccess; // @dynamic popBackWhenShareSuccess;
@property(retain, nonatomic) NSString *richMsgPreAppName; // @dynamic richMsgPreAppName;
@property(retain, nonatomic) NSString *richMsgPreDes; // @dynamic richMsgPreDes;
@property(retain, nonatomic) NSString *richMsgPreDest; // @dynamic richMsgPreDest;
@property(retain, nonatomic) NSString *richMsgPreFileType; // @dynamic richMsgPreFileType;
@property(retain, nonatomic) NSString *richMsgPreFlashUrl; // @dynamic richMsgPreFlashUrl;
@property(retain, nonatomic) UIImage *richMsgPreImg; // @dynamic richMsgPreImg;
@property(retain, nonatomic) NSString *richMsgPreImgPath; // @dynamic richMsgPreImgPath;
@property(retain, nonatomic) NSString *richMsgPreImgUrl; // @dynamic richMsgPreImgUrl;
@property(retain, nonatomic) NSString *richMsgPreTitle; // @dynamic richMsgPreTitle;
@property(retain, nonatomic) QQHttpClientSession *session; // @dynamic session;
@property(retain, nonatomic) QQRichMsgBizTask *shareBizTask; // @dynamic shareBizTask;
@property(nonatomic) unsigned long long shareControlFlags; // @dynamic shareControlFlags;
@property(retain, nonatomic) NSString *shareUin; // @dynamic shareUin;
@property(nonatomic) UIViewController *superControl; // @dynamic superControl;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *thirdAppDisplayName; // @dynamic thirdAppDisplayName;
@property(retain, nonatomic) NSString *uin; // @dynamic uin;
@property(retain, nonatomic) NSString *uinSource; // @dynamic uinSource;
@property(retain, nonatomic) QQURLRichMsgHelper *urlRichMsgHelper; // @dynamic urlRichMsgHelper;
@property(retain, nonatomic) NSString *videoExtractionFlag; // @dynamic videoExtractionFlag;

@end

