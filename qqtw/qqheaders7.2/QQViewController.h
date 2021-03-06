//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ActionSheetDataDelegate.h"
#import "IQQPreviewStatus.h"
#import "ISkinProtocol.h"
#import "UserSummaryNavBarItemDelagate.h"

@class NSMutableDictionary, NSNumber, NSString, PreviewTitleBar, QQReadInJoyVideoFullScreenAssistant, QQVIPFunctionComicTabBarView, QQView, ReadInJoyVideoArticleModel, ThemeBackgroundAnimateImageView, UIActivityIndicatorView, UIButton, UILabel, UIView, UserSummaryNavigationBar;

@interface QQViewController : UIViewController <ActionSheetDataDelegate, UserSummaryNavBarItemDelagate, ISkinProtocol, IQQPreviewStatus>
{
    UIButton *_leftButton;
    UIButton *_rightButton;
    QQView *_mainView;
    NSString *_controllerTitle;
    _Bool _notChangeLbtn;
    int _maxLeftTitleNum;
    NSString *_setSuperTitle;
    int _viewTag;
    _Bool _bPreviewStatus;
    PreviewTitleBar *_privateTitleBar;
    UILabel *_titleLabel;
    _Bool _isPushViewController;
    _Bool _isAccountRelated;
    UIActivityIndicatorView *_actView;
    NSMutableDictionary *_timeoutHandlers;
    _Bool _shouldReloadAppearance;
    _Bool _canAddGesture;
    _Bool _bTextRightButton;
    id <QQPreviewApearStateDelegate> _previewDelegate;
    id <QQPreviewActionDelegate> _previewActionDelegate;
    _Bool _slideOutDrawerWhenSwipe;
    _Bool _showLeftButtonImg;
    unsigned long long _viewID;
    _Bool _isRestoreNavigationBar;
    ThemeBackgroundAnimateImageView *_bgApngImageView;
    int _xo;
    UIView *navigationBarView;
}

