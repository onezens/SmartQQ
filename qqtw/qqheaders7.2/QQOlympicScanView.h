//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ARBinhaiViewDelegate.h"
#import "ARDelegateForMask.h"
#import "AREngineDelegate.h"
#import "ARStarWebDelegate.h"
#import "HQScanViewUIDelegate.h"
#import "QREHongbaoViewDelegate.h"
#import "QTreasureResultDelegate.h"
#import "SuperCellResultDelegate.h"

@class ARBinhaiView, AREngine, ARLoadingView, ARMapItemInfo, ARStarFaceView, HQScanView, NSString, NSTimer, O2OArPoiModel, QQARCommonConfigModel, QQARFeatureModel, QQARScanModel, QQProgressBar, QQWebViewController, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface QQOlympicScanView : UIView <AREngineDelegate, ARDelegateForMask, QREHongbaoViewDelegate, SuperCellResultDelegate, QTreasureResultDelegate, HQScanViewUIDelegate, ARStarWebDelegate, ARBinhaiViewDelegate>
{
    HQScanView *_scanView;
    AREngine *_arEngine;
    UIButton *_firstLabel;
    UIButton *_whatBtn;
    unsigned int _torchId;
    _Bool _isFirstAnimationIn;
    _Bool _isAnimationFinished;
    _Bool _isAnimationAllFinished;
    int _arResouceDownloadState;
    QQProgressBar *_loadBar;
    UILabel *_loadLabel;
    UIView *_loadFailedView;
    UIView *_loadingView;
    _Bool _isO2OAr;
    O2OArPoiModel *_o2oPoiModel;
    ARLoadingView *_arCloudLoadingView;
    UIView *_arCloudLoadingViewMask;
    UILabel *_arCloudLoadingLabel;
    double _scanEndY;
    double _cameraEdgeEnd;
    UIView *_awardView;
    _Bool _inProcessingAward;
    _Bool _isInTenpayView;
    ARStarFaceView *_starFaceView;
    _Bool _pauseAr;
    _Bool _startAr;
    QQARCommonConfigModel *_backupCommonConfig;
    QQWebViewController *_webViewVC;
    NSString *_webCallback;
    _Bool _webViewNeedShow;
    _Bool _webViewPreLoaded;
    NSTimer *_transparentWebviewRenderReadyTimer;
    UIButton *_downloadButton;
    long long _retryCount;
    _Bool _isARStarPresentWeb;
    _Bool _arStarWebEnterBackground;
    UIButton *_feedbackBtn;
    UIView *_interactView;
    _Bool _vcDealloced;
    _Bool _isShown;
    int _hasSuccessRecg;
    UIImageView *_wordingBg;
    id <ARDelegateForMask> _arDelegate;
    QQARFeatureModel *_o2oArFeature;
    ARBinhaiView *_binhaiView;
    NSString *_whatUrl;
    QQARScanModel *_arScanModel;
    QQARFeatureModel *_arFeatureModel;
    UILabel *_loadingLabel;
    UIActivityIndicatorView *_activeIndicator;
    ARMapItemInfo *_item;
    QQARFeatureModel *_tempArFeatureModel;
    struct CGRect _activeRect;
}

