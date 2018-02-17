//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GroupVideoViewControlDelegate.h"
#import "MemRankInfoBoardDelegate.h"
#import "QQAVGroupTextFieldDelegate.h"
#import "QQGroupAVChatMessageViewDelegate.h"

@class CALayer, GroupAudioNeedInfo, GroupVideoViewControl, GrpVideoMemRankControl, NSDictionary, NSMutableArray, NSString, QQAVGroupTextField, QQAVTipsView, QQCollectionView, QQGroupAVChatMessageView, QQGroupVideoWebView, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface QQAVGroupVideoControlPanel : UIView <GroupVideoViewControlDelegate, QQAVGroupTextFieldDelegate, MemRankInfoBoardDelegate, QQGroupAVChatMessageViewDelegate>
{
    long long _cameraBtnState;
    long long _voiceBtnState;
    long long _videoBtnState;
    id <QQAVGroupVideoControlPanelDelegate> _delegate;
    int _xo;
    UIView *_topView;
    UIImageView *_bottomMaskView;
    UIView *_eventView;
    UIView *_textFieldView;
    long long _videoOrientation;
    UIButton *_closeBtn;
    UIView *_memberCollectionView;
    _Bool _memberCollectionFold;
    UIView *_msgShowView;
    NSMutableArray *_messageViewArray;
    double _lastStandardHeight;
    NSDictionary *_refreshGiftWebPageCallback;
    GroupAudioNeedInfo *_audioInfo;
    UIActivityIndicatorView *_mActView;
    QQGroupAVChatMessageView *_msgView;
    struct CGRect _msgViewInitFrame;
    UIView *_backView;
    UIView *_cameraChooseBackView;
    _Bool _isShowQAMonitor;
    NSString *_currentUinOnStage;
    unsigned long long _groupCode;
    _Bool _openMicGuideAnimated;
    long long _giftRankSeq;
    _Bool _isShowRingNumView;
    CALayer *_memberMask;
    _Bool _isSupportDrag;
    _Bool _isHidenRoundVideoButt;
    _Bool _isGroupVideoStartUp;
    _Bool _showNoPriorityWording;
    QQAVGroupTextField *_avGroupTextField;
    QQCollectionView *_memberCollection;
    UIButton *_recvAllVideoBtn;
    QQAVTipsView *_tipsView;
    UILabel *_stageNameLabel;
    unsigned long long _relationID;
    QQGroupVideoWebView *_giftView;
    QQGroupVideoWebView *_memberListView;
    QQGroupVideoWebView *_pkView;
    GroupVideoViewControl *_introduceControl;
    GrpVideoMemRankControl *_memRankControl;
    UILabel *_guideLabel;
    UIView *_memberView;
    UIButton *_returnBtn;
    UIButton *_homeBtn;
    UIButton *_roundVideoView;
    UIButton *_moreBtn;
    UIButton *_joinVideoButt;
    UIView *_mainMemInfoView;
    UIView *_ringNumView;
    UIImageView *_topBgView;
    UIImageView *_openMicGuideView;
    struct UIEdgeInsets _edgeInsets;
}

