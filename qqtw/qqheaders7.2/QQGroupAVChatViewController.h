//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMulAVChatBaseViewController.h"

#import "AVFilterScrViewDelegate.h"
#import "AVFunChatMgrDelegate.h"
#import "GAChatStateChangeProtocal.h"
#import "QQAVChatControlBarDelegate.h"
#import "QQAVControlPanelDelegate.h"
#import "QQAVFunChatBarDelegate.h"
#import "QQAVShowPanelRestructDelegate.h"
#import "QQAVTipsViewDelegate.h"
#import "QQAVVoiceSelecterViewDelegate.h"
#import "QQCollectionViewDataSource.h"
#import "QQCollectionViewDelegate.h"
#import "QUIAlertViewDelegate.h"
#import "UIAccelerometerDelegate.h"
#import "VideoCaptureDelegate.h"

@class AVFilterScrView, GroupAudioChatModel, NSMutableArray, NSString, NSTimer, QAVFilter, QQAVControlPanel, QQAVNetworkView, QQAVShowPanelRestruct, QQAVTipsView, QQAVVoiceSelecterView, QUIAlertView, UIButton, UILabel, UIScrollView, UIView, VideoViewInfoModel, funchatGestureTips;

@interface QQGroupAVChatViewController : QQMulAVChatBaseViewController <QQAVVoiceSelecterViewDelegate, AVFilterScrViewDelegate, AVFunChatMgrDelegate, QQAVFunChatBarDelegate, GAChatStateChangeProtocal, VideoCaptureDelegate, QQAVShowPanelRestructDelegate, QQAVControlPanelDelegate, QQAVTipsViewDelegate, QQCollectionViewDataSource, QQCollectionViewDelegate, QQAVChatControlBarDelegate, QUIAlertViewDelegate, UIAccelerometerDelegate>
{
    int _relationType;
    int _businessType;
    unsigned long long _relationID;
    UIView *_backgroundView;
    UIView *_maskView;
    QQAVShowPanelRestruct *_showPanel;
    QQAVControlPanel *_controlPanel;
    UIButton *_mNoiseCtrlButton;
    UIButton *_recvAllVideoButton;
    QQAVNetworkView *_networkView;
    QQAVTipsView *_tipsView;
    GroupAudioChatModel *_GAChatModel;
    VideoViewInfoModel *_viewInfoModel;
    _Bool _isControllPanelShow;
    _Bool _isFunChatBarShow;
    int _isPreSpeakerState;
    int _isPreMicState;
    NSTimer *_netStatetimer;
    int _curNetType;
    int _isChangingNet;
    _Bool _isTwoCamera;
    _Bool _isOutChatting;
    _Bool _isOnBackGround;
    _Bool _isOpenCameraOnBackGround;
    _Bool _needSwitchCamera;
    _Bool _isCheckWiFi;
    _Bool _isExistMemAllIn;
    _Bool _isAlone;
    NSTimer *_showTipsTimer;
    NSTimer *_netChaneTimer;
    NSTimer *_noticeBarTimer;
    NSTimer *_checkGroupNameTimer;
    _Bool _isNetChaneSuc;
    _Bool _isRecvAllButtonNotWifi;
    _Bool _isRequestingRemoteView;
    _Bool _isRequestWaitingCallBack;
    _Bool _isNeedStartHideTimer;
    int _chatDurationPosition;
    _Bool _isNeedToHideNetworkView;
    _Bool _isRecvRemoteFrame;
    int _videoAbilityLevel;
    NSTimer *_recRemoteFrameTimer;
    _Bool _isShowMonitorInfo;
    UILabel *_fpsLabel;
    UIScrollView *_fpsScrollView;
    NSTimer *_monitorTimer;
    _Bool _isAudioInterrupt;
    _Bool _isCameraSwapAnimating;
    _Bool _isChangeToBigView;
    int _selfNetLevel;
    _Bool _returnButtonEnable;
    _Bool _isSwitchToBarAnimating;
    _Bool _isMemManage;
    _Bool _isMuteButtonHighlight;
    QUIAlertView *_audioHowlingAlert;
    float _beautifyLevel;
    _Bool _usedBeautify;
    int _beauty_server_ctl;
    QAVFilter *_filter;
    NSString *_smotthingFilterPath;
    _Bool _isUseBeautify30;
    unsigned long long _detectedGestureCount;
    NSTimer *_detectGestureTimer;
    _Bool _isGestureing;
    _Bool _isGesturDecorating;
    funchatGestureTips *_gestureTipsView;
    int _voiceChangeType;
    int _lastAudioVoiceChangeType;
    int _lastVideoVoiceChangeType;
    NSMutableArray *_businessTypes;
    QQAVVoiceSelecterView *_voiceSelectView;
    double _voiceSelectedTime;
    AVFilterScrView *_filterSelectView;
    _Bool _didUseBeautify;
    _Bool _didUseVoiceChange;
    _Bool _didUseDecorate;
    _Bool _didUseFiler;
    int _nfps;
    NSString *_preset;
    _Bool _isGroupVideoStartUp;
    double _videoDegreen;
}

