//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQP2PAVChatViewController.h"

#import "AVFunChatMgrDelegate.h"
#import "NearbyAVControlPanelDelegate.h"
#import "NearbyAVTopControlbarDelegate.h"
#import "NearbyGiftSelectionViewDelegate.h"
#import "NearbyVideoChatMatchViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "VideoMatchDelegate.h"

@class AllDurationRequest, NSDictionary, NSString, NSTimer, NearbyAVControlPanel, NearbyGiftSelectionView, NearbyVideoChatMatchView, NearbyVideoChatReportLogic, QQAVTipsView, UILabel, VideoMatchManager;

@interface NearbyVideoChatViewController : QQP2PAVChatViewController <NearbyAVControlPanelDelegate, NearbyVideoChatMatchViewDelegate, NearbyAVTopControlbarDelegate, VideoMatchDelegate, UIAlertViewDelegate, NearbyGiftSelectionViewDelegate, AVFunChatMgrDelegate>
{
    NearbyVideoChatMatchView *_matchPanel;
    _Bool _isMatching;
    _Bool _isCheckLBSAuthority;
    _Bool _isCheckNetState;
    NearbyVideoChatReportLogic *_reportLogic;
    QQAVTipsView *_timeTips;
    _Bool _isCloseAcitonIng;
    _Bool _matchWhenFromCharge;
    _Bool _hasReportUnOpenForNoMicro;
    unsigned int _lastHeartBeatInterval;
    int _currentRematchType;
    NearbyAVControlPanel *_nearbyControlPanel;
    NearbyGiftSelectionView *_giftView;
    NSDictionary *_currentMatchPlayInfoDic;
    VideoMatchManager *_matchPanelManager;
    VideoMatchManager *_sendHeartBeatManager;
    AllDurationRequest *_allDurationRequest;
    NSTimer *_heartBeatTimer;
    double _startTime;
    double _videoStartTime;
    UILabel *_matchDeductGoldBeamTip;
    double _lastEnterBackgroundTime;
}