- (void).cxx_destruct;
- (void)MemRankInfoCellDidSelect:(id)arg1;
- (void)adapPortraitMessagePos;
- (void)adaptMessagePos;
- (void)adaptSize;
- (void)addDoubleTapGesture;
- (void)addGiftShowWithSender:(id)arg1 receiver:(id)arg2 giftNumber:(unsigned long long)arg3;
- (void)addLeftDragGesture;
- (void)addPanGesture;
- (void)addPinchGesture;
- (void)addRightDragGesture;
- (void)addShowMessage:(id)arg1 giftFlag:(_Bool)arg2 sender:(id)arg3 receiver:(id)arg4 giftNumber:(unsigned long long)arg5;
- (void)adjustMemInfoView;
- (void)adjustOrientation:(long long)arg1;
- (void)adjustOrientationLandscapeLeft;
- (void)adjustOrientationLandscapeRight;
- (void)adjustOrientationPortrait;
- (void)adjustOrientationPortraitUpsideDown;
- (void)adjustTopBarViewWithVideoIn;
- (void)adjustTopBarViewWithoutVideoIn;
@property(retain) QQAVGroupTextField *avGroupTextField; // @synthesize avGroupTextField=_avGroupTextField;
- (void)dealloc;
- (void)dimissIndicatorView;
- (void)displayCameraChooseView;
- (void)doInitMsgView;
- (void)doOpenMicGuideAnimate;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (id)getCameraMenuItem:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)getConcretLabel;
- (id)getImageFromColor:(id)arg1:(struct CGSize)arg2;
- (id)getMenuItem:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)getTroopMemberResult:(id)arg1;
@property(retain) QQGroupVideoWebView *giftView; // @synthesize giftView=_giftView;
- (void)giftsHasSent:(id)arg1;
@property(retain) UILabel *guideLabel; // @synthesize guideLabel=_guideLabel;
- (void)hiddenCameraButtonMenu;
- (void)hiddenMoreButtonMenu;
- (void)hideGiftViewWithAnimation;
- (void)hidePKWebWithAnimation;
@property(retain) UIButton *homeBtn; // @synthesize homeBtn=_homeBtn;
- (void)initIntroduceControl;
- (void)initMemRankControl;
- (void)initPKWeb;
- (void)initPayWeb;
- (id)initWithFrame:(struct CGRect)arg1 EdgeInsets:(struct UIEdgeInsets)arg2 GroupCode:(unsigned long long)arg3;
- (void)inputViewFrameWillChangeWhenKeyboardEvent:(_Bool)arg1 endFrame:(struct CGRect)arg2;
@property(retain) GroupVideoViewControl *introduceControl; // @synthesize introduceControl=_introduceControl;
@property(nonatomic) _Bool isGroupVideoStartUp; // @synthesize isGroupVideoStartUp=_isGroupVideoStartUp;
- (void)isGroupVideoStartUpRelayoutBottomIcon;
@property(nonatomic) _Bool isHidenRoundVideoButt; // @synthesize isHidenRoundVideoButt=_isHidenRoundVideoButt;
@property(nonatomic) _Bool isSupportDrag; // @synthesize isSupportDrag=_isSupportDrag;
@property(retain, nonatomic) UIButton *joinVideoButt; // @synthesize joinVideoButt=_joinVideoButt;
- (void)keyboardWasHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
@property(retain, nonatomic) UIView *mainMemInfoView; // @synthesize mainMemInfoView=_mainMemInfoView;
@property(retain) GrpVideoMemRankControl *memRankControl; // @synthesize memRankControl=_memRankControl;
@property(retain) QQCollectionView *memberCollection; // @synthesize memberCollection=_memberCollection;
@property(retain) QQGroupVideoWebView *memberListView; // @synthesize memberListView=_memberListView;
@property(retain) UIView *memberView; // @synthesize memberView=_memberView;
@property(retain) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
- (void)onBackViewTapGesture:(id)arg1;
- (void)onBeautifyButtonTouchUpinside:(id)arg1;
- (void)onBntOpenGroupCard:(id)arg1;
- (void)onCamareButtonTouchUpInside:(id)arg1;
- (void)onCameraChooseViewTapGesture:(id)arg1;
- (void)onCloseButtonTouchUpinside:(id)arg1;
- (void)onCountButtonTouchUpInside:(id)arg1;
- (void)onDoubleTapGesture:(id)arg1;
- (void)onGetUserInfo:(id)arg1;
- (void)onGiftButtonTouchUpInside:(id)arg1;
- (void)onGiftCancelButton:(id)arg1;
- (void)onGotoOpenRoomButtTouchUpinside:(id)arg1;
- (void)onGrpVideoTextFieldButtClick:(int)arg1;
- (void)onInviteButtonTouchUpinside:(id)arg1;
- (void)onJuBaoButtonTouchUpInside:(id)arg1;
- (void)onLeftDragGesture:(id)arg1;
- (void)onMainMemTapGesture:(id)arg1;
- (void)onMemberListButtonTouchUpInside:(id)arg1;
- (void)onMoreButtonTouchUpinside:(id)arg1;
- (void)onMsgCellEventOpenUserCard:(id)arg1 withModelType:(id)arg2;
- (void)onPKWebCancelButton:(id)arg1;
- (void)onPanGesture:(id)arg1;
- (void)onPinchGesture:(id)arg1;
- (void)onRecommondVideoClick:(long long)arg1;
- (void)onRecvAllVideo;
- (void)onRecvMessage:(id)arg1;
- (void)onReturnButtonTouchUpinside:(id)arg1;
- (void)onRightDragGesture:(id)arg1;
- (void)onRingNumTapGesture:(id)arg1;
- (void)onSettingButtonTouchUpInside:(id)arg1;
- (void)onShowQAButtonTouchUpinside:(id)arg1;
- (void)onShowWarningMessage:(id)arg1;
- (void)onVideoButtonTouchUpInside:(id)arg1;
- (void)onViewTapGesture:(id)arg1;
- (void)onVoiceButtonTouchUpInside:(id)arg1;
- (void)openMicGuide;
@property(retain, nonatomic) UIImageView *openMicGuideView; // @synthesize openMicGuideView=_openMicGuideView;
@property(retain) QQGroupVideoWebView *pkView; // @synthesize pkView=_pkView;
@property(retain) UIButton *recvAllVideoBtn; // @synthesize recvAllVideoBtn=_recvAllVideoBtn;
- (void)refreshGiftWebPage:(id)arg1;
- (void)refreshMainMemInfo:(id)arg1 MemUin:(id)arg2:(unsigned int)arg3 speakState:(_Bool)arg4;
- (void)refreshMemCount:(id)arg1;
- (void)refreshRoundVideoView;
- (void)refreshVideoButtonBackground;
- (void)refreshVoiceButtonBackground;
@property unsigned long long relationID; // @synthesize relationID=_relationID;
@property(retain) UIButton *returnBtn; // @synthesize returnBtn=_returnBtn;
@property(retain, nonatomic) UIView *ringNumView; // @synthesize ringNumView=_ringNumView;
@property(retain) UIButton *roundVideoView; // @synthesize roundVideoView=_roundVideoView;
@property(nonatomic) _Bool showNoPriorityWording; // @synthesize showNoPriorityWording=_showNoPriorityWording;
@property(retain) UILabel *stageNameLabel; // @synthesize stageNameLabel=_stageNameLabel;
@property(retain) QQAVTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) UIImageView *topBgView; // @synthesize topBgView=_topBgView;
@property(nonatomic) long long videoBtnState; // @dynamic videoBtnState;
@property(nonatomic) long long voiceBtnState; // @dynamic voiceBtnState;
- (void)showAnimationInternal:(id)arg1 fromUin:(id)arg2 toUin:(id)arg3;
- (void)showErrorTips:(id)arg1;
- (void)showGiftRank:(id)arg1;
- (void)showIndicatorView;
- (void)showIntroduceControl;
- (void)showPushAndAnimation:(id)arg1;
- (void)updateMemberCount:(unsigned long long)arg1;
- (void)updateVideoButtonState;

// Remaining properties
@property(nonatomic) long long cameraBtnState; // @dynamic cameraBtnState;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <QQAVGroupVideoControlPanelDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

