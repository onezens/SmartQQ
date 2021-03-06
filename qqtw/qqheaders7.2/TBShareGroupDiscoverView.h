//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "MQZoneTableFootLoadingViewDelegate.h"
#import "TBStoryDiscoveryMgrDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MQZoneTableFootLoadingView, NSMutableArray, NSString, ODRefreshControl, TBStoryDiscoveryMgr;

@interface TBShareGroupDiscoverView : UITableView <UITableViewDelegate, UITableViewDataSource, MQZoneTableFootLoadingViewDelegate, TBStoryDiscoveryMgrDelegate>
{
    NSMutableArray *_dataSource;
    ODRefreshControl *_refreshControl;
    MQZoneTableFootLoadingView *_loadMoreFooter;
    TBStoryDiscoveryMgr *_discoveryMgr;
    NSMutableArray *_squareData;
    NSMutableArray *_groupInfoList;
    NSMutableArray *_unDisplayedGroupIDList;
    _Bool _isScrollDownside;
    int _currentOffsetY;
    _Bool _isEnd;
    id <TBShareGroupDiscoverViewDelegate> _shareGroupDelegate;
    NSString *_nextCookie;
}

- (void)beginAutoPlayingVideo;
- (void)createUI;
- (void)dealloc;
- (void)dropViewDidBeginRefreshing:(id)arg1;
- (void)failedToConnect;
- (struct CGRect)getTableViewCellRectOnScreen:(id)arg1;
- (void)hiddenLoadingMore:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (_Bool)isAllowAutoplay;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
- (_Bool)isEnterPlayArea:(_Bool)arg1 indexPath:(id)arg2;
- (_Bool)isWifiNetWork;
- (void)loadData;
- (void)loadNextPage;
- (id)modelWithIndexPath:(id)arg1;
@property(retain, nonatomic) NSString *nextCookie; // @synthesize nextCookie=_nextCookie;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onShareGroupInfoUpdateNotify:(id)arg1;
- (void)refreshDataRequest;
- (void)requestData;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(nonatomic) id <TBShareGroupDiscoverViewDelegate> shareGroupDelegate; // @synthesize shareGroupDelegate=_shareGroupDelegate;
- (void)shareGroupDiscoverMgr:(id)arg1 onBannerListInfo:(id)arg2 errorInfo:(id)arg3;
- (void)shareGroupDiscoverMgr:(id)arg1 onShareGroupInfoList:(id)arg2 errorInfo:(id)arg3;
- (void)shareGroupDiscoverMgr:(id)arg1 onShareGroupUnionIDListInfo:(id)arg2 errorInfo:(id)arg3;
- (void)stopAutoPlayingVideo;
- (void)stopLoadingWithErr:(_Bool)arg1;
- (void)stopRefreshCtrlAnimate:(_Bool)arg1 isShowFailedTips:(_Bool)arg2;
- (void)tableFootLoadingViewDidTriggerLoading:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

