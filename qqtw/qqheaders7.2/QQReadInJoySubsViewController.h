//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "MQZoneTableFootLoadingViewDelegate.h"
#import "NavigationTranstionDestination.h"
#import "NavigationTranstionSource.h"
#import "ODRefreshControlDelegate.h"
#import "QQMultiBiuEditControllerDelegate.h"
#import "QQReadInJoyChannelBarDelegate.h"
#import "QQReadInJoyChannelEntranceBtnTouchedDelegate.h"
#import "QQReadInJoyDislikeDelegate.h"
#import "QQReadInJoySubsCellDelegate.h"
#import "QQReadInJoySubsChannelHeaderDelegate.h"
#import "QQReadInJoySubsVideoCellDelegate.h"
#import "QQReadInJoyVideoShareAutoPlayDelegate.h"
#import "QUIAlertPlusViewDelegate.h"
#import "QUIAlertViewDelegate.h"
#import "ReadInJoyBBCircleViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDataSourcePrefetching.h"
#import "UITableViewDelegate.h"
#import "UserSummaryNavBarItemDelagate.h"
#import "VideoReportDelegate.h"

@class BarrageWebView, CALayer, MQZoneTableFootLoadingView, MsgTip, NSArray, NSDictionary, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, ODRefreshControl, QQPublicAccountFullScreenViewController, QQReadInJoyChannelBar, QQReadInJoyDislikeDialog, QQReadInJoyHeaderNotifyBtn, QQReadInJoySubsChannelHeader, QQReadInJoySubsVideoCell, QQReadInJoyVideoFullScreenNavigationTransition, QQWebShareActionSheet, QUIAlertPlusView, ReadInJoyBBCircleView, ReadInJoyCellFactory, ReadInJoyChannel, ReadInJoyChannelArticle, UIButton, UIImageView, UILabel, UITableView, UITapGestureRecognizer, UIView, UnsubcribeTipsCoverView, UserSummaryNavigationBar, VideoBubbleViewManager;

