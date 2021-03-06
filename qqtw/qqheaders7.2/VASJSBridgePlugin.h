//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewPluginQQBizBase.h"

#import "QQFriendSelectedViewControllerDelegate.h"
#import "QQLoadObserver.h"
#import "RichStateTodoTabViewControllerDelegate.h"
#import "SSOJsbridgeDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, QQWebView, SpriteWebView;

@interface VASJSBridgePlugin : QQWebViewPluginQQBizBase <QQLoadObserver, SSOJsbridgeDelegate, RichStateTodoTabViewControllerDelegate, UIAlertViewDelegate, QQFriendSelectedViewControllerDelegate>
{
    double _nClickStart;
    double _nPageStart;
    double _nPageFinish;
    NSString *_NAME_Webview;
    _Bool _isAutoRetryWhenDistributeGoodsFail;
    NSMutableArray *_startupMessageQueue;
    NSMutableDictionary *_messageHandlers;
    _Bool _isWebViewAppear;
    NSMutableArray *_bubblePackInfoArray;
    NSMutableDictionary *_bubblePackDict;
    _Bool _bSelected;
    _Bool _bNoWlanSelectDownload;
    _Bool _bIsStopDownloadOperation;
    NSMutableArray *_emojiPackInfoArray;
    NSMutableDictionary *_emojiPackDict;
    NSMutableArray *_magicEmojiPackInfoArray;
    NSString *_showMsgBoxCallback;
    NSString *_buyCallback;
    NSString *_startDownloadCallback;
    int _startDownloadThemeId;
    unsigned int _startDownloadThemeSuitId;
    NSMutableArray *_downloadThemeArray;
    int _downloadThemeArrayResult;
    NSString *_openBoxCallback;
    NSString *_startApolloGameCallback;
    NSString *_downloadImageOnFrameCallback;
    SpriteWebView *_spriteWebView;
    NSString *_publishSignatureCallback;
    NSString *_sigGetLocationCallback;
    NSString *_sigGetActionCallback;
    NSMutableDictionary *_colorfulFloatingScreenCallback;
    QQWebView *_webView;
}

