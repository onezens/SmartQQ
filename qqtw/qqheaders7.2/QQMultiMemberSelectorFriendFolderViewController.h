//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMultiMemberSelectorBaseViewController.h"

#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MulMemSelSearchResultTableView, NSMutableArray, NSString, QQRelationSearchEngine, UITableView;

@interface QQMultiMemberSelectorFriendFolderViewController : QQMultiMemberSelectorBaseViewController <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    QQRelationSearchEngine *_searchEngine;
    MulMemSelSearchResultTableView *_mulMemSelSearchResultTableView;
    NSMutableArray *_mulMemSelGroupDataList;
    UITableView *_friendFolderTabel;
}

- (void)dealloc;
- (void)initSearchResultView;
- (void)initTabelView;
- (void)loadFriendFolderData;
- (void)loadSearchSource;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onDidScrollSearchResultView;
- (void)onDidSelectedSearchResultCallback:(id)arg1;
- (void)onHandleMemberListStateUpdateCallback;
- (void)onHandleSearchResultShowCallback:(id)arg1;
- (void)onHandleSearchSourceLoad;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showSelSearchResultTabel:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

