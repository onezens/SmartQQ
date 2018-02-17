//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQCreateGroupAuthorityDelegate.h"
#import "QQFriendSelectedViewControllerDelegate.h"
#import "QQRichMediaPickerControllerDelegate.h"
#import "QQShareResultAlertViewDeleagte.h"
#import "QRCodeDecodeBizDelegate.h"
#import "SelectLocationDelegate.h"
#import "SimpleAlertViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UniFileTransEngineObserver.h"

@class AddFriendSendMessageViewController, NSDictionary, NSMutableDictionary, NSNotification, NSString, NSTimer, QQAlertView, QQBaseChatViewController, QQFastSendRichMediaPickerController, QQFriendSelectedViewController, QQGroupJoinHelper, QQRequestUinFromOpenID, QQShareMsgInfo, QQShareResultAlertView, QRCodeDecodeBiz, SimpleAlertView, UIImage;

@interface QQForwardEngine : NSObject <QRCodeDecodeBizDelegate, SelectLocationDelegate, UIActionSheetDelegate, UniFileTransEngineObserver, UIImagePickerControllerDelegate, UINavigationControllerDelegate, QQFriendSelectedViewControllerDelegate, SimpleAlertViewDelegate, QQCreateGroupAuthorityDelegate, QQShareResultAlertViewDeleagte, QQRichMediaPickerControllerDelegate>
{
    NSDictionary *_selLocParamDic;
    NSDictionary *_uploadPhotoParamDic;
    UIImage *_willChooseImage;
    NSDictionary *_sendMoodParamDic;
    NSDictionary *_shareToFriParamDic;
    NSDictionary *_gameBindingGroupParamDic;
    SimpleAlertView *_alertView;
    NSNotification *_cacheNotification;
    _Bool _isOpenGroupMsgState;
    _Bool _isOpenPersonMsgState;
    QQAlertView *_qqAlertView;
    NSTimer *_RequestTimer;
    unsigned long long _appShareID;
    NSString *_toOpenID;
    AddFriendSendMessageViewController *_addFriend;
    NSDictionary *_thirdAppParamDic;
    NSTimer *_thirdAppRequestTimer;
    QQBaseChatViewController *_sharingTrigger;
    QRCodeDecodeBiz *_decodeBiz;
    _Bool _needHandleDecodeEvent;
    NSTimer *_decodeEventTimer;
    QQGroupJoinHelper *_groupJoinHelper;
    int _xo;
    NSDictionary *_pslCardParams;
    double _lastClickTime;
    _Bool _autoRefreshForStoryIndex;
    NSMutableDictionary *_wpaParamDic;
    QQRequestUinFromOpenID *requestUinFromOpenid;
    NSDictionary *_groupTribeParams;
    QQShareResultAlertView *_shareResultAlertView;
    QQFastSendRichMediaPickerController *_fastSendRichMediapickerController;
    NSNotification *_thirdAppToQzoneNotify;
    QQShareMsgInfo *_thirdAppToQzoneMsgInfo;
    QQFriendSelectedViewController *_qqFriSelVc;
    NSDictionary *_paramsForStoryIndex;
    CDUnknownBlockType _blockForStoryIndex;
    NSDictionary *_paramsForStory;
    SEL _actionForStory;
}