- (void)AVControlbuttonPressed:(id)arg1;
- (void)AVFunChatDetectedGesture;
- (void)AVFunChatOneGestureEnded;
- (void)NetChangeSuc;
- (void)OnCamera:(id)arg1;
- (void)OnMute:(id)arg1;
- (void)OnStartRemoteVideoFail;
- (void)OnStartRemoteVideoSuccess;
- (void)PluggInHeadset:(id)arg1;
- (void)RecFirstFrameTimeout;
- (void)StartNetChange:(id)arg1;
- (void)UnPluggingHeadset:(id)arg1;
- (void)addMessageToNoticeBar:(id)arg1 withShowTime:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)assignPropertyToControlPanel;
- (void)audioInterruption:(id)arg1;
- (void)beautifyProcessOnTransmitVideoData:(char *)arg1 BufferSize:(unsigned long long)arg2 Width:(unsigned long long)arg3 HeightY:(unsigned long long)arg4;
- (void)callkitSwicthToSpeakermode;
- (void)callkitSwitchToHeadmode;
- (void)callkitswitchtohead;
- (void)callkitswitchtospeaker;
- (id)cameraWithPosition:(long long)arg1;
- (void)changeButtonEnable:(int)arg1 buttonEnable:(int)arg2;
- (void)changeButtonState:(int)arg1 buttonState:(int)arg2 buttonEnable:(int)arg3;
- (void)changeMicState:(_Bool)arg1;
- (void)changeSpeakerState:(_Bool)arg1;
- (void)changeToAudio;
- (void)changeToBigViewEnd;
- (void)changeToBigViewWithUin:(unsigned long long)arg1 withType:(int)arg2;
- (void)changeToVideo;
- (void)checkAutoRequestAllView;
- (void)checkGestureAfter2Seconds;
- (void)checkGroupName;
- (void)checkMicAvailable;
- (void)checkNetState;
- (void)checkProximityMonitoringEnabled;
- (_Bool)checkRemoteVideo;
- (_Bool)checkSpeakerYes;
- (void)checkVideoAbility;
- (void)checkVideoFloatState:(int)arg1;
- (void)checkVideoMemCount;
- (_Bool)checkWiFi;
- (void)clearProximityMonitoring;
- (void)closeGroupAudioSession;
- (void)closeGroupAudioSessionEx;
- (void)closeLocalVideo;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)confercence898DataReport;
- (_Bool)controlPanelIsTimerStarted;
- (void)controlPanelResetTimer;
- (void)controlPanelSetTimerHidden:(_Bool)arg1;
- (void)controlPanelShowTips:(id)arg1;
- (void)controlPanelShowTips:(id)arg1 withTipsTimer:(float)arg2;
- (_Bool)customButton:(id)arg1;
- (void)dealloc;
- (void)delayRestartTRAEAudioWithMicState:(_Bool)arg1 withSpeakerState:(_Bool)arg2;
- (_Bool)detectBlankVideoFrame:(char *)arg1 BufferSize:(unsigned long long)arg2 width:(unsigned long long)arg3 HeightY:(unsigned long long)arg4;
- (void)dismissSelfViewController;
- (void)displayBeautifyFrame:(id)arg1;
- (void)displayVideoFrame:(id)arg1;
- (void)enterBarckGroundClearTips;
- (void)faceDetectHideTips;
- (void)faceDetectShowTips:(id)arg1 withDuration:(double)arg2;
- (void)forceSuspend;
- (void)funchatProcessOnTransmitVideoData:(char *)arg1 toBuf:(char *)arg2 Width:(unsigned long long)arg3 HeightY:(unsigned long long)arg4;
- (id)getAllSmallView;
- (id)getBigView;
- (int)getBusinessType;
- (int)getButtonEnable:(int)arg1;
- (int)getButtonState:(int)arg1;
- (int)getChatDuration;
- (int)getChatState;
- (id)getChatWindow;
- (id)getControlPanelTipsFont;
- (_Bool)getIsCameraState;
- (_Bool)getIsFrontCameraState;
- (_Bool)getIsMicState;
- (_Bool)getIsSpeakerState;
- (id)getKey:(unsigned long long)arg1 withType:(int)arg2;
- (id)getNickName:(id)arg1;
- (int)getPstnCount;
- (unsigned long long)getRelationID;
- (int)getRelationType;
- (id)getSmotthingFilter;
- (id)getTips:(id)arg1 withAccountType:(int)arg2 withstate:(int)arg3;
- (id)getTips:(id)arg1 withArray:(id)arg2;
- (int)getVideoViewIndexForUin:(id)arg1 withType:(int)arg2;
- (id)getVideoViewInfoAtIndex:(int)arg1;
- (id)getVideoViewInfoForUin:(id)arg1 withType:(int)arg2;
- (void)goOffStageAction;
- (void)goOnStageAction;
- (void)groupAudioInterruptionEnd;
- (void)groupAudioInterruptionStart;
- (_Bool)handleNetState;
- (void)handleUIApplicationWillChangeStatusBarFrameNotification:(id)arg1;
- (_Bool)hasRemoteVideo;
- (void)hideButton:(int)arg1;
- (void)initControlPanel;
- (void)initFunChat;
- (void)initInterface;
- (void)initMemberCollectionView;
- (void)initNoiseCtrlButtons;
- (void)initNotification;
- (void)initShowPanel;
- (void)initVideo;
- (id)initWithRelationType:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (_Bool)isFloatVideoChatting;
- (_Bool)isFullScreenChatting;
@property _Bool isGroupVideoStartUp; // @synthesize isGroupVideoStartUp=_isGroupVideoStartUp;
- (_Bool)isMulScreenMode;
- (_Bool)isPanelHideable;
- (_Bool)isRecvFirstFrame;
- (_Bool)isReminderMemberInOut;
- (_Bool)isSelfViewInShow;
- (_Bool)isStartWithVideo;
- (_Bool)isSupportFilterAndDecorate;
- (_Bool)isViewInShow;
- (long long)numberOfItemInCollectionView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onAVFilterPanelItemUsed;
- (void)onAVFunChatClose;
- (void)onAVFunChatSelectDecorateItem:(id)arg1 bindFilterPath:(id)arg2;
- (void)onAVFunChatSelectVoiceType:(int)arg1 enableLoopback:(_Bool)arg2;
- (void)onAddMem;
- (void)onAllViewStop;
- (void)onCameraAction;
- (void)onCameraActionEngine;
- (void)onCameraSwapAnimationDone;
- (void)onChangeDiscussNum;
- (void)onCloseAction;
- (void)onControlPanelChangeToVideo:(_Bool)arg1;
- (void)onControlPanelShow:(_Bool)arg1;
- (void)onDecorateAction;
- (void)onDisableCameraAction;
- (void)onDisableMuteAction;
- (void)onEnterBackGround;
- (void)onEnterFrontGround;
- (void)onFilterViewSingleTouch;
- (void)onFloatChatWindowHid;
- (void)onFloatChatWindowShow;
- (void)onFunChatAction;
- (void)onGroupNotificationCallback:(id)arg1;
- (void)onGroupNotificationVideoData:(id)arg1;
- (void)onImageDisplayDone;
- (void)onMemberAudioIn:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberAudioOut:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberGetIn:(int)arg1 withGroupID:(long long)arg2 inMemArray:(id)arg3;
- (void)onMemberGetOut:(int)arg1 withGroupID:(long long)arg2 inMemArray:(id)arg3;
- (void)onMemberPPTIn:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberPPTOut:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberScreenIn:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberScreenOut:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberStartSpeaking:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberStopSpeaking:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberVideoIn:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberVideoOut:(int)arg1 inMemArray:(id)arg2;
- (void)onMonitorHide;
- (void)onMonitorShow;
- (void)onMuteAction;
- (void)onMuteActionEngine;
- (void)onNetChangeEnd;
- (void)onNetChangeSuc;
- (void)onOffStageFail;
- (void)onOffStageSuccess;
- (void)onOpenGLInitFail;
- (void)onPicFixAction;
- (void)onPicFixValueChange:(float)arg1;
- (void)onPicFixValueEndChange;
- (void)onRecvAllVideo;
- (void)onRecvVideoData:(char *)arg1 Length:(int)arg2 FrameAngle:(int)arg3;
- (void)onReopenCameraMul:(id)arg1;
- (void)onResume;
- (void)onReturnAction;
- (void)onRotate:(id)arg1;
- (void)onSelectFilter:(id)arg1;
- (void)onSelfInRoomOnmain;
- (void)onShowSupport:(id)arg1;
- (void)onSmallViewTouch:(id)arg1 withType:(int)arg2;
- (void)onSmallViewTouchAnimationEnd;
- (void)onSpeakerAction;
- (void)onStartNetChange:(id)arg1;
- (void)onSuspend;
- (_Bool)onSwitchToBarAnimation;
- (void)onTipsChange:(id)arg1;
- (void)onTipsViewFrameChanged;
- (void)onTipsViewShowTime:(id)arg1;
- (void)onTipsViewShowTips:(id)arg1;
- (void)onToggleCameraAction;
- (void)onUpDateDiscussName:(id)arg1;
- (void)onUpStageFail:(id)arg1;
- (void)onUpStageSuccess:(id)arg1;
- (void)onVideoShowPanelMessageBarPressDelegate;
- (void)onVideoShowPanelOutAreaTouchDelegate;
- (void)onViewStopWithUin:(unsigned long long)arg1 withType:(int)arg2;
- (void)onVoiceChange;
- (void)onVoiceChangeAction;
- (void)onVoiceLoopBack:(_Bool)arg1;
- (void)onVoiceLoopbackAction:(_Bool)arg1;
- (void)reAddAllView;
- (void)receiveMessage;
- (void)refreshTips;
- (void)relayoutAllSmallView;
- (void)relayoutAllView;
- (void)removeMessageFromNoticeBar;
- (void)reportBeadtyLevel;
- (void)reportDC898:(id)arg1 resv3:(id)arg2 resv4:(id)arg3;
- (void)reportFunChat:(id)arg1;
- (void)reportFunChat:(id)arg1 withInfo:(id)arg2;
- (void)reportFunChatBeforeQuit;
- (void)requestAllView;
- (void)requestRemoteVideo;
- (void)resetControlPanelHideTimer;
- (void)resetGestureTips:(_Bool)arg1;
- (void)restartTRAEAudioWithMicState:(_Bool)arg1 withSpeakerState:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)sensorStateChange:(id)arg1;
- (void)sessionRuntimeError:(id)arg1;
- (void)setChatName:(id)arg1;
- (void)setCollectionViewLayout;
- (void)setMonitorShow:(_Bool)arg1;
- (void)setPSWWording;
- (void)setShowPanelLayout;
- (void)setSmotthing;
@property double videoDegreen; // @synthesize videoDegreen=_videoDegreen;
- (void)setViewInfoModelBigAdIndex:(int)arg1;
- (void)settingTonesForAV;
- (void)showAudioHowlingAlert;
- (void)showButton:(int)arg1 frame:(int)arg2;
- (void)showControlPanel:(_Bool)arg1;
- (void)showNotificationTipsView:(id)arg1;
- (void)showTipsChange:(id)arg1;
- (void)showWindow:(id)arg1 withAnimationType:(int)arg2;
- (void)startFunChat;
- (void)startGroupNameTimer;
- (void)startOpenGL;
- (void)stopFunChat;
- (void)stopOpenGL;
- (void)switchSpeakerButtonStyle:(float)arg1;
- (void)switchSpeakerButtonStyleOnMain:(id)arg1;
- (void)switchToBarAnimationEnd;
- (void)switchToBarState;
- (void)switchToFloatState;
- (void)switchToFullAnimationEnd;
- (void)switchToFullState;
- (void)switchToggleCameraButtonToEnableDelegate;
- (void)swithToSpeakerMode;
- (void)transmitVideoData:(char *)arg1 BufferSize:(unsigned long long)arg2 Width:(unsigned long long)arg3 HeightY:(unsigned long long)arg4;
- (void)unInitInterface;
- (void)unInitNofification;
- (void)updateAVGQuality;
- (void)updateCellStatus:(id)arg1;
- (void)updateNetworkLayout;
- (void)updateTipsColors;
- (void)updateTipsLayoutForType:(int)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)voiceSelecterView:(id)arg1 voiceSelected:(int)arg2 enableLoopback:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