@interface QQReadInJoySubsViewController : QQViewController <MQZoneTableFootLoadingViewDelegate, QQReadInJoySubsCellDelegate, QQReadInJoySubsVideoCellDelegate, VideoReportDelegate, UIAlertViewDelegate, ODRefreshControlDelegate, QQReadInJoyChannelBarDelegate, NavigationTranstionSource, NavigationTranstionDestination, UINavigationControllerDelegate, QQReadInJoySubsChannelHeaderDelegate, UserSummaryNavBarItemDelagate, QQReadInJoyVideoShareAutoPlayDelegate, QUIAlertPlusViewDelegate, QUIAlertViewDelegate, ReadInJoyBBCircleViewDelegate, UITableViewDataSourcePrefetching, QQMultiBiuEditControllerDelegate, UITableViewDataSource, UITableViewDelegate, QQReadInJoyChannelEntranceBtnTouchedDelegate, QQReadInJoyDislikeDelegate>
{
    UITableView *_tableView;
    UIImageView *_redbagGesture;
    ODRefreshControl *_refreshHeader;
    MQZoneTableFootLoadingView *_loadMoreFooter;
    struct CGSize viewSize;
    _Bool _isRequesting;
    _Bool _enterArticle;
    _Bool _fromChannel;
    ReadInJoyChannel *_channel;
    _Bool _showTableHeaderView;
    long long _tipsIndex;
    _Bool _needAutoRefresh;
    _Bool _oldDataLoadFinish;
    long long _source;
    NSMutableDictionary *currentVideoInfo;
    _Bool _enterFullScreen;
    QQPublicAccountFullScreenViewController *_videoFullScreenController;
    double _currentPlayTime;
    _Bool _currenVideoPaused;
    QQReadInJoyDislikeDialog *dislikeDialog;
    ReadInJoyChannelArticle *dislikeArticle;
    _Bool needReport;
    _Bool isSubscribeChange;
    NSArray *dataSource;
    NSMutableSet *reportData;
    ReadInJoyChannelArticle *readArticle;
    NSMutableArray *subcriptionArticleIdList;
    NSMutableArray *messageStrategyIdList;
    NSMutableArray *messageAlgorithmIdList;
    NSString *actionData;
    unsigned long long selectedArticleId;
    _Bool _isDrawFinished;
    unsigned int _upTimes;
    _Bool _firstDidLoad;
    NSMutableSet *videoChannelreportData;
    NSMutableSet *readinjoyMessagevideoreportData;
    long long _currentSelectedItem;
    long long _scrollToTopBtnType;
    long long _footerLoadingFromType;
    long long feedStyle;
    UIView *topBar;
    struct CGPoint lastContentOffset;
    _Bool isScrollDown;
    CALayer *topBarBottomSeparator;
    UIView *refreshResultView;
    UILabel *tipsLabel;
    double videoPosX;
    double videoPosY;
    VideoBubbleViewManager *_bubbleManager;
    UnsubcribeTipsCoverView *unsubscribeTips;
    _Bool _fromCache;
    ReadInJoyCellFactory *cellFactory;
    MsgTip *_msgTip;
    unsigned long long _msgTipCount;
    _Bool _hasMsgTip;
    QQReadInJoyChannelBar *_channelBar;
    QQReadInJoySubsChannelHeader *_subsChannelHeaderView;
    ReadInJoyBBCircleView *bbCircleView;
    _Bool _needRefreshTip;
    _Bool _refreshWhenNoData;
    _Bool _isEndRefreshToTop;
    _Bool _inVideoChannel;
    _Bool _canPreLoadMoreFromSrv;
    _Bool _preLoadSrvError;
    _Bool _isNoMoreData;
    _Bool _enterItemFullScreen;
    _Bool _backFromFullScreen;
    _Bool _isPullRefresh;
    _Bool _insertingCell;
    _Bool _isForPageVC;
    _Bool _exitFromFullscreen;
    _Bool _isShowAlert;
    _Bool _isViewAppearFirst;
    _Bool _hasGotoFullVC;
    _Bool _offline;
    _Bool _isScrolling;
    _Bool _needDelayReloadData;
    unsigned int _parentChannelId;
    int _pbArticleSource;
    unsigned int _operationBitmap;
    unsigned int _feedsDisplayTriggerNum;
    int _lastNetworkState;
    double _loadtime;
    long long _subview_source;
    long long _subview_channel56_source;
    id <QQReadInJoySubsDelegate> _delegate;
    id <ReadInJoyMessageDelegate> _messageDelegate;
    id <ReadInJoyScrollViewDelegate> _scrollViewDelegate;
    NSArray *_searchChannelList;
    NSDictionary *_refreshInfoFromClickKandianTab;
    double _enterTime;
    QQReadInJoySubsVideoCell *_lastReportCellInVideoChannel;
    NSIndexPath *_playingCellIndexPath;
    double _fullScreenVideoOffset;
    long long _preloadReportAnchor;
    ReadInJoyChannelArticle *_insertChannelArticle;
    UITapGestureRecognizer *_tapToTopRegnizer;
    unsigned long long _preloadTriggerCount;
    unsigned long long _cacheHitCount;
    unsigned long long _cacheNotHitCount;
    unsigned long long _preloadHitCount;
    NSMutableSet *_preloadTriggerSet;
    NSString *_imageCropDetailMsg;
    long long _currentPlayVideoIndex;
    long long _lastPlayVideoIndexWhenDisappear;
    NSMutableDictionary *_exposedSubChannels;
    unsigned long long _gestureScrollDirection;
    NSMutableArray *_playedVideoBehavious;
    double _lastClickTime;
    BarrageWebView *_barrageWebview;
    unsigned long long _lastFeedsDisplayTriggerSeq;
    QQReadInJoySubsVideoCell *_enterVideoCell;
    QQReadInJoyVideoFullScreenNavigationTransition *_navigationTransition;
    UserSummaryNavigationBar *_userSummaryNavigationBar;
    double _lastScrollOffsetY;
    UIView *_emptyView;
    QQWebShareActionSheet *_shareActionSheet;
    UIButton *_launchVideoRecorder;
    QUIAlertPlusView *_unicomAlertView;
    QQReadInJoyHeaderNotifyBtn *_headerNotifyBtn;
    UIView *_tableViewCover;
    double _enterTimeStamp;
}