+ (id)GetInstance;
+ (void)QQOpenApiSendSimpleResult:(id)arg1 callbackName:(id)arg2;
- (void)ActioinOpenGroupAioOrProfile:(id)arg1;
- (void)ActioinOpenGroupProfile:(id)arg1;
- (void)ActionAddDiscussGroup:(id)arg1;
- (void)ActionAddOpenIdFriend:(id)arg1;
- (void)ActionAlbum;
- (void)ActionApolloCMShow:(id)arg1;
- (void)ActionAvatarUpdate:(id)arg1;
- (void)ActionCMShowGameInvite:(id)arg1;
- (void)ActionCamera;
- (void)ActionCameraCallback;
- (void)ActionConsortiumAVChat:(id)arg1 version:(int)arg2;
- (void)ActionCreateGroup:(id)arg1;
- (void)ActionDecodeSig:(id)arg1;
- (void)ActionF2FFileWebEvent:(id)arg1;
- (void)ActionForwardFavorite:(id)arg1;
- (void)ActionForwardMsgList:(id)arg1;
- (void)ActionForwardPublicAccountFollowed:(id)arg1;
- (void)ActionForwardToTabView:(id)arg1;
- (void)ActionForwardUrl:(id)arg1;
- (void)ActionGameconsortiumBindingGroup:(id)arg1;
- (void)ActionGeneralSocial:(id)arg1;
- (void)ActionGotoArScan:(id)arg1;
- (void)ActionGotoQWerewolf:(id)arg1;
- (void)ActionGotoQWerewolfGameRoom:(id)arg1;
- (void)ActionGroupSpecialTitle:(id)arg1;
- (void)ActionGroupVideoAudioChat:(id)arg1;
- (void)ActionHandlerOpenQzoneSchema:(id)arg1;
- (void)ActionImChat:(id)arg1;
- (void)ActionImage;
- (void)ActionInviteJoinGroup:(id)arg1;
- (void)ActionIvrVoipVideoAudioChat:(id)arg1;
- (void)ActionJoinGroup:(id)arg1;
- (void)ActionJoinGroupImmediately:(id)arg1;
- (void)ActionJsbridgeInvoke:(id)arg1;
- (void)ActionJumpToTribeNative:(id)arg1;
- (void)ActionJumpToTribeWeb:(id)arg1;
- (void)ActionLoginSuccessNotify;
- (void)ActionOpenActiveFeed:(id)arg1;
- (void)ActionOpenApolloShop:(id)arg1;
- (void)ActionOpenBubbleShop:(id)arg1;
- (void)ActionOpenCaCa:(id)arg1;
- (void)ActionOpenComicCenter:(id)arg1;
- (void)ActionOpenComicCenter:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ActionOpenConferenceTicket:(id)arg1;
- (void)ActionOpenContact:(id)arg1;
- (void)ActionOpenContactAdd:(id)arg1;
- (void)ActionOpenContactMightKnow:(id)arg1;
- (void)ActionOpenContactRecommend:(id)arg1;
- (void)ActionOpenDiscussToGroup:(id)arg1;
- (void)ActionOpenEmojiShop:(id)arg1;
- (void)ActionOpenFTSSearchDynamicSearch:(id)arg1;
- (void)ActionOpenFTSSearchTabSearch:(id)arg1;
- (void)ActionOpenGroupAlbum:(id)arg1;
- (void)ActionOpenGroupAndActivities:(id)arg1;
- (void)ActionOpenGroupHomeworkIdentityCard:(id)arg1;
- (void)ActionOpenHealthCenter:(id)arg1;
- (void)ActionOpenHomepage:(id)arg1;
- (void)ActionOpenHotChatGroupList:(id)arg1;
- (void)ActionOpenLebaSettingViewController:(id)arg1;
- (void)ActionOpenNowRoom:(id)arg1;
- (void)ActionOpenPassiveFeed:(id)arg1;
- (void)ActionOpenProfileAvatarEdit:(id)arg1;
- (void)ActionOpenQQSecuriteViewAndPrivateController:(id)arg1;
- (void)ActionOpenQRCodeScanner:(id)arg1;
- (void)ActionOpenQStory:(id)arg1 autoRefresh:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)ActionOpenQStoryContentFromThirdAppWithDic:(id)arg1;
- (void)ActionOpenQStoryDiscovery:(id)arg1;
- (void)ActionOpenQStoryOpenContent:(id)arg1;
- (void)ActionOpenQStoryOpenContentInternal:(id)arg1;
- (void)ActionOpenQStoryOpenInfoCard:(id)arg1;
- (void)ActionOpenQStoryOpenInfoCardInternal:(id)arg1;
- (void)ActionOpenQStoryOpenPublish:(id)arg1;
- (void)ActionOpenQStoryOpenTopic:(id)arg1;
- (void)ActionOpenQStoryOpenTopicInternal:(id)arg1;
- (void)ActionOpenQStoryShareGroupInfoCard:(id)arg1;
- (void)ActionOpenQStoryShareGroupInfoCardInternal:(id)arg1;
- (void)ActionOpenQStoryVideo:(id)arg1;
- (void)ActionOpenQStoryVideoNew:(id)arg1;
- (void)ActionOpenQStoryVideoNewInternal:(id)arg1;
- (void)ActionOpenQzoneGroupAlbum:(id)arg1;
- (void)ActionOpenReadInJoy:(id)arg1;
- (void)ActionOpenReadInJoyMultivideo:(id)arg1;
- (void)ActionOpenReadInJoyReportT:(id)arg1;
- (void)ActionOpenReadInJoyReportrealtime:(id)arg1;
- (void)ActionOpenReadingCenter:(id)arg1;
- (void)ActionOpenSetting:(id)arg1;
- (void)ActionOpenThemeShop:(id)arg1;
- (void)ActionOpenVideoInGroupAIO:(id)arg1;
- (void)ActionOpenVirtualCable:(id)arg1;
- (void)ActionOpenWallet:(id)arg1;
- (void)ActionPersonalityDecoration:(id)arg1;
- (void)ActionPlayMp4:(id)arg1;
- (void)ActionQDPublicAccountWPA:(id)arg1;
- (void)ActionQcallTipsBannerTapped:(id)arg1;
- (void)ActionRandomAVChat:(id)arg1;
- (void)ActionReadInJoyOpenAlbum:(id)arg1;
- (void)ActionRedEnvelopeEnter:(id)arg1;
- (void)ActionRunLuaPlugin:(id)arg1;
- (void)ActionSelLocation:(id)arg1;
- (void)ActionShareCompanyHongbao:(id)arg1;
- (void)ActionShareGroup:(id)arg1;
- (void)ActionShareHongbao:(id)arg1;
- (void)ActionShareToFriNew:(id)arg1;
- (void)ActionShareToQZoneMultiPhotos:(id)arg1;
- (void)ActionShowCoupon:(id)arg1;
- (void)ActionShowGroupsNearby:(id)arg1;
- (void)ActionShowGroupsNearbyAndActivity:(id)arg1;
- (void)ActionShowLocation:(id)arg1;
- (void)ActionShowLocationRoam:(id)arg1;
- (void)ActionShowNearByFri:(id)arg1;
- (void)ActionShowPslCard:(id)arg1;
- (void)ActionShowSpecialGroupCard:(id)arg1;
- (void)ActionStartWalletPay:(id)arg1;
- (void)ActionUploadPhoto:(id)arg1;
- (void)ActionUrlParseSucc:(id)arg1;
- (void)ActionVideoAudioChat:(id)arg1;
- (void)ActionViewPhoto:(id)arg1;
- (void)ActionWriteMood:(id)arg1;
- (void)AsyncOpenContactList;
- (void)AsyncOpenDiscussGroupList;
- (void)AsyncOpenFriendList;
- (void)AsyncOpenGroupList;
- (void)CrmIvrActionLoginSuccessNotify;
- (id)GetPreviewImageToSend;
- (void)NotifySelectLocation:(struct CLLocationCoordinate2D)arg1 address:(id)arg2;
- (void)OpenFriendSelectedViewControllerForQCall;
- (void)OpenFriendSelectedViewControllerForShare:(id)arg1 shareInfo:(id)arg2;
- (void)OpenGroupTribeTopicViewControllerForShare:(id)arg1 shareInfo:(id)arg2;
- (void)OpenQZoneViewControllerForShare:(id)arg1 shareInfo:(id)arg2 fromQQ:(_Bool)arg3;
- (void)QQShareResultAlertView:(id)arg1 clikedButtionAtIndex:(unsigned long long)arg2;
- (void)ShowChatWindow:(id)arg1;
- (void)_failToSendTip;
@property(nonatomic) SEL actionForStory; // @synthesize actionForStory=_actionForStory;
- (void)actionMassblessMainpage:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) unsigned long long appShareID; // @synthesize appShareID=_appShareID;
- (void)asyncProcessActionChatWpa;
@property(nonatomic) _Bool autoRefreshForStoryIndex; // @synthesize autoRefreshForStoryIndex=_autoRefreshForStoryIndex;
@property(copy, nonatomic) CDUnknownBlockType blockForStoryIndex; // @synthesize blockForStoryIndex=_blockForStoryIndex;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (void)c2cUpload:(id)arg1 message:(id)arg2;
- (void)cancelGroupTribeTopicViewController;
- (void)chatViewCtrlLeftBtnFun:(id)arg1;
- (_Bool)checkCurrIsQQLoginVC:(SEL)arg1 userInfo:(id)arg2;
- (void)clearDecodeBiz;
- (void)commonFileUploadFinished:(id)arg1 sessionID:(int)arg2 resultCode:(int)arg3 transInfo:(id)arg4;
- (void)completionGroupTribeTopicViewController:(long long)arg1 info:(id)arg2;
- (void)createAddFriAction:(_Bool)arg1;
- (void)createFace2FaceAction:(_Bool)arg1;
- (void)createQRAction:(_Bool)arg1;
- (id)createShareArkMsg:(id)arg1 accType:(int)arg2 groupCode:(id)arg3 witharkMsg:(id)arg4 appShareID:(unsigned int)arg5;
- (id)createShareFlashChatMsg:(id)arg1 accType:(int)arg2 groupCode:(id)arg3 withMsgModel:(id)arg4 appShareID:(unsigned int)arg5;
- (void)dealloc;
- (id)decode64DataString:(id)arg1;
- (void)decodeEventTimeout;
- (void)delaySendSecondMsg:(id)arg1;
- (void)dialogCancelBtnClick;
- (void)dialogSendBtnClick:(int)arg1 exInfo:(id)arg2;
- (void)didAddOpenIdFriend:(id)arg1;
- (void)didGameconsortiumBindingGroup:(id)arg1;
- (void)didSendMsgFinished:(_Bool)arg1;
- (void)dismissGroupTribeUI;
- (void)dismissShareUI;
- (void)doLoginSuccessHandlePush;
- (void)doLoginSuccessHandlePushForActionOpenQStory;
- (void)doSendTextMsg:(id)arg1 key:(id)arg2 model:(id)arg3;
@property(retain, nonatomic) QQFastSendRichMediaPickerController *fastSendRichMediapickerController; // @synthesize fastSendRichMediapickerController=_fastSendRichMediapickerController;
- (void)fastSendShortVideoFinished;
- (void)fileSelViewCtrlLeftBtnFun:(id)arg1;
- (void)fileSelViewCtrlLeftBtnFunForSuccess:(id)arg1;
- (void)finalOpenGroupTribeViewController:(id)arg1 shareInfo:(id)arg2 trueGroupTribeName:(id)arg3;
- (void)foodPicUploadFinished:(id)arg1 resultCode:(int)arg2;
- (void)forwardRightMenuVC:(int)arg1 isQuicAction:(_Bool)arg2;
- (void)gameBindingGroupListViewCtrlLeftBtnFun:(id)arg1;
- (void)gameBindingGroupListViewCtrlSuccessFun:(id)arg1;
- (id)generateWPAParamWithDic:(id)arg1;
- (id)getImagePathForImageData:(id)arg1;
- (id)getMaxSubString:(id)arg1 maxLength:(int)arg2;
- (void)getOpenIDFinished:(id)arg1;
- (void)getOpenIDTimeOut;
- (void)gotoFace2FaceRedpackView;
- (void)gotoPayCodeView:(_Bool)arg1 entry:(long long)arg2;
- (void)gotoTransferQRcode:(_Bool)arg1;
- (void)groupSettingViewCtrlDealloc:(id)arg1;
- (void)groupSettingViewCtrlLeftBtnFun:(id)arg1;
- (void)groupSettingViewCtrlSuccessFun:(id)arg1;
@property(retain, nonatomic) NSDictionary *groupTribeParams; // @synthesize groupTribeParams=_groupTribeParams;
- (void)handleImagePickerDelegate:(id)arg1;
- (void)handleMSFConnectSucced:(id)arg1;
- (void)handleMSFConnectSuccedForInfoUrl:(id)arg1;
- (void)httpInternalForward:(id)arg1 messageModel:(id)arg2;
- (void)httpUpload:(id)arg1 messageModel:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imageSelected:(id)arg1;
- (id)init;
- (void)initObserver;
- (id)insertToDB:(id)arg1;
- (id)isStoryJump:(id)arg1;
- (void)onForceOffLineNotify;
- (void)onGetCreateGroupAuthority:(int)arg1 groupCode:(unsigned int)arg2 groupUin:(unsigned int)arg3 sign:(id)arg4 svrErrorCode:(int)arg5;
- (void)onNotifiShowStoryTabSettingChanged;
- (void)onQRCodeDecodeCannotDecode;
- (void)onQRCodeDecodeNetErr;
- (void)onQRCodeDecodeSucceed:(id)arg1;
- (void)openMyListStoryPlayerForOldVersion:(id)arg1;
- (void)openOneDayListStoryPlayer:(id)arg1;
- (void)openPublicAccountVC;
- (void)openQQWalletDealManagerVCWithNavVC:(id)arg1;
- (void)openQQWalletRSViewControllerWithNavVC:(id)arg1;
- (void)openReadInJoyChannel:(id)arg1 navCtr:(id)arg2;
- (void)openSingalVideoStoryPlayer:(id)arg1;
- (void)openVideoPlayerForBanner:(id)arg1;
@property(retain, nonatomic) NSDictionary *paramsForStory; // @synthesize paramsForStory=_paramsForStory;
@property(retain, nonatomic) NSDictionary *paramsForStoryIndex; // @synthesize paramsForStoryIndex=_paramsForStoryIndex;
- (_Bool)parseFileData:(id)arg1 fileName:(id)arg2 fileData:(id)arg3 dataList:(id)arg4;
- (id)parsePrefix:(id)arg1;
- (void)processActionAudioChat:(id)arg1;
- (void)processActionChatC2C:(id)arg1;
- (void)processActionChatCRM:(id)arg1;
- (void)processActionChatGroup:(id)arg1;
- (void)processActionChatPublicAccount:(id)arg1;
- (void)processActionChatRobot:(id)arg1;
- (void)processActionChatWpa:(id)arg1;
- (void)processActionDiscussGroup:(id)arg1;
- (void)processActionGroupAudioChat:(id)arg1;
- (void)processActionGroupRandomAVChat:(id)arg1;
- (void)processActionGroupVideoChat:(id)arg1;
- (void)processActionVideoChat:(id)arg1;
- (void)processJSCallBack:(id)arg1 withParamStr:(id)arg2;
- (void)processSchemeCallBack:(id)arg1 withParamStr:(id)arg2;
- (_Bool)processWPASchemeCallBack:(id)arg1 withParamStr:(id)arg2;
- (void)pubAccViewCtrLeftBtnFun:(id)arg1;
- (void)pushQStoryIndex;
@property(retain, nonatomic) QQFriendSelectedViewController *qqFriSelVc; // @synthesize qqFriSelVc=_qqFriSelVc;
- (void)reportOpenShareCheck:(_Bool)arg1 paramDict:(id)arg2 shareInfo:(id)arg3 code:(int)arg4;
- (void)reportStart3rdShare:(id)arg1;
- (long long)requestDataFromPluginAppWithUserData:(id)arg1 triggeredByChatViewCtrl:(id)arg2;
- (void)requestDecodeSig:(id)arg1;
@property(retain, nonatomic) QQRequestUinFromOpenID *requestUinFromOpenid; // @synthesize requestUinFromOpenid;
- (void)resourceFileDownloadFinished:(id)arg1 resultCode:(int)arg2;
- (void)richMediaPickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)richMediaPickerControllerDidCancel:(id)arg1;
- (_Bool)saveAndSendOneShareTextMsg:(id)arg1 accType:(int)arg2 groupCode:(id)arg3 withMsg:(id)arg4 withMsgID:(int)arg5 isSendMsg:(_Bool)arg6 appShareID:(unsigned int)arg7 msgModel:(out id *)arg8;
- (_Bool)saveAndSendOneShareTextMsg:(id)arg1 msgTargetType:(int)arg2 withMsg:(id)arg3 withMsgID:(int)arg4 isSendMsg:(_Bool)arg5 appShareID:(unsigned int)arg6 msgModel:(out id *)arg7;
- (id)saveAndSendShareArkMsg:(id)arg1 accType:(int)arg2 groupCode:(id)arg3 withMsg:(id)arg4 appShareID:(unsigned int)arg5;
- (id)saveAndSendShareFlashChatMsg:(id)arg1 accType:(int)arg2 groupCode:(id)arg3 withMsgModel:(id)arg4 appShareID:(unsigned int)arg5;
- (_Bool)saveAttachMsg:(id)arg1 withMsgID:(int)arg2;
- (id)saveImageData:(id)arg1 isNeedThumbImg:(_Bool)arg2;
- (void)saveToAlbum:(id)arg1;
- (_Bool)sendComposedRichMsgToUin:(id)arg1 type:(int)arg2 title:(id)arg3 summary:(id)arg4 actionUrl:(id)arg5 image:(id)arg6 showImageBorder:(_Bool)arg7 appID:(unsigned int)arg8;
- (id)sendMixedMessage:(id)arg1 groupCode:(id)arg2 msgTargetType:(int)arg3 accType:(int)arg4 withMsg:(id)arg5 originalMsg:(id)arg6 appShareID:(unsigned int)arg7;
- (_Bool)sendShareRichMsg:(id)arg1 accType:(int)arg2 groupCode:(id)arg3 withImageData:(id)arg4 attachedMsg:(id)arg5 actionUrl:(id)arg6 appShareID:(unsigned int)arg7 xmlContent:(id)arg8 msgModel:(out id *)arg9 internalForwardPicInfo:(id)arg10;
- (_Bool)sendShareRichMsgToC2C:(id)arg1 withImageData:(id)arg2 attachedMsg:(id)arg3 actionUrl:(id)arg4 appShareID:(unsigned int)arg5 xmlContent:(id)arg6 msgModel:(out id *)arg7 internalForwardPicInfo:(id)arg8;
- (_Bool)sendShareRichMsgToContact:(id)arg1 withImageData:(id)arg2 attachedMsg:(id)arg3 actionUrl:(id)arg4 appShareID:(unsigned int)arg5 xmlContent:(id)arg6 msgModel:(out id *)arg7 internalForwardPicInfo:(id)arg8;
- (_Bool)sendShareRichMsgToDiscussGroup:(id)arg1 withImageData:(id)arg2 attachedMsg:(id)arg3 actionUrl:(id)arg4 appShareID:(unsigned int)arg5 xmlContent:(id)arg6 msgModel:(out id *)arg7 internalForwardPicInfo:(id)arg8;
- (_Bool)sendShareRichMsgToGroup:(id)arg1 withImageData:(id)arg2 attachedMsg:(id)arg3 actionUrl:(id)arg4 appShareID:(unsigned int)arg5 xmlContent:(id)arg6 msgModel:(out id *)arg7 internalForwardPicInfo:(id)arg8;
- (_Bool)sendShareTextMsg:(id)arg1 accType:(int)arg2 groupCode:(id)arg3 withMsg:(id)arg4 attachMsg:(id)arg5 appShareID:(unsigned int)arg6 msgModel:(out id *)arg7;
- (id)sendStructuredXMLMessage:(id)arg1 accType:(int)arg2 groupCode:(id)arg3 withMsg:(id)arg4 appShareID:(unsigned int)arg5 compatibilityText:(id)arg6;
- (id)sendStructuredXMLMessage:(id)arg1 accType:(int)arg2 groupCode:(id)arg3 withMsg:(id)arg4 appShareID:(unsigned int)arg5 compatibilityText:(id)arg6 thirdShareModel:(id)arg7;
- (id)sendStructuredXMLMessage:(id)arg1 msgTargetType:(int)arg2 withMsg:(id)arg3 appShareID:(unsigned int)arg4;
- (id)sendStructuredXMLMessage:(id)arg1 msgTargetType:(int)arg2 withMsg:(id)arg3 appShareID:(unsigned int)arg4 compatibilityText:(id)arg5;
- (id)sendStructuredXMLMessage:(id)arg1 msgTargetType:(int)arg2 withMsg:(id)arg3 appShareID:(unsigned int)arg4 compatibilityText:(id)arg5 thirdAppShareModel:(id)arg6;
- (void)setCacheNotification:(id)arg1;
- (void)setQStoryAutoRefresh:(_Bool)arg1;
@property(retain, nonatomic) QQShareResultAlertView *shareResultAlertView; // @synthesize shareResultAlertView=_shareResultAlertView;
@property(retain, nonatomic) QQShareMsgInfo *thirdAppToQzoneMsgInfo; // @synthesize thirdAppToQzoneMsgInfo=_thirdAppToQzoneMsgInfo;
@property(retain, nonatomic) NSNotification *thirdAppToQzoneNotify; // @synthesize thirdAppToQzoneNotify=_thirdAppToQzoneNotify;
@property(retain, nonatomic) NSMutableDictionary *wpaParamDic; // @synthesize wpaParamDic=_wpaParamDic;
- (void)shareFromQQToQzone:(id)arg1;
- (void)shareToFriendCancelled;
- (void)shareToQZoneCtrLeftBtnFun:(id)arg1;
- (void)shareToQZoneSuccessLeftBtnFun:(id)arg1;
- (void)showAccountsNoMatchView:(id)arg1;
- (void)showGroupProfileCardForUin:(unsigned long long)arg1 sourceID:(unsigned int)arg2 subSrcID:(unsigned int)arg3 paramDic:(id)arg4;
- (void)showPTVPickerView;
- (void)showShareMsgToUin:(id)arg1 withData:(id)arg2 hasPreviewDialog:(_Bool)arg3;
- (void)startDecodeEventTimer;
- (void)stopDecodeEventTimer;
- (void)thirdAppNoRightAlertWithInfo:(id)arg1 errMsg:(id)arg2 tag:(int)arg3;
- (void)translateTokenForStoryWithDic:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)uploadPhoto;
- (void)willDismissFromScreen;
- (void)willEnterBackGround;
- (_Bool)wpaChatViewControllerBackHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) QRCodeDecodeBiz *decodeBiz; // @dynamic decodeBiz;
@property(retain, nonatomic) NSTimer *decodeEventTimer; // @dynamic decodeEventTimer;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) QQGroupJoinHelper *groupJoinHelper; // @dynamic groupJoinHelper;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool needHandleDecodeEvent; // @dynamic needHandleDecodeEvent;
@property(nonatomic) QQBaseChatViewController *sharingTrigger; // @dynamic sharingTrigger;
@property(readonly) Class superclass;

@end