- (void).cxx_destruct;
- (void)acceptNearbyAVRequest;
- (void)addSelfLocalView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) AllDurationRequest *allDurationRequest; // @synthesize allDurationRequest=_allDurationRequest;
- (id)cameraWithPosition:(long long)arg1;
- (void)cancelRequest;
- (void)changeChaterMatchingExceptionHandle;
- (void)changeChaterMatchingManual;
- (void)changeChaterMatchingWithReStart;
- (void)changeMatchOnVideoForTimeTooLong;
- (void)changeMatchOnVideoForTimeout;
- (void)changeMatchOnVideoManual;
- (void)changeReMatchWithType:(int)arg1;
- (void)changeToBigViewWithUin:(unsigned long long)arg1 withType:(int)arg2;
- (void)changeToSmallViewWithUin:(unsigned long long)arg1 withType:(int)arg2;
- (void)checkLBSAuthority;
- (void)checkMicroAuthority;
- (void)checkNetWorkRate;
- (void)checkNetWorkState;
- (void)clearGLViewInfoWithUin:(unsigned long long)arg1;
- (void)clearHeartBeat;
- (void)clearInfoWhenVideoFinish;
- (void)closeActionOnMatch;
- (void)closeActionOnVideo;
- (void)closeMatchPanel;
- (void)closeVideo;
- (void)closedByFriBusy;
- (void)closedByFriNoSupport;
- (void)closedByFriReject;
- (void)closedByOtherErrs;
- (void)closedBySecurity;
- (void)closedBySwitchFail:(id)arg1;
- (void)closedByTimeout;
- (void)closedOnRunning;
@property(retain, nonatomic) NSDictionary *currentMatchPlayInfoDic; // @synthesize currentMatchPlayInfoDic=_currentMatchPlayInfoDic;
@property(nonatomic) int currentRematchType; // @synthesize currentRematchType=_currentRematchType;
- (void)deductGoldBeanForMatch;
- (void)detectFaceFeatureWithFrame:(char *)arg1;
- (void)didExitMatchVideoChater;
- (void)didGetMatchVideoRequestor:(id)arg1;
- (void)didReMatchVideoChater:(id)arg1;
- (void)didSendHeartBeat:(id)arg1;
- (void)didStartMatchVideoChater:(id)arg1;
- (void)displayVideoFrame:(id)arg1;
- (void)enterBackground:(id)arg1;
- (void)enterForeground:(id)arg1;
- (void)exitVideoToStartUp;
- (void)forceSuspend;
- (int)getDeviceState:(int)arg1;
- (id)getGLViewForUin:(id)arg1;
- (id)getKey:(unsigned long long)arg1 withType:(int)arg2;
- (id)getShowPanelWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NearbyGiftSelectionView *giftView; // @synthesize giftView=_giftView;
- (void)giftViewDidHidden;
- (void)handleConnected:(id)arg1;
- (void)handleHeartBeatSendTimer:(id)arg1;
- (void)handleMatchResult:(id)arg1;
- (void)handlePauseVideo:(id)arg1;
- (void)handleQuiteVideoChat;
- (void)handleResumeVideo:(id)arg1;
@property(nonatomic) _Bool hasReportUnOpenForNoMicro; // @synthesize hasReportUnOpenForNoMicro=_hasReportUnOpenForNoMicro;
@property(retain, nonatomic) NSTimer *heartBeatTimer; // @synthesize heartBeatTimer=_heartBeatTimer;
- (void)hiddenFilterSelectView;
- (void)hiddenGestureTipsView;
- (void)hideMatchPanel;
- (void)initInterface;
- (void)initNotification;
- (void)initVideo;
- (id)initWithChatModel:(id)arg1;
- (void)innerChangeToBigViewEnd;
- (void)innerChangeToBigViewWithUin:(unsigned long long)arg1 withType:(int)arg2;
- (_Bool)isCloseActioning;
@property(nonatomic) double lastEnterBackgroundTime; // @synthesize lastEnterBackgroundTime=_lastEnterBackgroundTime;
@property(nonatomic) unsigned int lastHeartBeatInterval; // @synthesize lastHeartBeatInterval=_lastHeartBeatInterval;
- (id)loadBackgroundImage;
- (void)loadControlPanel;
- (void)loadMatchPanel;
- (void)loadVideoChatAuthority;
@property(retain, nonatomic) UILabel *matchDeductGoldBeamTip; // @synthesize matchDeductGoldBeamTip=_matchDeductGoldBeamTip;
@property(retain, nonatomic) VideoMatchManager *matchPanelManager; // @synthesize matchPanelManager=_matchPanelManager;
- (void)nearbyAVNetChange:(id)arg1;
- (void)nearbyAvNetChangeOnMain:(id)arg1;
@property(retain, nonatomic) NearbyAVControlPanel *nearbyControlPanel; // @synthesize nearbyControlPanel=_nearbyControlPanel;
- (void)nearbyVideoGiftReportWithOpName:(id)arg1 withSource:(id)arg2;
- (void)onChatButtonClick;
- (void)onCloseAction;
- (void)onCloseVideoChat;
- (void)onControlPanelShow:(_Bool)arg1;
- (void)onDecorateAction;
- (void)onDidStartVideoChatMatch;
- (void)onPicFixAction;
- (void)onReceiveNearbyVideoCountDownAddTimeNotify:(id)arg1;
- (void)onReceiveNearbyVideoCountDownDidEndNotify:(id)arg1;
- (void)onReceiveNearbyVideoCountDownWillEndNotify:(id)arg1;
- (void)onReceiveNearbyVideoCountUpNotify:(id)arg1;
- (void)onReceiveNearbyVideoCountUpOverTimeNotify:(id)arg1;
- (void)onReceiveNearbyVideoPushNotify:(id)arg1;
- (void)onReceiveNearbyVideoVerifyMatchRequesterNotify:(id)arg1;
- (void)onReceveVideoChatGoldBeanAndHeart:(id)arg1;
- (void)onRecvFirstVideoFrameFromOther;
- (void)onSelectFilter:(id)arg1;
- (void)onVideoShowPanelAntiTouchCancel;
- (void)onVideoShowPanelAntiTouchStart;
- (void)onVideoShowPanelOutAreaTouchDelegate;
- (void)openGiftSelectionViewWithSource:(id)arg1;
- (void)playRing;
- (void)prepareStartVideoChatMatch;
- (void)relayoutSmallView;
- (void)requestVideoChat:(unsigned long long)arg1;
- (void)resetControlPanelHideTimer;
- (void)resumeLastDoc;
- (void)sendGiftWithParams:(id)arg1;
- (void)sendHeadBeatForMatch;
@property(retain, nonatomic) VideoMatchManager *sendHeartBeatManager; // @synthesize sendHeartBeatManager=_sendHeartBeatManager;
- (void)setFunChatEnable;
- (void)setNearbyChatModel:(id)arg1;
- (void)setShowPanelLayout;
- (void)setShowPanelStyle;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double videoStartTime; // @synthesize videoStartTime=_videoStartTime;
- (_Bool)shouldAutorotate;
- (void)showEffectView:(_Bool)arg1;
- (void)showFilterSelectView;
- (void)showGestureTipsView;
- (void)startMatch;
- (void)startMatchVideoChaterOnChatButtClick;
- (void)startPeerAVFunDrawing;
- (void)startReMatchWithType:(int)arg1;
- (void)startSelfAVFunDrawing;
- (void)startVideoNoRecvTimer;
- (void)stopSelfAVFunDrawing;
- (void)stopVideoNoRecvTimer;
- (unsigned long long)supportedInterfaceOrientations;
- (void)topControlBarCloseBtnClick:(id)arg1;
- (void)topControlBarReportBtnClick:(id)arg1;
- (void)updateShowPanelLayout;
- (void)videoInterruptEnd;
- (void)videoInterruptEndShowAlertView;
- (void)videoRematch:(int)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