+ (id)getPGCSocializeHomePageUrlByUin:(unsigned long long)arg1;
+ (id)getSocialFeedsDetailUrlByFeedsId:(unsigned long long)arg1 feedsId:(unsigned long long)arg2 feedsType:(unsigned long long)arg3;
+ (id)getSocializeFriendDetailUrlByFeedsId:(unsigned long long)arg1;
+ (id)getSocializeHomePageUrlByUin:(unsigned long long)arg1;
+ (id)getSocializeMessageBoxPendantUrl;
+ (id)getSocializeMessageBoxUrl;
- (void)HiddenVideoBubbleTip;
- (void)ReportMainFeedsJump:(int)arg1 article:(id)arg2;
- (void)ReportPlayedTimeWithCell:(id)arg1;
- (void)ReportVideoPlayed:(id)arg1 time:(double)arg2;
- (void)TableviewcellClickReport:(id)arg1;
- (id)_addLastReadHereOffsetToPositions:(id)arg1 dataSource:(id)arg2;
- (id)_addPackOffsetToPositions:(id)arg1 dataSource:(id)arg2;
- (_Bool)_filterEnterSource;
- (id)_filterToOriginDataSourceWithDataSource:(id)arg1;
- (id)_getCacheKeyWithChannelId:(unsigned long long)arg1;
- (id)_getCachedFeedsPositionsWithChannelId:(unsigned long long)arg1;
- (id)_getCachedFeedsWithChannelId:(unsigned long long)arg1;
- (unsigned long long)_getLastReadHereIndexWithDataSource:(id)arg1;
- (id)_getPackLastsWith:(id)arg1;
- (void)_onceInitCache;
- (void)_printLogWithDataSource:(id)arg1 extendStr:(id)arg2;
- (void)_resetFeedsCacheWithChannelId:(unsigned long long)arg1 type:(unsigned long long)arg2 posArticles:(id)arg3;
- (void)_setCachedFeedsWithChannelId:(unsigned long long)arg1 feeds:(id)arg2;
- (id)_strWithIndexSet:(id)arg1;
- (id)_strWithNumberArray:(id)arg1;
- (void)addCoverIfNeed:(id)arg1;
- (void)addNotificationOnViewAppear;
- (void)addNotificationOnViewDidLoad;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedKeyWord:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)allInOneJump:(id)arg1;
- (void)autoPause;
- (void)autoPlayVideo:(id)arg1 containerRect:(struct CGRect)arg2;
- (void)autoResume;
- (void)ayncReport:(unsigned long long)arg1;
@property(nonatomic) _Bool backFromFullScreen; // @synthesize backFromFullScreen=_backFromFullScreen;
@property(retain, nonatomic) BarrageWebView *barrageWebview; // @synthesize barrageWebview=_barrageWebview;
- (void)becomeActive;
- (void)cacheArticle;
@property(nonatomic) unsigned long long cacheHitCount; // @synthesize cacheHitCount=_cacheHitCount;
@property(nonatomic) unsigned long long cacheNotHitCount; // @synthesize cacheNotHitCount=_cacheNotHitCount;
- (struct CGRect)canAutoPlayRect;
- (_Bool)canPlayVideoInCell;
@property(nonatomic) _Bool canPreLoadMoreFromSrv; // @synthesize canPreLoadMoreFromSrv=_canPreLoadMoreFromSrv;
- (_Bool)canShowAlert;
- (void)cancleAndHeddenVideoBubbleDelay;
- (void)cancleShowVideoBubbleDelay;
@property(retain, nonatomic) ReadInJoyChannel *channel; // @synthesize channel=_channel;
- (void)channelBarItemClicked:(id)arg1 itemModel:(id)arg2;
- (void)channelEntranceBtnTouchedFromCell:(id)arg1;
- (_Bool)checkCanRefresh:(long long)arg1 forceRefresh:(_Bool)arg2;
- (_Bool)checkNetNotiTimeOut;
- (void)configBBCircle;
- (void)controlCurrentVideoCellWithIsStart:(_Bool)arg1 isFullScreen:(_Bool)arg2;
@property(nonatomic) long long currentPlayVideoIndex; // @synthesize currentPlayVideoIndex=_currentPlayVideoIndex;
- (void)dataReportForShowChannel:(unsigned long long)arg1;
- (void)dealloc;
- (void)delayTableviewReloadData;
@property(nonatomic) id <QQReadInJoySubsDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)destinationFrame;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)drawerVCDidAppearWithNotification:(id)arg1;
- (void)drawerVCWillDisappearWithNotification:(id)arg1;
- (void)dropViewDidBeginRefreshing:(id)arg1;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) _Bool enterFullScreen; // @synthesize enterFullScreen=_enterFullScreen;
@property(nonatomic) _Bool enterItemFullScreen; // @synthesize enterItemFullScreen=_enterItemFullScreen;
@property(nonatomic) double enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) double enterTimeStamp; // @synthesize enterTimeStamp=_enterTimeStamp;
@property(retain, nonatomic) QQReadInJoySubsVideoCell *enterVideoCell; // @synthesize enterVideoCell=_enterVideoCell;
@property(nonatomic) _Bool exitFromFullscreen; // @synthesize exitFromFullscreen=_exitFromFullscreen;
- (_Bool)exposedSubChannel:(id)arg1 isDuplicatedAtIndexPath:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *exposedSubChannels; // @synthesize exposedSubChannels=_exposedSubChannels;
@property(nonatomic) unsigned int feedsDisplayTriggerNum; // @synthesize feedsDisplayTriggerNum=_feedsDisplayTriggerNum;
- (void)feedsHeaderExposeReport:(id)arg1;
- (void)fixTopBarFrame;
- (void)footerStopLoading;
- (_Bool)forceInsertArticle:(id)arg1;
- (_Bool)forceInsertArticleWithRecommedation:(id)arg1;
- (_Bool)forceInsertArticles:(id)arg1;
@property(nonatomic) double fullScreenVideoOffset; // @synthesize fullScreenVideoOffset=_fullScreenVideoOffset;
@property(nonatomic) unsigned long long gestureScrollDirection; // @synthesize gestureScrollDirection=_gestureScrollDirection;
- (id)getArticleFromCell:(id)arg1;
- (id)getArticleId;
- (id)getCurrentFrameDropUploadKey;
- (id)getCurrentIdList:(id)arg1;
- (id)getCurrentImage:(unsigned long long)arg1;
- (double)getCurrentTime:(unsigned long long)arg1;
- (struct CGRect)getDislikeButtonFrameByArticleIndex:(int)arg1;
- (id)getExposeTopicList;
- (id)getFirstArticle;
- (id)getFirstArticleTitle;
- (int)getFromReportType;
- (long long)getIndexInResult:(id)arg1 articleId:(unsigned long long)arg2;
- (id)getLastPlayingVideoCell;
- (int)getNetInfo;
- (int)getNetworkState;
- (id)getPackIndexArray:(id)arg1;
- (int)getPlayStatus;
- (id)getPlayingVideoCell;
- (long long)getReadInJoyArticleCount;
- (int)getTabSource;
- (id)getUinSetSringByArticle:(id)arg1;
- (unsigned long long)getVideoFrom;
- (id)getVideoId;
- (struct CGRect)getVideoPlayResposeRect:(struct CGRect)arg1;
- (void)gotoFullScreenAtCell:(id)arg1;
- (void)handleCommentViewEvent:(id)arg1 Object:(id)arg2;
- (void)handleComponentEvent:(id)arg1;
- (void)handleDisLikeButtonEventWithInfo:(id)arg1 Object:(id)arg2;
- (void)handleHotTopicHeaderViewEventWithInfo:(id)arg1 Object:(id)arg2;
- (void)handleInfoViewEventWithInfo:(id)arg1 Object:(id)arg2;
- (void)handleJsApiUpdateSocializeInfo:(id)arg1;
- (void)handleLargeContentViewEvent:(id)arg1 Object:(id)arg2;
- (void)handleLayoutConfigEvent:(id)arg1;
- (void)handleMSFNetworkApnStateNotification:(id)arg1;
- (void)handleMultiTopicViewEventWithInfo:(id)arg1 Object:(id)arg2;
- (void)handleNavBarItemClick:(_Bool)arg1;
- (void)handleScrollToTop;
- (void)handleScrollToTopFromKandianTab;
- (void)handleScrollToTopFromLastRead;
- (void)handleScrollToTopFromVideoTitle;
- (void)handleShowUnSubcribeTipsLogicWithData:(id)arg1;
- (void)handleSocialHeaderEventWithInfo:(id)arg1 Object:(id)arg2;
- (void)handleSocialOperatorEvent:(id)arg1 Object:(id)arg2;
- (void)handleSocialSocialSubHeaderEvent:(id)arg1 Object:(id)arg2;
- (void)handleSocialSubscribeNameAndSummaryViewEvent:(id)arg1 Object:(id)arg2;
- (void)handleSocialWrapperViewEvent:(id)arg1 Object:(id)arg2;
- (void)handleSubcribeHeaderEventWithInfo:(id)arg1 Object:(id)arg2;
- (void)handleTitleViewEvent:(id)arg1 Object:(id)arg2;
- (void)handleTopicFooterEventWithInfo:(id)arg1 Object:(id)arg2;
- (void)handleTopicHeaderEventWithInfo:(id)arg1 Object:(id)arg2;
- (void)handleTopicTagEventWithInfo:(id)arg1 Object:(id)arg2;
- (void)handleTopicViewEventWithInfo:(id)arg1 Object:(id)arg2;
- (void)handleVideoChatStart;
- (void)handleVideoReportForBehaviorWithCell:(id)arg1;
@property(nonatomic) _Bool hasGotoFullVC; // @synthesize hasGotoFullVC=_hasGotoFullVC;
- (_Bool)hasHeaderNotifyBtnShow;
- (_Bool)hasVideoPlaying;
- (void)headerNotiExposeReport;
@property(retain, nonatomic) QQReadInJoyHeaderNotifyBtn *headerNotifyBtn; // @synthesize headerNotifyBtn=_headerNotifyBtn;
- (void)hideHeaderNotifyBtn;
- (void)hideTableHeaderView;
- (_Bool)ignoreThisClick:(double)arg1;
@property(retain, nonatomic) NSString *imageCropDetailMsg; // @synthesize imageCropDetailMsg=_imageCropDetailMsg;
@property(nonatomic) _Bool inVideoChannel; // @synthesize inVideoChannel=_inVideoChannel;
- (void)increaseUpdateTimes;
- (void)independenceRefreshChannel:(_Bool)arg1 source:(long long)arg2 info:(id)arg3 forceRefresh:(_Bool)arg4;
- (id)indexPathsVideoToBePreloadAfterIndexPath:(long long)arg1;
- (id)init;
- (id)initWithViewSize:(struct CGSize)arg1;
- (void)insertAdFeedsWithChannelId:(unsigned long long)arg1;
- (void)insertAnimation;
@property(retain, nonatomic) ReadInJoyChannelArticle *insertChannelArticle; // @synthesize insertChannelArticle=_insertChannelArticle;
- (id)insertCustomizedFeedsWithChannelId:(unsigned long long)arg1 dataSource:(id)arg2;
@property(nonatomic) _Bool isEndRefreshToTop; // @synthesize isEndRefreshToTop=_isEndRefreshToTop;
@property(nonatomic) _Bool isForPageVC; // @synthesize isForPageVC=_isForPageVC;
@property(nonatomic, getter=isInsertingCell) _Bool insertingCell; // @synthesize insertingCell=_insertingCell;
- (_Bool)isIphone5SEarlyDevice;
- (_Bool)isMainVideoTab;
- (_Bool)isMainVideoTabFromMame;
- (_Bool)isMessageVideoTab;
- (_Bool)isNeedToShowHeaderNotifyBtn;
@property(nonatomic) _Bool isNoMoreData; // @synthesize isNoMoreData=_isNoMoreData;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(nonatomic) _Bool isPullRefresh; // @synthesize isPullRefresh=_isPullRefresh;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) _Bool isShowAlert; // @synthesize isShowAlert=_isShowAlert;
- (_Bool)isSubsVideoChannel;
- (_Bool)isSubscribeTabChannel;
- (_Bool)isVideoChannel;
- (_Bool)isVideoTabChannel;
@property(nonatomic) _Bool isViewAppearFirst; // @synthesize isViewAppearFirst=_isViewAppearFirst;
- (void)jumToSingleViewWithChannelID:(unsigned int)arg1 channelName:(id)arg2 channelType:(unsigned int)arg3 insertChannelArticle:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)jumpByTopicUrl:(id)arg1;
- (void)jumpToDetailUrlWithDic:(id)arg1;
- (void)jumpToPACardWithUin:(id)arg1;
- (void)jumpToSingleView:(unsigned int)arg1 channelName:(id)arg2 channelType:(unsigned int)arg3;
- (_Bool)jumpToVideoChannel:(id)arg1;
- (_Bool)jumpToVideoChannelResult:(id)arg1;
@property(nonatomic) double lastClickTime; // @synthesize lastClickTime=_lastClickTime;
@property(nonatomic) unsigned long long lastFeedsDisplayTriggerSeq; // @synthesize lastFeedsDisplayTriggerSeq=_lastFeedsDisplayTriggerSeq;
@property(nonatomic) int lastNetworkState; // @synthesize lastNetworkState=_lastNetworkState;
@property(nonatomic) long long lastPlayVideoIndexWhenDisappear; // @synthesize lastPlayVideoIndexWhenDisappear=_lastPlayVideoIndexWhenDisappear;
@property(retain, nonatomic) QQReadInJoySubsVideoCell *lastReportCellInVideoChannel; // @synthesize lastReportCellInVideoChannel=_lastReportCellInVideoChannel;
@property(nonatomic) double lastScrollOffsetY; // @synthesize lastScrollOffsetY=_lastScrollOffsetY;
- (void)launchFullscreenVC:(id)arg1 selectedIndex:(id)arg2;
@property(retain, nonatomic) UIButton *launchVideoRecorder; // @synthesize launchVideoRecorder=_launchVideoRecorder;
- (void)loadMoreData:(id)arg1;
- (void)loadOldData:(long long)arg1 count:(long long)arg2 refreshTime:(double)arg3;
- (void)loadView;
@property(nonatomic) double loadtime; // @synthesize loadtime=_loadtime;
- (void)manageVideoAutoPlayAt:(id)arg1;
@property(nonatomic) id <ReadInJoyMessageDelegate> messageDelegate; // @synthesize messageDelegate=_messageDelegate;
- (id)navbarRightBtn;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
@property(retain, nonatomic) QQReadInJoyVideoFullScreenNavigationTransition *navigationTransition; // @synthesize navigationTransition=_navigationTransition;
@property(nonatomic) _Bool needDelayReloadData; // @synthesize needDelayReloadData=_needDelayReloadData;
- (_Bool)needMarkArticleAsRead;
- (_Bool)needOptimizeForLowerDevice;
@property(nonatomic) _Bool needRefreshTip; // @synthesize needRefreshTip=_needRefreshTip;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAvatarClickAtCell:(id)arg1 withUin:(id)arg2;
- (void)onBiuViewControllerClose;
- (void)onClickFeedbackWithArticle:(id)arg1;
- (void)onClickFollow:(id)arg1;
- (void)onClickNavBarRightButton;
- (void)onClickTitleBar;
- (void)onDislikeArticleWithFlagArray:(id)arg1;
- (void)onDislikeBtnClickWithCell:(id)arg1 BtnFrame:(struct CGRect)arg2 ImgSize:(struct CGSize)arg3;
- (void)onDislikeDialogDismiss;
- (void)onDislikeDialogShow;
- (void)onFooterClickReport:(id)arg1;
- (void)onForceOffLineNotify;
- (void)onLaunchRecorder;
- (void)onMultiBiuSend:(_Bool)arg1 feedsId:(unsigned long long)arg2 articleModel:(id)arg3;
- (void)onNatureSizeLoaded:(id)arg1 videoSize:(struct CGSize)arg2;
- (void)onPlayVideoErrorWithErrorCode:(id)arg1 ErrorCode:(long long)arg2;
- (void)onPlayerStateButtonClicked:(id)arg1;
- (void)onReadInJoySubsVideoCellBiuClick:(id)arg1;
- (void)onReadInJoySubsVideoCellLabelClick:(id)arg1 channelInfo:(id)arg2;
- (void)onReadInJoySubsVideoCellVideoViewClick:(id)arg1;
- (void)onStartPlayVideo:(id)arg1;
- (void)onSubcribeHeaderClickWith:(id)arg1 inCell:(id)arg2;
- (void)onTopicFooterClickWith:(id)arg1 url:(id)arg2 inCell:(id)arg3;
- (void)onTopicHeaderClickReport:(id)arg1;
- (void)onTopicHeaderClickWith:(id)arg1 url:(id)arg2 inCell:(id)arg3;
- (void)onTouchHeaderNotifyBtn:(id)arg1;
- (void)onVideoNeedAutoStart;
- (void)onVideoNeedPause;
- (void)onVideoNeedStop;
@property(nonatomic) unsigned int operationBitmap; // @synthesize operationBitmap=_operationBitmap;
@property(nonatomic) unsigned int parentChannelId; // @synthesize parentChannelId=_parentChannelId;
@property(nonatomic) int pbArticleSource; // @synthesize pbArticleSource=_pbArticleSource;
@property(retain, nonatomic) NSMutableArray *playedVideoBehavious; // @synthesize playedVideoBehavious=_playedVideoBehavious;
@property(retain, nonatomic) NSIndexPath *playingCellIndexPath; // @synthesize playingCellIndexPath=_playingCellIndexPath;
@property(nonatomic) _Bool preLoadSrvError; // @synthesize preLoadSrvError=_preLoadSrvError;
- (void)preProcessDataSources:(id)arg1;
- (void)preloadArticleContent;
@property(nonatomic) unsigned long long preloadHitCount; // @synthesize preloadHitCount=_preloadHitCount;
@property(nonatomic) long long preloadReportAnchor; // @synthesize preloadReportAnchor=_preloadReportAnchor;
- (void)preloadSocialWebContent:(id)arg1;
@property(nonatomic) unsigned long long preloadTriggerCount; // @synthesize preloadTriggerCount=_preloadTriggerCount;
@property(retain, nonatomic) NSMutableSet *preloadTriggerSet; // @synthesize preloadTriggerSet=_preloadTriggerSet;
- (void)printTopArticlesWithMaxIndex:(int)arg1;
- (void)rePort:(id)arg1 R3:(unsigned long long)arg2 R4:(id)arg3;
- (void)rePort:(id)arg1 R3:(unsigned long long)arg2 R4:(id)arg3 R5:(id)arg4;
- (void)rePortMigrateTo1160:(id)arg1 R3:(unsigned long long)arg2 R4:(id)arg3;
- (void)rePortMigrateTo1160:(id)arg1 R3:(unsigned long long)arg2 R4:(id)arg3 R5:(id)arg4;
- (void)readInJoySubsVideoCell:(id)arg1 didChangeState:(int)arg2;
- (void)readInJoySubsVideoCell:(id)arg1 shareWithChannelArticle:(id)arg2;
- (void)readloadDataForCustomizedFeeds;
- (void)refreshChannel:(_Bool)arg1 source:(long long)arg2 info:(id)arg3;
- (void)refreshChannel:(_Bool)arg1 source:(long long)arg2 info:(id)arg3 forceRefresh:(_Bool)arg4;
- (void)refreshChannelAdList;
- (void)refreshFinish:(id)arg1;
@property(retain, nonatomic) NSDictionary *refreshInfoFromClickKandianTab; // @synthesize refreshInfoFromClickKandianTab=_refreshInfoFromClickKandianTab;
- (void)refreshResultViewInit;
- (void)refreshTopicUpdateInfo:(unsigned int)arg1 topicInfo:(id)arg2;
@property(nonatomic) _Bool refreshWhenNoData; // @synthesize refreshWhenNoData=_refreshWhenNoData;
- (void)reloadData:(id)arg1 fromCache:(_Bool)arg2;
- (id)removeDumplicates:(id)arg1 isCached:(_Bool)arg2;
- (void)removeNotificationOnDealloc;
- (void)removeNotificationOnViewDisappear;
- (void)report7408:(id)arg1 articleInfo:(id)arg2;
- (void)report741XwithCell:(id)arg1 index:(unsigned long long)arg2;
- (void)report7BFE:(_Bool)arg1 channelID:(unsigned int)arg2;
- (void)report7C41;
- (void)report7DBBwithCell:(id)arg1;
- (void)reportAdExposure;
- (void)reportArticleExpose:(unsigned long long)arg1;
- (void)reportBehaviousSequence;
- (void)reportDislikeClickCountWithArticle:(id)arg1;
- (void)reportDislikeConfirmCount:(int)arg1 article:(id)arg2;
- (void)reportMessageReadinjoyVideoExpose;
- (void)reportTo1160:(id)arg1 R2:(id)arg2 R3:(id)arg3 R5:(id)arg4;
- (void)reportVideoChannelfeedsExpose;
- (void)requestUpdateSocializeFeedsInfo;
- (void)resetCustomizedFeedsCacheWithChannelId:(unsigned long long)arg1 customizedFeedsType:(unsigned long long)arg2;
- (void)resignActive;
- (id)reverseCurrentIdList:(id)arg1;
- (id)screenImage;
- (void)scrollToOffset:(struct CGPoint)arg1;
- (void)scrollToTop;
- (void)scrollToTopWithAnimationFromBtnType:(long long)arg1;
@property(nonatomic) id <ReadInJoyScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(retain, nonatomic) NSArray *searchChannelList; // @synthesize searchChannelList=_searchChannelList;
- (void)setCustomNavbarStyle;
- (void)setNavbarStyle;
- (void)setRefreshResultViewTitle:(id)arg1;
- (void)setScrollToTop:(_Bool)arg1;
@property(retain, nonatomic) QQWebShareActionSheet *shareActionSheet; // @synthesize shareActionSheet=_shareActionSheet;
@property(nonatomic) _Bool showTableHeaderView; // @synthesize showTableHeaderView=_showTableHeaderView;
@property(retain, nonatomic) QQReadInJoySubsChannelHeader *subsChannelHeaderView; // @synthesize subsChannelHeaderView=_subsChannelHeaderView;
@property(nonatomic) long long subview_channel56_source; // @synthesize subview_channel56_source=_subview_channel56_source;
@property(nonatomic) long long subview_source; // @synthesize subview_source=_subview_source;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *tableViewCover; // @synthesize tableViewCover=_tableViewCover;
@property(retain, nonatomic) UITapGestureRecognizer *tapToTopRegnizer; // @synthesize tapToTopRegnizer=_tapToTopRegnizer;
- (void)setTitleOnFollowButton:(_Bool)arg1;
@property(retain, nonatomic) QUIAlertPlusView *unicomAlertView; // @synthesize unicomAlertView=_unicomAlertView;
@property(retain, nonatomic) UserSummaryNavigationBar *userSummaryNavigationBar; // @synthesize userSummaryNavigationBar=_userSummaryNavigationBar;
- (void)shareWithFriend;
- (void)shareWithQZone;
- (void)shareWithSinaWeibo;
- (_Bool)shouldPlayVideo:(id)arg1 player:(id)arg2;
- (void)showHeaderNotifyBtnWithUinStr:(id)arg1 title:(id)arg2 schema:(id)arg3;
- (void)showNetAlert;
- (void)showRefreshResult:(id)arg1;
- (void)showRefreshTips:(long long)arg1;
- (_Bool)showUnsubcribeTipsWithFrame:(struct CGRect)arg1 feedsIndex:(int)arg2;
- (void)socialEnterDetialViewReport:(id)arg1 puin:(unsigned long long)arg2 toUin:(unsigned long long)arg3 entryMode:(int)arg4;
- (void)socializeSendLike:(int)arg1 article:(id)arg2 retryCount:(int)arg3;
- (id)sourceView;
- (struct CGRect)sourceViewFrame;
- (_Bool)startPlayVideo:(id)arg1;
- (void)startPlayVideoWithCell:(id)arg1;
- (void)startVideoPrealoadTasksAtIndexPaths:(id)arg1;
- (void)switchCityEntranceClicked;
- (void)tableFootLoadingViewDidTriggerLoading:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 prefetchingRowsAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableViewCell:(id)arg1 itemFullScreenWillActive:(_Bool)arg2;
- (void)tableViewCell:(id)arg1 onStopPlayVideo:(double)arg2 currentImage:(id)arg3 articleID:(unsigned long long)arg4;
- (void)tableViewCell:(id)arg1 playerView:(id)arg2 parentView:(id)arg3 onEnterFullScreen:(_Bool)arg4;
- (void)tableViewCell:(id)arg1 willDisplaySubChannelLabel:(id)arg2;
- (void)tableviewReloadData;
- (void)tapCustomNavbar:(id)arg1;
- (void)updateCustomizedFeedsCacheWithChannelId:(unsigned long long)arg1 removedIndexSet:(id)arg2 dataSource:(id)arg3;
- (void)updateDataSource:(id)arg1 oldResult:(id)arg2 shouldShowTips:(_Bool)arg3;
- (void)updateFollowStatus;
- (_Bool)updateSocializeFeedsInfoToDb:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateSubsChannelHeader:(id)arg1;
- (void)updateSubsChannelHeaderImg:(id)arg1;
- (void)updateTableViewWithArray:(id)arg1;
- (unsigned int)updateTimes;
- (struct CGRect)videoRectToParent:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidAppearEx;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidDisappearEx;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewEndScrollAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillDisappearEx;
- (void)viewWillScrollDisappear;
- (void)volumeChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

