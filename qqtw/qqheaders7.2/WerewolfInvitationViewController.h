//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "CAAnimationDelegate.h"
#import "FriendSelectedChildViewDeletage.h"
#import "MulMemSelBusiProcessDelegate.h"
#import "RichMsgPreviewDialogDelegate.h"
#import "UserSummaryNavBarItemDelagate.h"

@class NSDictionary, NSMutableArray, NSString, QQAVWindow, QQRichMsgPreviewDialog, RCTBridge, TReactView, UserSummaryNavigationBar, WerewolfRNDownloadView;

@interface WerewolfInvitationViewController : QQViewController <UserSummaryNavBarItemDelagate, MulMemSelBusiProcessDelegate, RichMsgPreviewDialogDelegate, FriendSelectedChildViewDeletage, CAAnimationDelegate>
{
    QQRichMsgPreviewDialog *_richMsgPreDlg;
    UserSummaryNavigationBar *_naviBar;
    NSDictionary *_inviteTeamRoomInfo;
    NSString *_curUin;
    _Bool _isReturnInFloat;
    QQAVWindow *_window;
    _Bool _isChatStoped;
    _Bool _isShowAnimation;
    _Bool _isReturnAnimation;
    unsigned long long _currentPlyaerState;
    _Bool _showRoomFloate;
    _Bool _isSetupRN;
    _Bool _nextIsGame;
    int _roomType;
    int _zoneId;
    NSString *_inviteId;
    TReactView *_reactView;
    RCTBridge *_bridge;
    NSMutableArray *_selectedMemInfo;
    NSString *_shareGroupUin;
    NSString *_shareGroup;
    WerewolfRNDownloadView *_loadingView;
}

+ (void)buildWerewolfTReactViewWithProps:(id)arg1 frame:(struct CGRect)arg2 onCreate:(CDUnknownBlockType)arg3 onComplete:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (void)akPackgerDownloadedHandler:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)autoMoveAnination;
- (void)autoScaleAnimation;
- (void)autoSwitchViewAnimation;
@property(retain, nonatomic) RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void)changeAccount:(id)arg1;
- (void)changeTeamPlayerState:(id)arg1;
- (void)childViewCellDidSelected:(id)arg1 type:(int)arg2;
- (void)connectedToFloat;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (struct CGRect)frameForMainView;
- (id)getChatWindow;
- (int)getClusterEnterFilterValue;
- (void)goToAudioChat;
- (id)goToGameHallWithModel:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleNavBarItemClick:(_Bool)arg1;
- (id)init;
- (void)initUI;
- (id)initWithInvitation:(id)arg1;
- (id)initWithInvitation:(id)arg1 roomType:(int)arg2 zoneId:(int)arg3 shareGroup:(id)arg4;
- (id)initWithRoomParam:(id)arg1;
@property(copy, nonatomic) NSString *inviteId; // @synthesize inviteId=_inviteId;
- (void)inviteMemEnterGameRoom;
- (_Bool)isSupportRightDragToGoBack;
- (void)jsFatalErrorOccurs:(id)arg1;
- (void)jsIgnoreErrorOccurs:(id)arg1;
@property(retain, nonatomic) WerewolfRNDownloadView *loadingView; // @synthesize loadingView=_loadingView;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)onClickSelectTroopItem;
- (void)onImageDownloadError:(id)arg1;
- (void)onImageDownloadFinished:(id)arg1;
@property(retain, nonatomic) TReactView *reactView; // @synthesize reactView=_reactView;
- (void)removeAnimationAndViews;
- (void)removeControllerFromWindow;
@property(nonatomic) int roomType; // @synthesize roomType=_roomType;
@property(retain, nonatomic) NSMutableArray *selectedMemInfo; // @synthesize selectedMemInfo=_selectedMemInfo;
- (void)sendButtonClick:(id)arg1 msg:(id)arg2;
- (void)setNavBarRightItemHide:(_Bool)arg1;
@property(retain, nonatomic) NSString *shareGroup; // @synthesize shareGroup=_shareGroup;
@property(retain, nonatomic) NSString *shareGroupUin; // @synthesize shareGroupUin=_shareGroupUin;
- (void)setUpRNView;
@property(nonatomic) int zoneId; // @synthesize zoneId=_zoneId;
- (void)showRoomFloate:(id)arg1;
- (void)showShareRichMsgPreviewDialog:(id)arg1;
- (void)startInvitation;
- (void)startReturnAnimation;
- (void)startShowAnimation;
- (void)stateBridge:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

