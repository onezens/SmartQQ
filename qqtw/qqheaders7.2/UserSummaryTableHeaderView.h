//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "AppOnlineViewDelegate.h"
#import "UserSummaryZanViewDelegate.h"

@class APUnreadRedPointView, AppOnlineView, NSMutableArray, NSNumber, NSString, QQAvatarView, QQBubbleTipsView, RichStateModel, RichStateOneLineFastView, RichStateView, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIView, USZanLoveAnimationView, UserSummaryCardLabel, UserSummaryContainerTips, UserSummaryCoverView, UserSummaryMedalsView, UserSummaryVoiceLabel, UserSummaryZanButton, UserSummaryZanView, ZanButtonContainerView;

@interface UserSummaryTableHeaderView : UIControl <UserSummaryZanViewDelegate, AppOnlineViewDelegate>
{
    long long _uin;
    _Bool _isMySelf;
    short _age;
    NSString *_headerName;
    short _gender;
    NSString *_country;
    NSString *_province;
    NSString *_city;
    NSString *_constellation;
    short _qqlevel;
    NSString *_contactName;
    NSString *_qqOnlineStr;
    NSString *_searchName;
    NSString *_enc_id;
    NSString *_uid;
    int _voteCount;
    int _latestVoteCount;
    int _valid4Vote;
    NSString *_voteLimitedNotice;
    int _haveVoted;
    int _validVoteCount;
    int _showControl;
    _Bool _torchbearer;
    UIImageView *_bgView;
    UIView *_bgBottomView;
    UITapGestureRecognizer *_bgViewTapGesture;
    id <UserSummaryTableHeaderViewDelegate><UserSummaryTableHeaderViewDataSource><QQBannerTipViewDelegate> _delegate;
    QQAvatarView *_headView;
    UITapGestureRecognizer *_headViewTapGesture;
    UIImageView *_headViewBg;
    UIActivityIndicatorView *_uploadIndicator;
    UILabel *_headerNameLabel;
    UIButton *_medalsCountButton;
    UILabel *_medalsCountLabel;
    UserSummaryMedalsView *_medalView;
    APUnreadRedPointView *_medalUnreadHint;
    UIImageView *_medalRedPointHint;
    UILabel *_genderLabel;
    RichStateView *_richStateView;
    RichStateOneLineFastView *_richStateFastView;
    UIButton *_richStateSignatureBtn;
    RichStateModel *_richStateModel;
    UILabel *_realGenderLabel;
    UILabel *_ageLabel;
    UILabel *_cityLabel;
    UIButton *_qqLevelView;
    UserSummaryZanButton *_zanButton;
    UserSummaryZanView *_zanView;
    UIImageView *_recZanHint;
    QQBubbleTipsView *_customVoteGuide;
    UIImageView *_theOnlyOne;
    ZanButtonContainerView *_containerView;
    int _height;
    NSMutableArray *_levelTagArray;
    UIImageView *_qqDarenIconView;
    UIView *_qqDarenView;
    _Bool _qqDarenShow;
    _Bool _loginDaysClickable;
    _Bool _loginDaysVisible;
    UITapGestureRecognizer *_DarenViewTapRecognizer;
    UIImageView *_qqLevelAccView;
    UIImageView *_topShadow;
    UserSummaryCoverView *_coverView;
    int _defaultheigth;
    int _type;
    UIControl *_coverTouch;
    _Bool _bEnterPicWall;
    int _headPadding;
    int _summaryEntry;
    NSNumber *_zanButtonOriginalY;
    long long _avatarPendantID;
    UserSummaryVoiceLabel *_userSummaryVoiceLabel;
    UserSummaryContainerTips *_tipsContainer;
    _Bool _hasAddVoiceLabelObsever;
    QQAvatarView *_NowLiveView;
    int _nowFlag;
    NSString *_nowIconUrl;
    NSString *_nowHrefUrl;
    UIImageView *_certificationIcon;
    int _xo;
    UserSummaryCardLabel *_customTemplateLabel;
    NSMutableArray *_accessibleElements;
    _Bool _torchbearerReported;
    long long _totalMedalsCount;
    long long _gotMedalsCount;
    NSString *_medalWallWebParameters;
    NSMutableArray *_latestCVInfos;
    _Bool _isZanLoveAniForMasterReady;
    USZanLoveAnimationView *_zanLoveAnimationView;
    int _alreadyPlayedZanLoveCount;
    _Bool _needStopZanLoveAnimation;
    _Bool _isDownloading;
    _Bool _isDownloadOverTime;
    _Bool _hasDoDownload;
    unsigned int _isTimOnline;
    UIView *_timOnlineView;
    _Bool _hasClickZanButton;
    AppOnlineView *_appOnlineView;
    _Bool _bReportShowAppOnline;
    _Bool _shouldDisplayWithTemplate;
    _Bool _shouldShowFriendMedalWallEntrance;
}

