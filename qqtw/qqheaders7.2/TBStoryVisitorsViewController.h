//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "MQZoneTableFootLoadingViewDelegate.h"
#import "TBBizNetworkLogicDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MQZoneTableFootLoadingView, NSMutableArray, NSString, TBQQUserInfoModel, UILabel, UITableView, UIView;

@interface TBStoryVisitorsViewController : QQViewController <UITableViewDataSource, UITableViewDelegate, MQZoneTableFootLoadingViewDelegate, TBBizNetworkLogicDelegate>
{
    UITableView *_tableView;
    MQZoneTableFootLoadingView *_loadMoreFooter;
    UILabel *_strangerViewLabel;
    UIView *_errCGIView;
    UILabel *_noNetworkLabel;
    UIView *_footerView;
    NSString *_feedID;
    TBQQUserInfoModel *_userInfo;
    NSMutableArray *_visitorList;
    NSMutableArray *_renderList;
    _Bool _isEmpty;
    _Bool _isEnd;
    unsigned long long _visitorSeq;
    _Bool _isHost;
    unsigned long long _pageSource;
}

- (void)dealloc;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (id)getUnionIDsWithUserList:(id)arg1;
- (void)handleRspGetSimpleUserInfoList:(id)arg1;
- (void)handleRspGetVisitorList:(id)arg1 seq:(unsigned long long)arg2;
- (id)initWithFeedID:(id)arg1 userInfo:(id)arg2;
- (void)loadMoreData;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(nonatomic) unsigned long long pageSource; // @synthesize pageSource=_pageSource;
- (void)refreshFetchUIStatus:(long long)arg1;
- (void)reloadWhenErr;
- (void)requestVisitorList:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableFootLoadingViewDidTriggerLoading:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

