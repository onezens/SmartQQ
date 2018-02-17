//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQRelationTabBaseViewController.h"

#import "DiscussGroupListViewDelegate.h"
#import "GroupListViewDelegate.h"
#import "GroupRecommendListViewDelegate.h"
#import "IDiscussGroupListView.h"
#import "MulMemSelBusiProcessDelegate.h"
#import "QQCreateGroupAuthorityDelegate.h"
#import "QQRightMenuViewDelegate.h"
#import "QQSearchResultClickResponding.h"
#import "QQTabMenuDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DiscussGroupListViewNew, GroupListViewNew, NSMutableArray, NSString, NSTimer, ODRefreshControl, ODRefreshControlWithSectionHeaderFixed, QQRightMenuView, QQTabWithInPageControl, UIView;

@interface GroopAndDiscussViewController : QQRelationTabBaseViewController <UITableViewDataSource, UITableViewDelegate, QQSearchResultClickResponding, QQCreateGroupAuthorityDelegate, MulMemSelBusiProcessDelegate, QQTabMenuDelegate, GroupListViewDelegate, IDiscussGroupListView, DiscussGroupListViewDelegate, GroupRecommendListViewDelegate, QQRightMenuViewDelegate>
{
    GroupListViewNew *_groupListView;
    ODRefreshControlWithSectionHeaderFixed *_refreshGroopListControl;
    ODRefreshControl *_refreshDiscussListControl;
    int _getGroupListSeq;
    NSTimer *_refreshGroupListTimer;
    NSTimer *_refreshDiscussListTimer;
    QQRightMenuView *_rightMenu;
    DiscussGroupListViewNew *_discussTableView;
    NSMutableArray *_discussTableData;
    QQTabWithInPageControl *_segmentControl;
    UIView *_segmentPanel;
    UIView *_contentView;
    _Bool _notifyLoad;
    int _initialIndex;
    long long _curIndex;
    _Bool _hideCellAccessory;
    _Bool _fromOuter;
    long long _initCreateGroupType;
    QQTabWithInPageControl *segmentControl;
    NSMutableArray *_memberArrary;
    int _currentCreateGroupSeq;
    _Bool _isPerformingRefreshDiscussList;
    _Bool _bSupportGroupSaveHeadersId;
    _Bool _bSupportDiscussSaveHeadersId;
    struct CGPoint _lastGroupListViewContentOffset;
    int _lastReloadTime;
    _Bool _canEditRowForItem;
    _Bool _supportLongPress;
    _Bool _canShowToast;
    _Bool _isJumpingToSuperGroupOwnerPage;
}

- (void)addGroup;
- (void)applyLastBtnChoice;
@property(nonatomic) _Bool canEditRowForItem; // @synthesize canEditRowForItem=_canEditRowForItem;
@property(nonatomic) _Bool canShowToast; // @synthesize canShowToast=_canShowToast;
- (void)createDiscussGroup;
- (void)createGroup;
- (void)createGroupWithMember;
- (void)createRightMenu;
- (void)dealloc;
- (void)delayDiscussEndRefreshing:(_Bool)arg1;
- (void)delayEndRefreshing:(_Bool)arg1;
- (void)didCreateGroupRespondOnDiscuss:(id)arg1;
- (void)discussGroupListOnAddClick;
- (void)discussGroupListViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)discussGroupListViewDidScroll:(id)arg1;
- (void)doRefreshDiscussList;
- (void)doSelectedAction;
- (void)dropDiscussViewDidBeginRefreshing:(id)arg1;
- (void)dropGroopViewDidBeginRefreshing:(id)arg1;
- (void)forceToSelectIndex:(long long)arg1;
- (int)getLastTabIndex;
- (id)getTableViewByIndex:(long long)arg1;
- (void)groupListClickAddGroup;
- (void)groupListViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)groupListViewDidScroll:(id)arg1;
- (void)groupListViewWillBeginDragging:(id)arg1;
- (void)groupMsgSetting;
- (void)handleQQAccountLogoutNotification:(id)arg1;
- (id)init;
- (void)initContentView;
- (void)initDisCussChatViewController:(id)arg1;
- (void)initDiscussListData;
- (id)initWithSupportGroupSaveHeadersId:(_Bool)arg1 supportDiscussSaveHeadersId:(_Bool)arg2;
- (void)initializeSegmentControl;
@property(nonatomic) _Bool isJumpingToSuperGroupOwnerPage; // @synthesize isJumpingToSuperGroupOwnerPage=_isJumpingToSuperGroupOwnerPage;
- (_Bool)isSupportFullScreenLayout;
- (void)leftButtonClick:(id)arg1;
- (void)loadDiscussListView;
- (void)loadGroopListView;
- (void)loadPersonalTheme;
- (void)loadView;
@property(retain, nonatomic) NSMutableArray *memberArrary; // @synthesize memberArrary=_memberArrary;
- (void)menuCellDidClick:(id)arg1;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)onGetCreateGroupAuthority:(int)arg1 groupCode:(unsigned int)arg2 groupUin:(unsigned int)arg3 sign:(id)arg4 svrErrorCode:(int)arg5;
- (void)onJumpFindGroup;
- (void)onRecommendGroupClick:(id)arg1;
- (void)onResultCellClick:(id)arg1;
- (void)popToRootOnLogout;
- (void)popToRootView:(id)arg1;
- (void)refreshDListSuccess;
- (void)refreshData;
- (void)refreshDiscussInfo:(long long)arg1;
- (void)refreshDiscussList;
- (void)refreshDiscussListFail;
- (void)refreshDiscussListPeriodically;
- (void)refreshDiscussListTimeout;
- (void)refreshDiscussListWithFrequencyControl:(double)arg1;
- (void)refreshGroopListTimeout;
- (void)refreshGroupList;
- (void)refreshGroupListResult:(id)arg1;
- (void)refreshGroupListSuccess;
- (void)registerGroupContactTimeReporter;
- (void)reload;
- (void)reloadAppearance;
- (void)reloadDestTableData;
- (void)reloadDestTableDataDelay;
- (void)resetGroupHeadRequestState;
- (void)resetListState;
- (void)saveTabIndex;
- (void)scrollListToTop;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)setBSelected:(_Bool)arg1;
@property(nonatomic) _Bool supportLongPress; // @synthesize supportLongPress=_supportLongPress;
- (void)showCommonGroupSettingLimitation:(id)arg1;
- (void)showRightMenu;
- (void)superGroupOwnerEntryExpReport;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateDiscussGroupList;
- (void)valueChanged:(id)arg1;
- (double)viewControllerContentOffsetY;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (int)viewTag;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(nonatomic) long long curIndex; // @dynamic curIndex;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool fromOuter; // @dynamic fromOuter;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hideCellAccessory; // @dynamic hideCellAccessory;
@property(nonatomic) long long initCreateGroupType; // @dynamic initCreateGroupType;
@property(nonatomic) int initialIndex; // @dynamic initialIndex;
@property(retain, nonatomic) QQTabWithInPageControl *segmentControl; // @dynamic segmentControl;
@property(readonly) Class superclass;

@end

