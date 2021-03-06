//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SglMemSelBusiProcessDelegate.h"
#import "SpriteDataManagerDelegate.h"
#import "SpritePanelGameViewDelagate.h"
#import "SpritePanelKeyboardViewDelegate.h"
#import "SpritePanelScrollViewDelegate.h"
#import "SpritePanelTabBarDelegate.h"

@class NSMutableArray, NSNumber, NSString, QQAlertView, QQPageControl, SpriteItemControl, SpriteOpenTipView, SpritePanelModel, SpritePanelNoDataTipView, SpritePanelScrollView, SpritePanelTabBar, UIActivityIndicatorView;

@interface SpritePanelView : UIView <SglMemSelBusiProcessDelegate, SpritePanelKeyboardViewDelegate, SpritePanelGameViewDelagate, SpriteDataManagerDelegate, SpritePanelScrollViewDelegate, SpritePanelTabBarDelegate>
{
    SpritePanelScrollView *_scrollView;
    SpritePanelTabBar *_tabBar;
    QQPageControl *_pageIndicator;
    SpritePanelModel *_panelModel;
    struct SpritePanelPagePointer _leftPointer;
    struct SpritePanelPagePointer _middlePointer;
    struct SpritePanelPagePointer _rightPointer;
    struct SpritePanelPagePointer _currentPointer;
    SpriteOpenTipView *_openTipView;
    NSMutableArray *_loadingActions;
    SpritePanelNoDataTipView *_noDataTipView;
    UIActivityIndicatorView *_loadingView;
    id <SpritePanelDelegate> _delegate;
    _Bool _isGroup;
    int _failJsonType;
    NSNumber *_targetPkgID;
    NSNumber *_targetActionID;
    NSNumber *_targetGameID;
    _Bool _needRelocate;
    QQAlertView *tipAlert;
    SpriteItemControl *_curHitTouchControl;
}

+ (_Bool)isActionTab:(unsigned long long)arg1;
- (id)GetBaseChatModel;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)configScrollViewDataWithPackageId:(int)arg1 pageIndex:(int)arg2 actionIndexAtCurrentPage:(int)arg3;
- (void)configUI;
@property(retain, nonatomic) SpriteItemControl *curHitTouchControl; // @synthesize curHitTouchControl=_curHitTouchControl;
- (unsigned long long)currentGameId;
- (void)dataReportForClickingActivityActionItem:(id)arg1;
- (void)dataReportForClickingJoinActivityAlertOK:(id)arg1;
- (void)dealloc;
@property(nonatomic) id <SpritePanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didAtSelectedMember:(id)arg1;
- (void)didEndScrolling:(id)arg1;
- (void)didFinishFetchPermission:(_Bool)arg1 err:(id)arg2 url:(id)arg3 action:(id)arg4;
- (void)didFinishLoadFunPreviewRes:(id)arg1 path:(id)arg2 isSuccess:(_Bool)arg3;
- (void)didFinishLoadPanelModel:(id)arg1 isSuccess:(_Bool)arg2 jsonType:(int)arg3;
- (void)didFinishLoadPlayRes:(id)arg1 action:(id)arg2 isSuccess:(_Bool)arg3;
- (void)didFinishLoadPreview:(id)arg1 action:(id)arg2 isSuccess:(_Bool)arg3;
- (void)didFinishLoadShowIcon:(id)arg1 action:(id)arg2 isSuccess:(_Bool)arg3;
- (void)didFinishOpenSwitch:(_Bool)arg1 err:(id)arg2;
- (void)didTapItem:(id)arg1;
- (void)didUpdateFavoriteActionList:(id)arg1;
- (void)didUpdateGameList:(id)arg1;
- (void)entryJoninActionWithUrl:(id)arg1;
- (void)entryOpenVip:(id)arg1;
- (void)entryViewDetail:(id)arg1;
- (id)findAtSomeoneInText:(id)arg1;
- (void)freshActionJsonEvent:(id)arg1;
- (id)getEnterType;
- (id)getGameItemModels;
- (int)getLastSelectActionPage;
- (int)getLastSelectTab;
- (id)getUpLoadEnterStrWithItemModel:(id)arg1 withInputContent:(id)arg2;
- (_Bool)hasTinyGame;
- (void)hideLoadingActionJsonStatus;
- (void)hideNoDataTipView;
- (id)initWithFrame:(struct CGRect)arg1 chatViewController:(id)arg2 spriteState:(int)arg3;
- (_Bool)isCanShowIconWith:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (id)keyboardViewWithItemModels:(id)arg1 packageType:(int)arg2;
- (id)leftView:(id)arg1;
- (void)locatePkgID:(id)arg1 actionID:(id)arg2 gameId:(id)arg3;
- (void)markSelectActionPage:(int)arg1;
- (void)markSelectTab:(int)arg1;
- (void)onBusiProcessDidSelectedSglMem:(id)arg1 currViewContr:(id)arg2;
- (void)onGamePanelBtnClicked:(id)arg1 type:(int)arg2;
- (void)onGoBackGame:(id)arg1;
- (void)onStartGameClicked:(id)arg1 type:(unsigned long long)arg2;
- (void)openSprite;
- (id)pkdIdArrayOfShowingRedDot;
- (void)pushShopVCWithParam:(id)arg1;
- (void)reloadWithPanelModel:(id)arg1;
- (void)reportPanelEntryClick;
- (id)rightView:(id)arg1;
- (void)sendMessage:(id)arg1;
- (id)sendWithModel:(id)arg1 menuin:(id)arg2 memName:(id)arg3;
- (void)setHidden:(_Bool)arg1;
- (void)setSpriteStatus:(int)arg1;
@property(retain, nonatomic) QQAlertView *tipAlert; // @synthesize tipAlert;
- (void)showActionSpriteTipRightTitle:(id)arg1 msg:(id)arg2 url:(id)arg3 selecter:(id)arg4 model:(id)arg5;
- (void)showFreshLoadingActionJson;
- (void)showNoDataTipView;
- (void)showTipOpenSprintView:(int)arg1;
- (void)showTipsImg:(id)arg1 atRootView:(id)arg2 startY:(int)arg3 success:(_Bool)arg4;
- (void)spriteApolloNotification:(id)arg1;
- (void)spritePanelKeyboardView:(id)arg1 didClickSpriteItemControl:(id)arg2;
- (void)updateKeyBoard;
- (void)updatePageControl;
- (void)updateTabWithPkgId:(int)arg1;
- (void)uploadDoubleSend:(id)arg1 content:(id)arg2 isGroup:(_Bool)arg3 menuin:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