+ (id)getShopBaseURLWithTabType:(int)arg1;
+ (id)getURLbyKey:(id)arg1 defaultURL:(id)arg2;
+ (int)instanceEnterSource;
+ (id)parseInternalURL:(id)arg1 serviceAPPID:(int)arg2;
+ (id)parseInternalURLBasic:(id)arg1;
+ (id)pathForBubbleWebViewWithEnterSource:(int)arg1;
+ (id)pathForEmojiWebViewWithEnterSource:(int)arg1 packId:(id)arg2 operationType:(int)arg3 openAuthorPage:(_Bool)arg4;
+ (id)pathForEmojiWebViewWithEnterSource:(int)arg1 packId:(id)arg2 operationType:(int)arg3 openAuthorPage:(_Bool)arg4 isQface:(_Bool)arg5;
+ (id)pathForIndividuationWebViewWithEnterSource:(int)arg1;
+ (id)pathForOneBubbleWebView:(id)arg1;
+ (id)pathForOneChatBgWebView:(id)arg1;
+ (id)pathForOneFontWebView:(id)arg1;
+ (id)pathForOnePendantWebView:(id)arg1;
+ (id)pathForOneSuitWebView:(id)arg1;
+ (id)pathForOneThemeWebView:(id)arg1;
+ (id)pathForSpriteBeanProducer;
+ (id)pathForSpriteMyTaskWebViewWithEnterSource:(int)arg1;
+ (id)pathForSpriteProfileWebViewWithEnterSource:(int)arg1;
+ (id)pathForSpriteShopWithEnterSource:(int)arg1 tabType:(int)arg2 externDictParam:(id)arg3;
+ (id)pathForSuitWebViewWithEnterSource:(int)arg1;
+ (id)pathForThemeWebViewWithEnterSource:(int)arg1;
+ (id)pathForWebView:(id)arg1 adTag:(id)arg2 bid:(id)arg3 appID:(int)arg4;
+ (void)setWebViewPushStyle:(id)arg1 isPushStack:(_Bool)arg2 isCloseButton:(_Bool)arg3;
+ (id)webViewControllerRecommendEmojiWithURL:(id)arg1 isPushStack:(_Bool)arg2;
+ (id)webViewControllerWithURL:(id)arg1 enterSource:(int)arg2 packId:(id)arg3 isPushStack:(_Bool)arg4;
+ (id)webViewForBubbleWithEnterSource:(int)arg1 isPushStack:(_Bool)arg2 bubbleId:(int)arg3 diyInfo:(id)arg4;
+ (id)webViewForBubbleWithEnterSource:(int)arg1 isPushStack:(_Bool)arg2 promotionId:(int)arg3;
+ (id)webViewForEmojiWithEnterSource:(int)arg1 packId:(id)arg2 operationType:(int)arg3 openAuthorPage:(_Bool)arg4 isPushStack:(_Bool)arg5;
+ (id)webViewForEmojiWithEnterSource:(int)arg1 packId:(id)arg2 operationType:(int)arg3 openAuthorPage:(_Bool)arg4 isPushStack:(_Bool)arg5 isQFace:(_Bool)arg6;
+ (id)webViewForIndividuationWithEnterSource:(int)arg1 isPushStack:(_Bool)arg2;
+ (id)webViewForRecommendEmojiWithEnterSource:(int)arg1 packId:(id)arg2 operationType:(int)arg3 openAuthorPage:(_Bool)arg4 isPushStack:(_Bool)arg5 isQFace:(_Bool)arg6 btnUrl:(id)arg7 btnType:(int)arg8;
+ (id)webViewForSpriteGoldCoinWithEenterSource:(int)arg1 isPushStack:(_Bool)arg2;
+ (id)webViewForSpriteMyTaskWithEnterSource:(int)arg1 isPushStack:(_Bool)arg2;
+ (id)webViewForSpriteProfileCenterWithEnterSource:(int)arg1 isPushStack:(_Bool)arg2;
+ (id)webViewForSuitWithEnterSource:(int)arg1 isPushStack:(_Bool)arg2 promotionId:(int)arg3;
+ (id)webViewForThemeWithEnterSource:(int)arg1 isPushStack:(_Bool)arg2 promotionId:(int)arg3;
+ (id)webViewSpriteShopWithEnterSource:(int)arg1 isPushStack:(_Bool)arg2 spriteShopTab:(int)arg3 externParam:(id)arg4;
+ (id)webviewForEmojiWithPromotionId:(int)arg1;
- (void).cxx_destruct;
- (void)LBSPOIViewController:(id)arg1 customLBSLocationString:(id)arg2;
- (void)LBSPOIViewController:(id)arg1 selectedLBSPoiInfo:(id)arg2;
- (void)LBSPOIViewController:(id)arg1 selectedLBSPositon:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)animationFileNamesWithTemplateId:(long long)arg1;
- (void)dealloc;
- (id)dicToJSON:(id)arg1;
- (void)executeJsWithCallback:(id)arg1 resCode:(int)arg2 message:(id)arg3 data:(id)arg4;
- (_Bool)friendSelectedViewController:(id)arg1 didSelectFriend:(id)arg2 type:(int)arg3;
- (id)getCookieForUrl:(id)arg1;
- (id)getStickerModelByHash:(id)arg1;
- (double)getTimeSince1970;
- (_Bool)handleEvent:(int)arg1 userInfo:(id)arg2;
- (void)handleJsBridgeRequest_apollo_addAvatar:(id)arg1;
- (void)handleJsBridgeRequest_apollo_addCmFace:(id)arg1;
- (void)handleJsBridgeRequest_apollo_addCustomAction:(id)arg1;
- (void)handleJsBridgeRequest_apollo_addGame:(id)arg1;
- (void)handleJsBridgeRequest_apollo_changeRole:(id)arg1;
- (void)handleJsBridgeRequest_apollo_checkGameStatus:(id)arg1;
- (void)handleJsBridgeRequest_apollo_chooseFriendPlayGame:(id)arg1;
- (void)handleJsBridgeRequest_apollo_closeWebview:(id)arg1;
- (void)handleJsBridgeRequest_apollo_delGame:(id)arg1;
- (void)handleJsBridgeRequest_apollo_delLocalFavAction:(id)arg1;
- (void)handleJsBridgeRequest_apollo_destroyAvatar:(id)arg1;
- (void)handleJsBridgeRequest_apollo_downloadImageOnFrame:(id)arg1;
- (void)handleJsBridgeRequest_apollo_getFriendsByOpenApollo:(id)arg1;
- (void)handleJsBridgeRequest_apollo_getLocalFavAction:(id)arg1;
- (void)handleJsBridgeRequest_apollo_getLocalInfo:(id)arg1;
- (void)handleJsBridgeRequest_apollo_getRoleId:(id)arg1;
- (void)handleJsBridgeRequest_apollo_getSwitch:(id)arg1;
- (void)handleJsBridgeRequest_apollo_initApolloView:(id)arg1;
- (void)handleJsBridgeRequest_apollo_initAvatar:(id)arg1;
- (void)handleJsBridgeRequest_apollo_isCmFaceAdded:(id)arg1;
- (void)handleJsBridgeRequest_apollo_openApolloShareFloatView:(id)arg1;
- (void)handleJsBridgeRequest_apollo_openApolloShow:(id)arg1;
- (void)handleJsBridgeRequest_apollo_openBox:(id)arg1;
- (void)handleJsBridgeRequest_apollo_openDiyActionFloatView:(id)arg1;
- (void)handleJsBridgeRequest_apollo_openFloatTransparentView:(id)arg1;
- (void)handleJsBridgeRequest_apollo_preview:(id)arg1;
- (void)handleJsBridgeRequest_apollo_previewAction:(id)arg1;
- (void)handleJsBridgeRequest_apollo_previewOnFrame:(id)arg1;
- (void)handleJsBridgeRequest_apollo_redbagCallback:(id)arg1;
- (void)handleJsBridgeRequest_apollo_refreshAction:(id)arg1;
- (void)handleJsBridgeRequest_apollo_removeBubble:(id)arg1;
- (void)handleJsBridgeRequest_apollo_sayHi:(id)arg1;
- (void)handleJsBridgeRequest_apollo_sendActionToFrd:(id)arg1;
- (void)handleJsBridgeRequest_apollo_setApolloViewVisibility:(id)arg1;
- (void)handleJsBridgeRequest_apollo_setBackViewVisibility:(id)arg1;
- (void)handleJsBridgeRequest_apollo_setup:(id)arg1;
- (void)handleJsBridgeRequest_apollo_startApolloGame:(id)arg1;
- (void)handleJsBridgeRequest_apollo_updateGameList:(id)arg1;
- (void)handleJsBridgeRequest_apollo_writeLocalData:(id)arg1;
- (void)handleJsBridgeRequest_bubble_diySetup:(id)arg1;
- (void)handleJsBridgeRequest_bubble_isSecGroupAvailable:(id)arg1;
- (void)handleJsBridgeRequest_bubble_openSecGroup:(id)arg1;
- (void)handleJsBridgeRequest_bubble_openSecMsg:(id)arg1;
- (void)handleJsBridgeRequest_bubble_queryInfo:(id)arg1;
- (void)handleJsBridgeRequest_bubble_queryLocal:(id)arg1;
- (void)handleJsBridgeRequest_bubble_setup:(id)arg1;
- (void)handleJsBridgeRequest_bubble_startDownload:(id)arg1;
- (void)handleJsBridgeRequest_bubble_stopDownload:(id)arg1;
- (void)handleJsBridgeRequest_colorScreen_queryLocal:(id)arg1;
- (void)handleJsBridgeRequest_colorScreen_setup:(id)arg1;
- (void)handleJsBridgeRequest_common_buy:(id)arg1;
- (void)handleJsBridgeRequest_common_getNetwork:(id)arg1;
- (void)handleJsBridgeRequest_common_getPerformance:(id)arg1;
- (void)handleJsBridgeRequest_common_getVipType:(id)arg1;
- (void)handleJsBridgeRequest_common_openPage:(id)arg1;
- (void)handleJsBridgeRequest_common_popup:(id)arg1;
- (void)handleJsBridgeRequest_common_showMsgBox:(id)arg1;
- (void)handleJsBridgeRequest_emoji_buyEmoji:(id)arg1;
- (void)handleJsBridgeRequest_emoji_emojiStickerAddFavorites:(id)arg1;
- (void)handleJsBridgeRequest_emoji_emojiStickerRecall:(id)arg1;
- (void)handleJsBridgeRequest_emoji_openPage:(id)arg1;
- (void)handleJsBridgeRequest_emoji_queryEmojiInfo:(id)arg1;
- (void)handleJsBridgeRequest_emoji_queryEmojiInfos:(id)arg1;
- (void)handleJsBridgeRequest_emoji_queryEmojiStickerInfos:(id)arg1;
- (void)handleJsBridgeRequest_emoji_sendEmojiToFrd:(id)arg1;
- (void)handleJsBridgeRequest_emoji_startDownloadEmoji:(id)arg1;
- (void)handleJsBridgeRequest_emoji_startDownloadEmojiSub:(id)arg1;
- (void)handleJsBridgeRequest_emoji_startDownloadMagicEmojiSub:(id)arg1 businessType:(int)arg2;
- (void)handleJsBridgeRequest_emoji_startDownloadSmallEmoji:(id)arg1;
- (void)handleJsBridgeRequest_emoji_stopDownloadEmoji:(id)arg1;
- (void)handleJsBridgeRequest_individuation_openPage:(id)arg1;
- (void)handleJsBridgeRequest_individuation_setRightButton:(id)arg1;
- (void)handleJsBridgeRequest_localData_getFileInfo:(id)arg1;
- (void)handleJsBridgeRequest_praise_queryLocal:(id)arg1;
- (void)handleJsBridgeRequest_praise_setup:(id)arg1;
- (void)handleJsBridgeRequest_sign_getAction:(id)arg1;
- (void)handleJsBridgeRequest_sign_getLocation:(id)arg1;
- (void)handleJsBridgeRequest_sign_publishSignature:(id)arg1;
- (void)handleJsBridgeRequest_sign_setLike:(id)arg1;
- (void)handleJsBridgeRequest_sso_uniAgent:(id)arg1;
- (void)handleJsBridgeRequest_theme_isSupportDynamic:(id)arg1;
- (void)handleJsBridgeRequest_theme_openDiyTheme:(id)arg1;
- (void)handleJsBridgeRequest_theme_queryInfo:(id)arg1;
- (void)handleJsBridgeRequest_theme_queryLocal:(id)arg1;
- (void)handleJsBridgeRequest_theme_queryWeekLoopInfo:(id)arg1;
- (void)handleJsBridgeRequest_theme_setup:(id)arg1;
- (void)handleJsBridgeRequest_theme_startDownload:(id)arg1;
- (void)handleJsBridgeRequest_theme_stopDownload:(id)arg1;
- (void)handleQQThemeDownloadStatusNotification:(id)arg1;
- (void)handleSpritePreviewStatusNotification:(id)arg1;
- (void)handleStartApolloGameNotification:(id)arg1;
- (id)init;
- (void)loader:(id)arg1 didUpdateStatus:(long long)arg2 userData:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onColorfulFloatingScreenResDownloadFail:(id)arg1;
- (void)onColorfulFloatingScreenResDownloadSuccess:(id)arg1;
- (void)onEnterBackgroundNotify;
- (void)onSelectedRichStateTodoItem:(id)arg1 itemModel:(id)arg2;
- (void)onSetRichState:(id)arg1;
- (void)pluginDidInit;
- (void)saveSpriteData:(id)arg1;
- (void)sendCallBack:(id)arg1 callbackId:(id)arg2;
@property(nonatomic) __weak QQWebView *webView; // @synthesize webView=_webView;
- (void)showNoNetworkTips;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