+ (_Bool)CanShowAnimated;
+ (id)getVisibleRootView;
+ (void)showNoStyleTestWebController:(id)arg1 title:(id)arg2 webViewStyle:(long long)arg3 stackStyle:(int)arg4;
+ (void)showShareAppWebViewController:(id)arg1 title:(id)arg2 shareAppID:(unsigned int)arg3 shareIcon:(id)arg4 webViewStyle:(long long)arg5 stackStyle:(int)arg6 andModel:(id)arg7;
+ (void)showWebController:(id)arg1 title:(id)arg2 webViewStyle:(long long)arg3 stackStyle:(int)arg4 msgModel:(id)arg5;
+ (Class)webviewClassForWebviewType:(long long)arg1;
- (void)AVEventDealloc;
- (void)ActionLogin;
- (id)GetCurrentTitle;
- (id)GetLeftButtonTitle;
- (void)ResetLeftButton;
- (_Bool)accessibilityPerformEscape;
- (id)actView;
- (void)actionSheetClickedAtIndex:(int)arg1 sender:(id)arg2;
- (void)addAVEventObserver;
- (void)addBgApngImageViewWithFilePath:(id)arg1 defaultImage:(id)arg2 aboveView:(id)arg3;
- (void)addTimeoutHandler:(SEL)arg1 interval:(double)arg2;
- (void)addTimeoutHandler:(id)arg1 selector:(SEL)arg2 interval:(double)arg3;
- (void)addUnreadCountGesture;
- (id)animateBackgroundViewWithFilePath:(id)arg1 defaultImage:(id)arg2;
- (id)appendUinIfPAQQJumpUrl:(id)arg1;
@property(retain, nonatomic) QQReadInJoyVideoFullScreenAssistant *assistant;
@property(nonatomic) id <QQReadInJoyVideoShareAutoPlayDelegate> autoPlayDelegate;
- (void)callDidRemovedBlockIfNeed;
- (_Bool)canBecomeFirstResponder;
- (void)checkPreviewStatus;
- (void)clearReference:(id)arg1;
- (void)clickBottomTab;
@property(retain, nonatomic) QQVIPFunctionComicTabBarView *comicTabBar;
- (void)commonTimeoutHandler:(id)arg1;
- (void)createAIOLeftButton;
- (void)createDefaultImageRightButton;
- (void)createDoubleImageRightButton:(id)arg1 firAction:(SEL)arg2 firVoiceStr:(id)arg3 secIconName:(id)arg4 secAction:(SEL)arg5 secVoiceStr:(id)arg6;
- (void)createImageRightButton:(id)arg1 action:(SEL)arg2;
- (void)createImageRightButtonWithNormalIcon:(id)arg1 selectedIcon:(id)arg2 action:(SEL)arg3;
- (void)createTabAvatarLeftButton;
- (void)createTextLeftButton:(id)arg1 action:(SEL)arg2;
- (void)createTextRightButton:(id)arg1 action:(SEL)arg2;
- (void)createTextRightButton:(id)arg1 action:(SEL)arg2 eventType:(long long)arg3 andShowRedPoint:(_Bool)arg4;
- (void)createTextRightButton:(id)arg1 target:(id)arg2 action:(SEL)arg3;
@property(nonatomic) unsigned long long curUin; // @dynamic curUin;
- (void)cz_mv_addSubview:(id)arg1;
- (void)dealloc;
- (CDUnknownBlockType)didRemovedBlock;
- (void)didSelectURL:(id)arg1 msgModel:(id)arg2;
- (void)didSelectedSendFlwMember:(id)arg1;
- (void)didShareToQzoneWithNotification:(id)arg1;
- (void)dismiss;
- (void)dismissCompleted;
- (void)dismissModalViewControllerAnimated:(_Bool)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) unsigned long long displayLevelInComic;
- (void)enterPreviewStatus;
- (void)firAction;
- (id)getCustomTitleView:(id)arg1 subTitle:(id)arg2 color:(id)arg3;
- (id)getCustomTitleView:(id)arg1 titleColor:(id)arg2 subTitle:(id)arg3 subTitleColor:(id)arg4;
- (id)getDataForConfig:(id)arg1;
- (id)getDataForShareItem:(id)arg1 onThisItem:(int)arg2;
@property(readonly, nonatomic, getter=getNavigationBarView) UIView *navigationBarView; // @synthesize navigationBarView;
- (int)getPbArticleSourceWithAIO;
- (void)handleGestureRecognizerRight:(id)arg1;
- (void)handleNavBarItemClick:(_Bool)arg1;
- (void)handleQQThemeChangedNotification:(id)arg1;
- (void)hideLoadingIndicator;
@property(nonatomic) _Bool hidesComicTabBarWhenPushed;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)imageRightButtonWithNormalIcon:(id)arg1 selectedIcon:(id)arg2 action:(SEL)arg3;
- (id)imageRightButtonWithNormalIcon:(id)arg1 selectedIcon:(id)arg2 action:(SEL)arg3 useDefaultIcon:(_Bool)arg4;
@property(nonatomic) double inTimeStamp;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)initializeAVEvtObserver;
@property(nonatomic, getter=isDisablePlayAfterActionSheetDismiss) _Bool disablePlayAfterActionSheetDismiss;
@property(nonatomic) _Bool isDismissing; // @dynamic isDismissing;
- (_Bool)isEmailReadUrl:(id)arg1;
@property(nonatomic) _Bool isNeedReturnAVChatController; // @dynamic isNeedReturnAVChatController;
@property(nonatomic) _Bool isObservingAVEvt; // @dynamic isObservingAVEvt;
- (_Bool)isPreviewing;
@property(nonatomic, getter=isShowingActionSheet) _Bool showingActionSheet;
@property(nonatomic, getter=isShowingSLVC) _Bool showingSLVC;
- (_Bool)isSupportFullScreenLayout;
- (_Bool)isSupportInterruputRightDragToGoBack;
- (_Bool)isSupportPreview;
- (_Bool)isSupportRightDragToGoBack;
@property(nonatomic, getter=isViewVisible) _Bool viewVisible;
- (void)judgeNavigationBarDistroyed;
- (void)layoutViewsIfNeeds:(id)arg1;
- (void)leavePreviewStatus;
@property(readonly, nonatomic) UIButton *leftButton; // @dynamic leftButton;
- (void)leftButtonClick:(id)arg1;
@property(copy, nonatomic) NSString *likeCountString;
- (void)loadStatusBar;
- (void)loadView;
@property int maxLeftTitleNum; // @synthesize maxLeftTitleNum=_maxLeftTitleNum;
@property(retain, nonatomic) UserSummaryNavigationBar *navigationBar;
- (void)navigationBarHandle;
- (void)navigationBarHandleWithLeftTitle:(id)arg1;
@property(nonatomic) unsigned long long navigationBarStyle;
- (void)onActionItemDidSelectecd:(int)arg1 actionItem:(id)arg2;
- (void)onChatFinish:(id)arg1;
- (void)onGobackToVideo:(id)arg1;
- (void)onHeadButtonClick;
- (void)onStartPopping:(id)arg1;
- (void)onStartPushing:(id)arg1;
- (_Bool)openActionURL:(id)arg1 withTitle:(id)arg2;
- (void)openImagePicker:(unsigned long long)arg1;
- (_Bool)openNativeURL:(id)arg1 withTitle:(id)arg2 params:(id)arg3;
- (void)openSharedURL:(id)arg1 withModel:(id)arg2;
- (void)openUrl:(id)arg1 withTitle:(id)arg2;
- (void)openUrl:(id)arg1 withTitle:(id)arg2 isSupportOrientations:(_Bool)arg3;
- (void)openUrl:(id)arg1 withTitle:(id)arg2 recomposing:(_Bool)arg3;
- (void)openWebURL:(id)arg1 withTitle:(id)arg2;
@property(nonatomic) double outTimeStamp;
@property(copy, nonatomic) NSString *playCountString;
- (void)popQQController:(_Bool)arg1;
- (void)presentModal:(id)arg1;
- (void)presentModalViewController:(id)arg1 animated:(_Bool)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)previewActionItems;
- (void)printViewControllerInfo:(id)arg1;
- (void)pushQQViewController:(id)arg1 animated:(_Bool)arg2;
- (void)pushQQViewControllerToNav:(id)arg1 animated:(_Bool)arg2;
- (void)reSetLeftButtonTitle;
@property(nonatomic) _Bool recordDurationManual;
- (void)recordStayDuration:(CDUnknownBlockType)arg1;
- (struct CGRect)regionForSupportingRightDragToGoBack;
- (void)releaseUI;
- (void)reloadAppearance;
- (void)reloadAppearanceIfNeeded;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)removeBgApngImageView;
- (void)removeLeftButton;
- (void)removeRightButton;
- (void)removeTimeoutHandler;
- (void)removeTimeoutHandler:(id)arg1;
- (void)removeUnreadCountGesture;
- (void)report740F:(int)arg1;
- (void)reportPublicAccountGroupMsgClick:(id)arg1;
- (void)resetTitleLabelFrame;
- (void)resetTitleView;
- (void)restoreData;
- (void)restoreNavigationBarWithColor:(id)arg1;
- (void)returnToAVChatController;
@property(retain, nonatomic) UIButton *rightButton; // @dynamic rightButton;
- (void)rigthButtonClick:(id)arg1;
- (void)setBgApngImageViewWithFilePath:(id)arg1 defaultImage:(id)arg2 aboveView:(id)arg3;
@property(retain, nonatomic) NSString *controllerTitle; // @dynamic controllerTitle;
- (void)setCustomTitleView:(id)arg1;
- (void)setDidRemovedBlock:(CDUnknownBlockType)arg1;
- (void)setLeftButton:(id)arg1;
@property(retain, nonatomic) NSNumber *sharingChannelID;
@property(retain, nonatomic) ReadInJoyVideoArticleModel *sharingVideoArticleModel;
@property(retain, nonatomic) id <QQReadInJoyVideoCellShareDelegate> sharingVideoCell;
- (void)setTabBarHidden:(_Bool)arg1 animation:(_Bool)arg2;
- (void)setTitle:(id)arg1;
- (void)shareToWeiboWithRichMsgData:(id)arg1 image:(id)arg2 presentCompletion:(CDUnknownBlockType)arg3 dismissCompletion:(CDUnknownBlockType)arg4;
- (void)shareToWeiboWithRichMsgData:(id)arg1 presentCompletion:(CDUnknownBlockType)arg2 dismissCompletion:(CDUnknownBlockType)arg3;
- (void)shareVideoWithFriend;
- (void)shareVideoWithQzone;
- (void)shareVideoWithSinaWeibo;
- (void)showLoadingIndicator;
- (void)showQQBrowser:(id)arg1;
- (void)showWebUrl:(id)arg1 webTitle:(id)arg2;
- (void)showWebUrl:(id)arg1 webTitle:(id)arg2 style:(long long)arg3;
- (void)showWebView:(id)arg1 extraData:(id)arg2;
- (void)showWebView:(id)arg1 title:(id)arg2 webViewStyle:(long long)arg3 stackStyle:(int)arg4;
- (void)showWebView:(id)arg1 title:(id)arg2 webViewStyle:(long long)arg3 stackStyle:(int)arg4 recomposing:(_Bool)arg5;
- (void)showWebView:(id)arg1 title:(id)arg2 webViewStyle:(long long)arg3 stackStyle:(int)arg4 supportOrientations:(_Bool)arg5;
- (void)showWebView:(id)arg1 title:(id)arg2 webViewStyle:(long long)arg3 stackStyle:(int)arg4 supportOrientations:(_Bool)arg5 reportSourceInfo:(id)arg6;
- (void)showWebView:(id)arg1 title:(id)arg2 webViewStyle:(long long)arg3 stackStyle:(int)arg4 supportOrientations:(_Bool)arg5 reportSourceInfo:(id)arg6 JDWeb:(_Bool)arg7;
- (void)showWebViewBottomBarNoSharePush:(id)arg1 title:(id)arg2;
- (void)startRecordInQQViewControllerIfNeed;
- (double)stayDuration;
- (void)stopRecordInQQViewControllerIfNeed;
- (unsigned long long)supportedInterfaceOrientations;
- (id)topNavigationController;
- (void)unInitializeAVEvtObserver;
- (void)updateButton:(id)arg1 color:(id)arg2;
- (id)urlEncode:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidAppearHandleNavi;
- (void)viewDidBecomeInvisible;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) unsigned long long viewID; // @dynamic viewID;
@property(nonatomic) int viewTag; // @dynamic viewTag;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillAppearHandleNavi;
- (void)viewWillAppearOnNormalStatus;
- (void)viewWillAppearOnPreviewStatus;
- (void)viewWillBecomeVisible;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillDisappearOnNormalStatus;
- (void)viewWillDisappearOnPreviewStatus;
- (void)viewWillLayoutSubviews;
@property(readonly, nonatomic, getter=visible) _Bool visible;
- (void)willMoveToParentViewController:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool bTextRightButton; // @dynamic bTextRightButton;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAccountRelated; // @dynamic isAccountRelated;
@property(nonatomic) _Bool isPushViewController; // @dynamic isPushViewController;
@property(nonatomic) _Bool isRestoreNavigationBar; // @dynamic isRestoreNavigationBar;
@property(retain, nonatomic) QQView *mainView; // @dynamic mainView;
@property(nonatomic) _Bool notChangeLbtn; // @dynamic notChangeLbtn;
@property(nonatomic) id <QQPreviewActionDelegate> previewActionDelegate; // @dynamic previewActionDelegate;
@property(nonatomic) id <QQPreviewApearStateDelegate> previewDelegate; // @dynamic previewDelegate;
@property(retain, nonatomic) NSString *setSuperTitle; // @dynamic setSuperTitle;
@property(nonatomic) _Bool showLeftButtonImg; // @dynamic showLeftButtonImg;
@property(nonatomic) _Bool slideOutDrawerWhenSwipe; // @dynamic slideOutDrawerWhenSwipe;
@property(readonly) Class superclass;
@property(retain, nonatomic) UILabel *titleLabel; // @dynamic titleLabel;

@end

