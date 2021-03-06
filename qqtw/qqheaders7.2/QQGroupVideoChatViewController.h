//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupAVChatViewController.h"

#import "BackViewControllerDelegate.h"
#import "GroupAVShowPanelLayoutDelegate.h"
#import "MemberListViewControllerDelegate.h"
#import "MulMemSelBusiProcessDelegate.h"
#import "QQAVGroupVideoControlPanelDelegate.h"
#import "QQCollectionViewDelegate.h"
#import "QQGroupAVInputViewDelegate.h"
#import "QQGroupGiftSelectionViewDelegate.h"
#import "QUIActionSheetDelegate.h"
#import "ViewRequestInfoChangeProtocal.h"

@class AVAudioRecorder, NSArray, NSDictionary, NSMutableArray, NSString, NSTimer, QQAVGroupVideoControlPanel, QQGroupAVBeautifyLogic, QQGroupAVInputView, QQGroupAVMessageLogic, QQGroupVideoGiftMarketView, QQGroupVideoMemberListView, QQWebViewController, UIImageView, UIViewController;

@interface QQGroupVideoChatViewController : QQGroupAVChatViewController <QQAVGroupVideoControlPanelDelegate, QQCollectionViewDelegate, QQGroupAVInputViewDelegate, GroupAVShowPanelLayoutDelegate, ViewRequestInfoChangeProtocal, QUIActionSheetDelegate, MemberListViewControllerDelegate, BackViewControllerDelegate, MulMemSelBusiProcessDelegate, QQGroupGiftSelectionViewDelegate>
{
    _Bool _isSelfManager;
    unsigned char _cameraSetting;
    unsigned char _micSetting;
    int _groupVideoMode;
    int _stateBeforeCloseMic;
    NSTimer *_checkMemberNameTimer;
    UIViewController *_userSummaryController;
    QQAVGroupVideoControlPanel *_groupControlPanel;
    NSMutableArray *_invteSubViews;
    NSDictionary *_getMemberListcallback;
    NSDictionary *_rechargeCallback;
    _Bool _isRechargePage;
    QQGroupAVInputView *_inputView;
    QQGroupAVMessageLogic *_messageLogic;
    NSArray *_recommondVideoArr;
    unsigned long long _mainVideoInfoCount;
    NSString *_memRankCardClickUin;
    struct CGRect _currentGLViewFrame;
    NSString *_currentKey;
    QQGroupAVBeautifyLogic *_beautifyLogic;
    NSString *_chooseUin;
    _Bool _isToControllerWithoutBar;
    UIImageView *_backgroundImageView;
    _Bool _isSending;
    AVAudioRecorder *_micRecorder;
    NSTimer *_micTimer;
    double _lowPassResults;
    NSString *_reportUpstageLoacState;
    _Bool _clickFromJoinMenu;
    NSString *_modelType;
    _Bool _isToMemCard;
    _Bool _hasToMemCard;
    _Bool _chooseRecommondVideo;
    _Bool _fromOuterVideo;
    _Bool _isNeedRecoveryFromFloatWin;
    int _showNoticeBarEnterViewType;
    QQWebViewController *_webViewController;
    QQGroupVideoGiftMarketView *_groupVideoGiftView;
    QQGroupVideoMemberListView *_memberListView;
    CDUnknownBlockType _returnActionCompletionBlock;
}