+ (double)getMaskViewHeight:(_Bool)arg1;
- (void).cxx_destruct;
- (void)OpenPOIRequest:(id)arg1 feature:(id)arg2 poiModel:(id)arg3;
@property(retain, nonatomic) UIActivityIndicatorView *activeIndicator; // @synthesize activeIndicator=_activeIndicator;
@property(nonatomic) struct CGRect activeRect; // @synthesize activeRect=_activeRect;
- (void)addDownloadNotification;
- (void)addPreparationUI;
- (void)addScanView:(struct CGRect)arg1 loadFeature:(_Bool)arg2 completeCallBack:(CDUnknownBlockType)arg3;
- (void)addTipLabel;
- (void)alertConfirmAction;
- (void)arBinhaiFound:(id)arg1;
@property(nonatomic) __weak id <ARDelegateForMask> arDelegate; // @synthesize arDelegate=_arDelegate;
@property(retain, nonatomic) AREngine *arEngine; // @synthesize arEngine=_arEngine;
@property(retain, nonatomic) QQARFeatureModel *arFeatureModel; // @synthesize arFeatureModel=_arFeatureModel;
@property(retain, nonatomic) QQARScanModel *arScanModel; // @synthesize arScanModel=_arScanModel;
@property(retain, nonatomic) ARBinhaiView *binhaiView; // @synthesize binhaiView=_binhaiView;
- (void)clearARCloudLoadingView;
- (void)clearAllResource;
- (void)clearAwardRecord;
- (void)clearGLResource;
- (void)clickFeedback;
- (void)closeHongbao;
- (void)closeQTreasureResultView:(id)arg1;
- (void)closeSuperCellView:(id)arg1;
- (void)closeTransparentWebview;
- (id)createFullScreenTransparentWeb;
- (void)dealloc;
- (void)didBecomeActive;
- (void)didEnterBackground;
- (void)didEnterForeground;
- (void)didTakeScreenShot;
- (void)doInitData;
- (void)downloadButtonClick:(id)arg1;
- (void)gotoARStarWebView:(id)arg1 isPush:(_Bool)arg2;
- (void)gotoActivityWebViewController;
- (void)gotoRestartAR;
- (void)gotoStopARLoading;
- (void)gotoTipController;
- (void)handleSingleTap:(id)arg1;
@property(nonatomic) int hasSuccessRecg; // @synthesize hasSuccessRecg=_hasSuccessRecg;
- (void)hideARCloudLoadingView;
- (void)hidePreparationUI;
- (void)initDownloadButton;
- (void)initLoadViewMask;
- (void)initTipLable;
- (void)initTips;
- (id)initWithFrame:(struct CGRect)arg1 HintRect:(struct CGRect)arg2 o2oModel:(id)arg3 delegate:(id)arg4;
- (_Bool)isEmptyString:(id)arg1;
@property(nonatomic) _Bool isShown; // @synthesize isShown=_isShown;
@property(retain, nonatomic) ARMapItemInfo *item; // @synthesize item=_item;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
- (void)modifyWordingBg:(_Bool)arg1;
- (void)modifyWordingBg:(int)arg1 str1:(id)arg2 str2:(id)arg3 url:(id)arg4;
@property(retain, nonatomic) QQARFeatureModel *o2oArFeature; // @synthesize o2oArFeature=_o2oArFeature;
- (void)onARCloudDownloadingFail:(id)arg1;
- (void)onARCloudDownloadingSuccess:(id)arg1;
- (void)onARRenderStateChanged:(long long)arg1 recogType:(int)arg2 stateData:(id)arg3;
- (void)onARResourceDownloadFailed;
- (void)onARResourceDownloadProgress:(id)arg1;
- (void)onARResourceDownloadStart:(id)arg1;
- (void)onARResourceDownloadSucceed;
- (void)onARScanViewUpdate:(id)arg1;
- (void)onARStateChanged:(long long)arg1 recogType:(int)arg2 stateData:(id)arg3;
- (void)onAnimationEndWithRecogType:(int)arg1 stateData:(id)arg2;
- (void)onAnimationStartWithRecogType:(int)arg1 stateData:(id)arg2;
- (void)onDrawScanLine:(float)arg1;
- (void)onHideARCloudLoadingProgress:(id)arg1;
- (void)onLost;
- (void)onMarkerExtProcessRecg:(id)arg1;
- (void)onNetReachabilityDidChange:(id)arg1;
- (void)onOnlyRecogMode:(id)arg1;
- (void)onQQARCameraChanged:(long long)arg1 fromCamera:(id)arg2;
- (void)onRecg:(id)arg1;
- (void)onRunARKit;
- (void)onShowARCloudLoadingProgress:(id)arg1;
- (void)onShowTransparentWebview;
- (void)onTransparentWebviewRenderReady:(id)arg1;
- (void)onUpdateARCloudLoadingProgress:(id)arg1;
- (void)onlyRecogModeEnterSuccess;
- (void)openHongbaoJumpToWallet:(id)arg1;
- (void)openWebView:(id)arg1 webViewStyle:(long long)arg2 stackStyle:(int)arg3;
- (void)pauseAr;
- (void)pauseArExceptCamera;
- (void)removeDownloadNotification;
- (void)removeFeedbackBtn;
- (void)reportARPerformanceEvent;
- (void)requestAward:(id)arg1;
- (void)restoreARCommonConfig;
- (void)resumeAr;
@property(retain, nonatomic) HQScanView *scanView; // @synthesize scanView=_scanView;
- (void)setBtnCanClick:(_Bool)arg1 withTitle:(id)arg2;
- (void)setFeedbackBtnHidden:(_Bool)arg1;
@property(retain, nonatomic) QQARFeatureModel *tempArFeatureModel; // @synthesize tempArFeatureModel=_tempArFeatureModel;
@property(nonatomic) _Bool vcDealloced; // @synthesize vcDealloced=_vcDealloced;
@property(retain, nonatomic) QQWebViewController *webViewVC; // @synthesize webViewVC=_webViewVC;
@property(retain, nonatomic) NSString *whatUrl; // @synthesize whatUrl=_whatUrl;
@property(retain, nonatomic) UIImageView *wordingBg; // @synthesize wordingBg=_wordingBg;
- (void)showARCloudLoadingView;
- (void)showARLoadFailed;
- (void)showAwardView:(id)arg1 feature:(id)arg2;
- (_Bool)showLbsUnAuthTips;
- (void)showPreparationUI;
- (void)startAr;
- (void)startTransparentWebviewRenderReadyTimer;
- (void)stopArAndMusic;
- (void)stopArAndMusicButKeepCamera;
- (void)stopTransparentWebviewRenderReadyTimer;
- (void)transparentWebviewRenderReadyLogic;
- (void)updateStarFaceViewWithState:(long long)arg1 andData:(id)arg2;
- (void)viewDidAppear;
- (void)willResignActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

