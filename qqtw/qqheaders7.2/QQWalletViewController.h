//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWalletBaseViewController.h"

#import "QQWalletHomePageCellDelegate.h"
#import "QQWalletImageDownloaderDelegate.h"
#import "QQWalletPopBoxViewDelegate.h"
#import "QQWalletPullAnimationViewDelegate.h"
#import "SimpleAlertViewDelegate.h"

@class NSArray, NSDictionary, NSError, NSMutableArray, NSString, QQWalletDatas, QQWalletDoubleTitleButton, QQWalletGetHomePageRsp, QQWalletImageDownloader, QQWalletPopBoxView, QQWalletPopWndInfo, QQWalletPullAnimationView, QQWalletTenpayFreezeData, QQWalletVacAuthCodeManager, UIEnteringView, UIImageView, UIView, ValueAddedServiceAppInfo;

@interface QQWalletViewController : QQWalletBaseViewController <QQWalletPullAnimationViewDelegate, SimpleAlertViewDelegate, QQWalletImageDownloaderDelegate, QQWalletPopBoxViewDelegate, QQWalletHomePageCellDelegate>
{
    long long redPointId;
    long long redPointSubId;
    _Bool cellsAnimationPlayed;
    UIView *bottomView;
    QQWalletDoubleTitleButton *accountButton;
    QQWalletDoubleTitleButton *payCodeButton;
    QQWalletDoubleTitleButton *couponButton;
    UIEnteringView *blueLoading;
    UIView *blueLoadingShade;
    QQWalletPullAnimationView *_pullView;
    UIImageView *rightRedPointView;
    ValueAddedServiceAppInfo *rightBtnRedPointInfo;
    QQWalletGetHomePageRsp *homePageData;
    QQWalletDatas *walletData;
    int userType;
    int userAttr;
    QQWalletTenpayFreezeData *freezeData;
    NSDictionary *rpTipsData;
    NSArray *banners;
    _Bool isViewDidAppear;
    _Bool needReloadService;
    _Bool rightFakeRedPointAvailable;
    QQWalletImageDownloader *imageDownloader;
    QQWalletVacAuthCodeManager *_authCodeManager;
    double _viewDidLoadTime;
    QQWalletPopBoxView *_popupView;
    NSMutableArray *_videoPopBoxDownloadImages;
    _Bool _recommendLoaded;
    _Bool _tenpayLoaded;
    NSError *_reportError;
    _Bool _stopChangeNavbar;
    double _longitude;
    double _latitude;
    _Bool _delayShowBalanceReady;
    _Bool _recommendLoadedFromServer;
    QQWalletPopWndInfo *_realNamePopWndInfo;
    NSMutableArray *appExposureArray;
    NSMutableArray *unExposureCellTags;
}

- (void).cxx_destruct;
- (void)QQWalletServiceWillStart:(id)arg1;
- (void)_layoutButtonExtendRedPointView:(id)arg1 layoutViews:(id)arg2 redPath:(id)arg3;
- (void)accountButtonDidTap:(id)arg1;
- (void)addCornerViewToBottomButton:(id)arg1 eventType:(long long)arg2 cornerURL:(id)arg3;
- (void)applicationWillEnterForeground;
- (void)applicationWillTerminate;
- (void)barrierShowMarket:(id)arg1 market:(id)arg2 redPath:(id)arg3 canShow:(_Bool)arg4;
- (_Bool)blueRayLoadingIsCooling;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (id)buttonWithImage:(id)arg1 title:(id)arg2 withAction:(SEL)arg3;
- (void)checkRecommendServicesUseCache:(_Bool)arg1;
- (void)checkTenpayData;
- (void)configPullAnimationViewIfNeeded:(id)arg1;
- (void)couponButtonDidTap:(id)arg1;
- (void)dealloc;
- (void)didTapServiceGridCell:(id)arg1 atSection:(long long)arg2 index:(long long)arg3;
- (void)downloadPopupImage:(id)arg1;
- (void)downloadPopupVideoImage:(id)arg1;
- (void)downloader:(id)arg1 didDownloadImage:(id)arg2 forURL:(id)arg3;
- (void)downloader:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3;
- (void)endReportCheck;
- (void)gotoPayCodeView;
- (void)handleCouponButtonNumRedPoint;
- (void)handleRequestError:(id)arg1;
- (void)handleUpdateLocationNote:(id)arg1;
- (void)handleWalletPopupViewClosedNotification:(id)arg1;
- (void)hiddenBottomButtonCorner:(id)arg1;
- (id)homePageCellForTableView:(id)arg1;
- (id)init;
- (void)invalidate2StepRedPoint;
- (_Bool)isSupportRightDragToGoBack;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)parseQQWalletRecommend:(id)arg1 source:(unsigned long long)arg2;
- (void)payCodeButtonDidTap:(id)arg1;
- (void)popBoxView:(id)arg1 enterDetailURL:(id)arg2;
- (void)popBoxViewCancel:(id)arg1;
- (void)popBoxViewClicked:(id)arg1;
- (void)popToRootVC;
- (void)pullAnimationTrigger:(id)arg1;
- (void)recordExposureApps;
- (void)reloadServies;
- (void)removeCornerFromButton:(id)arg1;
- (void)reportAppExposure;
- (void)requestAndParseRedPointInfo;
- (void)requestAndParseRightButtonRedPointInfo;
- (void)requestAndParseTipsRedPointInfo;
- (double)scrollDistance;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setBottomViewCornerRadiiProgress:(double)arg1;
- (void)setNavigationBarTranslucent:(_Bool)arg1;
- (void)showAccountMarketIfNeed;
- (void)showBalanceIfNeeded;
- (void)showBottomButtonFakeRedPointIfNeed;
- (void)showCouponButton:(_Bool)arg1;
- (void)showCouponButtonIfNeed;
- (void)showCouponMarketIcon;
- (void)showGuaranteeIconIfNeed;
- (void)showMyDeals;
- (void)showPayCodeButton;
- (void)showPayCodeMarketAndSubTitle;
- (void)showPersonalCenterRedPointIfNeeded;
- (void)showPopupViewWithType:(unsigned long long)arg1;
- (void)showPopupWebView:(id)arg1 fromPullAnimation:(id)arg2;
- (void)showPullAnimationGuideIfNeed;
- (void)showTipsIfNeeded;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)walletBannerDidShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