- (void).cxx_destruct;
- (void)VCWillDisappear:(id)arg1;
- (void)addCustomTemplateBannerWithTitle:(id)arg1 shouldPushOut:(_Bool)arg2;
- (void)addNowLiveView;
- (struct CGPoint)adjustCenterToFullScreen:(struct CGPoint)arg1;
- (struct CGRect)adjustToFullScreen:(struct CGRect)arg1;
- (void)cancelAllRequest;
- (void)checkHintForZanButton:(id)arg1;
- (void)checkRecZanHint;
- (void)clickTIMOnline;
- (void)clickZanButtonForNomal;
- (void)clickZanButtonForTemplate;
- (id)containerView;
- (void)coverUpdateNotification:(id)arg1;
- (struct CGRect)currentZanButtonRect;
- (id)customTemplateBanner;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)dismissCustomVoteGuide;
- (void)doZanLoveAnimation:(int)arg1 index:(int)arg2;
- (void)downloadCustomVoteResourceIfNeed;
- (int)getAllHeight;
- (struct CGRect)getHeadViewFrame;
- (void)handleCVDownloadComplete:(id)arg1 completeMask:(int)arg2;
- (void)handleCVDownloadOverTime;
@property(retain, nonatomic) QQAvatarView *headView; // @synthesize headView=_headView;
- (id)initWithAllData:(id)arg1;
- (_Bool)isNeedDownloadCustomVote;
- (_Bool)isNeedShowCustomVoteGuide;
- (_Bool)isShowMedalWallEntry;
- (void)layoutMedalsCountButton;
- (void)layoutMedalsCountButtonForNomal;
- (void)layoutMedalsCountButtonForTemplate;
- (void)layoutView;
- (void)loadInitCoverData;
- (void)medalsCountButtonTaped:(id)arg1;
- (void)medalsCountButtonTouchDown:(id)arg1;
- (void)medalsCountViewTaped:(id)arg1;
- (void)nowLiveViewClicked;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onAppOnlineViewClick:(id)arg1;
- (void)onCoverViewClicked:(id)arg1;
- (void)onHeadViewClick:(id)arg1;
- (void)onQQDarenViewClick:(id)arg1;
- (void)onRichStateSignatureTapped:(id)arg1;
- (void)onZanButtonClick:(id)arg1;
- (void)onZanButtonTouchDown:(id)arg1;
- (void)onZanButtonTouchUp:(id)arg1;
- (void)playZanLoveAnimationForMaster;
- (void)playZanLoveAnimtaionForGuest;
- (void)prepareZanLoveAnimtaion:(int)arg1;
- (void)refreshAvatarPendant:(long long)arg1;
- (void)refreshCover;
- (void)refreshHeadView;
- (void)refreshMedalWallHint;
- (void)refreshMedalWallHintForNomal;
- (void)refreshMedalWallHintForTemplate;
- (void)refreshPersonalZanGuide;
- (void)refreshTimTips;
- (void)registerObsevers;
- (void)restoreZanButtonToNormalY;
- (void)setDefaultHeight:(int)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setMedalsCountButtonStyle:(id)arg1;
- (void)setMedalsCountLabelTranparent:(_Bool)arg1;
@property(nonatomic) _Bool shouldDisplayWithTemplate; // @synthesize shouldDisplayWithTemplate=_shouldDisplayWithTemplate;
@property(nonatomic) _Bool shouldShowFriendMedalWallEntrance; // @synthesize shouldShowFriendMedalWallEntrance=_shouldShowFriendMedalWallEntrance;
@property(nonatomic) int summaryEntry; // @dynamic summaryEntry;
- (void)setTopShadowHidden:(_Bool)arg1;
- (void)setZanAccessiblilityLabel;
- (void)setupMedalWallControls;
- (void)showCustomVoteGuide;
- (void)showNowOrMusicRing;
- (void)startUploadingIndicator;
- (void)stopUploadingIndicator;
- (void)updateAllData:(id)arg1;
- (void)updateCoverViewScrollFrame:(double)arg1;
- (void)updateMedalWallEntrance;
- (void)updateMedalsCount;
- (void)updateTIMTips;
- (void)updateZanButtonYToValue:(double)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (double)yOffsetForAdjustToFullScreen;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *accessibleElements; // @dynamic accessibleElements;
@property(retain, nonatomic) UserSummaryCardLabel *customTemplateLabel; // @dynamic customTemplateLabel;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <UserSummaryTableHeaderViewDelegate><UserSummaryTableHeaderViewDataSource><QQBannerTipViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasAddVoiceLabelObsever; // @dynamic hasAddVoiceLabelObsever;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UserSummaryContainerTips *tipsContainer; // @dynamic tipsContainer;
@property(retain, nonatomic) UserSummaryVoiceLabel *userSummaryVoiceLabel; // @dynamic userSummaryVoiceLabel;

@end