- (void).cxx_destruct;
- (unsigned int)GetCurrentCount;
- (void)OnStartRemoteVideoFail;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addGLView;
- (void)addLeftDragGesture;
- (void)assignPropertyToControlPanel;
- (void)changeButtonEnable:(int)arg1 buttonEnable:(int)arg2;
- (void)changeButtonState:(int)arg1 buttonState:(int)arg2 buttonEnable:(int)arg3;
- (void)checkAutoRequestAllView;
- (void)checkNetState;
- (void)checkVideoMemCount;
@property(nonatomic) _Bool chooseRecommondVideo; // @synthesize chooseRecommondVideo=_chooseRecommondVideo;
- (void)clickMemRankCardCell:(id)arg1;
- (void)clickMemRankCardCell:(id)arg1 withModelType:(id)arg2;
- (void)clickRecommondVideo:(unsigned long long)arg1;
- (void)closeGroupAudioSession;
- (void)closeMic;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)controlPanelIsTimerStarted;
- (void)controlPanelResetTimer;
- (void)controlPanelSetTimerHidden:(_Bool)arg1;
- (void)controlPanelShowTips:(id)arg1;
- (void)controlPanelShowTips:(id)arg1 withTipsTimer:(float)arg2;
- (void)dealInviteInfo:(id)arg1;
- (void)dealloc;
- (void)dismissGiftSelectionView;
- (void)dismissListView;
- (void)dismissMemberListView;
- (void)dismissVideoGiftMarketView;
- (void)dismissViewController:(id)arg1;
- (void)displayBeautifyFrame:(id)arg1;
- (void)doInitLogic;
- (void)doInitMsgInput;
- (void)doLoadViewMsgInput;
- (void)doReturnActionAndCompletion:(CDUnknownBlockType)arg1;
- (void)embeddedH5CloseAPI:(id)arg1;
- (void)enterBarckGroundClearTips;
@property(nonatomic) _Bool fromOuterVideo; // @synthesize fromOuterVideo=_fromOuterVideo;
- (void)funchatProcessOnTransmitVideoData:(char *)arg1 toBuf:(char *)arg2 Width:(unsigned long long)arg3 HeightY:(unsigned long long)arg4;
- (id)getAVShowPanel;
- (int)getButtonEnable:(int)arg1;
- (int)getButtonState:(int)arg1;
- (int)getChatDuration;
- (id)getControlPanelTipsFont;
- (id)getGroupCode;
- (unsigned long long)getInviteViewCount;
- (unsigned long long)getMainVideoCount;
- (struct CGRect)getMainVideoFrame;
- (long long)getOnStageUin;
- (void)getRechargePage:(id)arg1;
- (unsigned long long)getVideoCountOnStage;
- (unsigned long long)getVideoInfoCount;
- (void)groupGiftSelectionViewDidSelect;
- (_Bool)groupGiftSelectionViewDidSelectCheckSelectMember;
@property(retain, nonatomic) QQGroupVideoGiftMarketView *groupVideoGiftView; // @synthesize groupVideoGiftView=_groupVideoGiftView;
- (void)handleInvitSuccessMembers:(id)arg1;
@property(nonatomic) _Bool hasToMemCard; // @synthesize hasToMemCard=_hasToMemCard;
- (void)initCollectionViewLayout;
- (void)initControlPanel;
- (void)initFunChat;
- (void)initInterface;
- (void)initNotification;
- (void)initShowPanel;
- (id)initWithRelationType:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
@property(retain, nonatomic) QQGroupAVInputView *inputView; // @synthesize inputView=_inputView;
- (void)inputViewFrameWillChangeWhenKeyboardEvent:(_Bool)arg1 endFrame:(struct CGRect)arg2;
- (void)inviteFriendToGroupVideo;
- (_Bool)isFrontCamera;
- (_Bool)isHasInviteCompetence;
@property(nonatomic) _Bool isNeedRecoveryFromFloatWin; // @synthesize isNeedRecoveryFromFloatWin=_isNeedRecoveryFromFloatWin;
- (_Bool)isReminderMemberInOut;
- (_Bool)isSelfManager;
- (_Bool)isSelfOnStage;
@property(nonatomic) _Bool isToMemCard; // @synthesize isToMemCard=_isToMemCard;
- (void)levelTimerCallback:(id)arg1;
@property(retain, nonatomic) QQGroupVideoMemberListView *memberListView; // @synthesize memberListView=_memberListView;
- (long long)numberOfItemInCollectionView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onAddGroupButtonTouchUpInside;
- (void)onBeautifyButtonTouchUpInside;
- (void)onBusinessProcessCancelMulMemSelector:(id)arg1 currentViewControllerClass:(id)arg2 selectedMember:(id)arg3;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)onCamareButtonTouchUpInside;
- (void)onCameraAction;
- (void)onCloseAction;
- (void)onCloseButtonTouchUpInside;
- (void)onDisableCameraAction;
- (void)onDisableMuteAction;
- (void)onDoubleTapGesture:(id)arg1;
- (void)onEnterBackGround;
- (void)onGotoOpenRoom;
- (void)onGotoOpenRoomButtTouchUpInside;
- (void)onGrayMsgHandle:(id)arg1;
- (void)onGroupAudioChatNotification:(id)arg1;
- (void)onGroupVideoNotificationEmbedScPush:(id)arg1;
- (void)onImageDownloadError:(id)arg1;
- (void)onImageDownloadFinished:(id)arg1;
- (void)onInviteButtonTouchUpInside;
- (void)onInviteViewTouchWithUin:(unsigned long long)arg1 andInviteId:(id)arg2;
- (void)onJuBaoButtonTouchUpInside;
- (void)onLeftDrag;
- (void)onLeftDragGesture:(id)arg1;
- (void)onMemberBanAudio:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberCancelBanAudio:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberGetIn:(int)arg1 withGroupID:(long long)arg2 inMemArray:(id)arg3;
- (void)onMemberGetOut:(int)arg1 withGroupID:(long long)arg2 inMemArray:(id)arg3;
- (void)onMemberStartSpeaking:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberStopSpeaking:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberVideoIn:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberVideoOut:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberVideoTypeChange:(int)arg1 inMemArray:(id)arg2;
- (void)onMoreGetMemberList:(id)arg1;
- (void)onMoreMemeberTouch:(id)arg1;
- (void)onMuteAction;
- (void)onOffStageSuccess;
- (void)onPPTUploadSate:(int)arg1 inMemArray:(id)arg2 withPPTUploadSate:(int)arg3;
- (void)onPanGesture:(id)arg1;
- (void)onPinchGesture:(id)arg1;
- (void)onRecvAllButtonTouchUpInside;
- (void)onRecvAllVideo;
- (void)onReturn;
- (void)onReturnButtonTouchUpInside;
- (void)onSelfManagerChange:(id)arg1;
- (void)onSelfManagerUpdate:(id)arg1;
- (void)onSendGiftButtonTouchUpInside;
- (void)onSendMessageButtonTouchUpInside;
- (void)onSetAllCanGoOnStage;
- (void)onSetFreeMode;
- (void)onSetManagerCanGoOnStage;
- (void)onSetManagerStagerCanSpeak;
- (void)onSetMicOrderMode;
- (void)onSetPressSpaekMode;
- (void)onSettingButtonTouchUpInside;
- (void)onSingleTapGesture:(id)arg1;
- (void)onSmallViewTouch:(id)arg1 withType:(int)arg2;
- (void)onSpeakerAction;
- (void)onTipsViewShowTime:(id)arg1;
- (void)onToggleCameraAction;
- (void)onUISendMessage:(id)arg1;
- (void)onUpStageFail:(id)arg1;
- (void)onUpStageSuccess:(id)arg1;
- (void)onVideoButtonTouchUpInside;
- (void)onVideoShowPanelMessageBarPressDelegate;
- (void)onVoiceButtonTouchUpInside;
- (void)openGroupCard;
- (void)openInviteMemberListView;
- (void)openMemberCard:(id)arg1;
- (void)openMemberCard:(id)arg1 withModelType:(id)arg2;
- (void)orientationChanged:(id)arg1;
- (void)receiveMessage;
- (void)refreshCollectionMemArr:(id)arg1;
- (void)refreshCollectionMemArrFromPush:(id)arg1;
- (void)refreshInviteViewAndSmallView;
- (void)refreshRecommondTable:(id)arg1;
- (void)releaseMicBlow;
- (void)reportBtnType:(int)arg1;
- (void)reportChangeBeautyFinished:(int)arg1;
- (void)reportEnterMinFromOther;
- (void)reportInvitOpName:(id)arg1 withUseInfo:(id)arg2;
- (void)reportOpName:(id)arg1;
- (void)reportOpName:(id)arg1 withUseInfo:(id)arg2;
- (void)reportRecommendMoreClick;
- (void)reportShowRecommendControl;
- (void)reportSysWarningShow;
- (void)reportUpstage:(id)arg1 LandState:(id)arg2;
- (void)requestRemoteVideo;
- (void)resumeMic;
@property(copy, nonatomic) CDUnknownBlockType returnActionCompletionBlock; // @synthesize returnActionCompletionBlock=_returnActionCompletionBlock;
- (void)rspFrequency:(id)arg1;
- (void)rspInviteMemberFail:(id)arg1;
- (void)rspInviteMemberSuccess:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)sendGift;
- (void)sendMessageResignFirstResponder;
@property(nonatomic) int showNoticeBarEnterViewType; // @synthesize showNoticeBarEnterViewType=_showNoticeBarEnterViewType;
- (void)setShowPanelLayout;
- (void)setViewInfoModelBigAdIndex:(int)arg1;
@property(retain, nonatomic) QQWebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (void)settingTonesForAV;
- (void)setupMultiMemberCell:(id)arg1 forUin:(unsigned long long)arg2;
- (_Bool)startMicBlow;
- (void)switchToBarState;
- (void)switchToFloatState;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)unInitInterface;
- (void)updateCellStatus:(id)arg1;
- (void)updateSmallViewMicStaet:(int)arg1 inMemArray:(id)arg2;
- (void)updateStateOnUserInfo;
- (void)updateViewRequestInfoCount:(unsigned long long)arg1;
- (void)viewController:(id)arg1 memberSelected:(unsigned long long)arg2;
- (void)viewControllerGoBack:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

