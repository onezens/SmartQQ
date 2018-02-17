//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "MQZoneTableFootLoadingViewDelegate.h"
#import "MulMemSelBusiProcessDelegate.h"
#import "QQShareGroupMgrDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UserSummaryNavBarItemDelagate.h"

@class MQZoneTableFootLoadingView, NSMutableArray, NSString, ODRefreshControl, QQShareGroupMgr, QQShareGroupSelectorModel, UIAlertView, UITableView, UIView, UserSummaryNavigationBar;

@interface QQSSGThemeSelectorViewController : QQViewController <UITableViewDataSource, UITableViewDelegate, MQZoneTableFootLoadingViewDelegate, UserSummaryNavBarItemDelagate, QQShareGroupMgrDelegate, UIAlertViewDelegate, MulMemSelBusiProcessDelegate>
{
    UserSummaryNavigationBar *_userNavigationBar;
    UITableView *_tableView;
    ODRefreshControl *_refreshControl;
    MQZoneTableFootLoadingView *_loadMoreFooter;
    QQShareGroupMgr *_shareGroupMgr;
    _Bool _showAlertView;
    _Bool _isGroupListEnd;
    unsigned int _groupListPageSize;
    id <QQSSGThemeSelectorViewControllerDelegate> _delegate;
    unsigned long long _bizType;
    NSMutableArray *_dataSource;
    UIAlertView *_didSelectedAlertView;
    NSString *_nextCookie;
    NSString *_selfUnionID;
    QQShareGroupSelectorModel *_currentSelectedModel;
    NSMutableArray *_selectedModels;
    UIAlertView *_alertView;
    UIView *_emptyView;
}

- (void).cxx_destruct;
- (void)addCustomNavigationBar;
- (void)addObserver;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) unsigned long long bizType; // @synthesize bizType=_bizType;
- (void)createShareGroupNotification:(id)arg1;
- (void)createUI;
@property(retain, nonatomic) QQShareGroupSelectorModel *currentSelectedModel; // @synthesize currentSelectedModel=_currentSelectedModel;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
- (void)dealloc;
@property(nonatomic) __weak id <QQSSGThemeSelectorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deselectAllModel;
- (void)didReceiveMemoryWarning;
@property(retain, nonatomic) UIAlertView *didSelectedAlertView; // @synthesize didSelectedAlertView=_didSelectedAlertView;
- (void)dropViewDidBeginRefreshing:(id)arg1;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
- (void)failedToConnect;
- (id)filterDidSelectedModelFromDataSource;
@property(nonatomic) unsigned int groupListPageSize; // @synthesize groupListPageSize=_groupListPageSize;
- (void)handleNavBarItemClick:(_Bool)arg1;
- (void)hiddenLoadingMore:(_Bool)arg1;
- (void)hideEmptyView;
- (id)initWithBizType:(unsigned long long)arg1;
- (id)initWithBizType:(unsigned long long)arg1 selectedGroups:(id)arg2;
@property(nonatomic) _Bool isGroupListEnd; // @synthesize isGroupListEnd=_isGroupListEnd;
- (_Bool)isStoryBizType;
- (void)leftButtonClick:(id)arg1;
- (void)loadDataFromCache;
- (void)loadNextPage;
- (id)modelWithIndexPath:(id)arg1;
@property(retain, nonatomic) NSString *nextCookie; // @synthesize nextCookie=_nextCookie;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onBusinessProcessPopCancelMulMemSelector:(id)arg1 currentViewControllerClass:(id)arg2 selectedMember:(id)arg3;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)onClickNavBarRightButton:(id)arg1;
- (void)refreshDataRequest;
- (void)reloadData;
- (void)requestData;
- (void)requestUserShareGroupListWithCookie:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) NSMutableArray *selectedModels; // @synthesize selectedModels=_selectedModels;
@property(retain, nonatomic) NSString *selfUnionID; // @synthesize selfUnionID=_selfUnionID;
- (void)setNavitationTitle:(id)arg1;
@property(nonatomic) _Bool showAlertView; // @synthesize showAlertView=_showAlertView;
@property(retain, nonatomic) UserSummaryNavigationBar *userNavigationBar; // @synthesize userNavigationBar=_userNavigationBar;
- (void)shareGroupMgr:(id)arg1 onShareGroupListInfo:(id)arg2 errorInfo:(id)arg3;
- (void)showEmptyView;
- (void)stopLoadingWithErr:(_Bool)arg1;
- (void)stopRefreshCtrlAnimate:(_Bool)arg1 isShowFailedTips:(_Bool)arg2;
- (void)tableFootLoadingViewDidTriggerLoading:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

