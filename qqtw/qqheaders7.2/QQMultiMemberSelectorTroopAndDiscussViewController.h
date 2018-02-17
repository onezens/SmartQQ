//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMultiMemberSelectorBaseViewController.h"

#import "DiscussListViewDelegate.h"
#import "TroopListViewDelegate.h"

@class MulMemSelDiscussListTableView, MulMemSelSearchResultTableView, MulMemSelTroopAndDiscussListEmptyView, MulMemSelTroopListTableView, NSString, QQRelationSearchEngine, QQTabWithInPageControl, UIView;

@interface QQMultiMemberSelectorTroopAndDiscussViewController : QQMultiMemberSelectorBaseViewController <TroopListViewDelegate, DiscussListViewDelegate>
{
    QQRelationSearchEngine *_searchEngine;
    MulMemSelSearchResultTableView *_mulMemSelSearchResultTableView;
    UIView *_segmentPanel;
    QQTabWithInPageControl *_segmentControl;
    long long _selectedIdx;
    MulMemSelTroopListTableView *_troopListView;
    MulMemSelDiscussListTableView *_discussListView;
    MulMemSelTroopAndDiscussListEmptyView *_emptyView;
}

- (void).cxx_destruct;
- (void)initDiscussListView;
- (void)initSearchResultView;
- (void)initTroopListView;
- (id)initWithMulMemSelUserInfo:(id)arg1 memCustomSearchBar:(id)arg2 withDelegate:(id)arg3;
- (void)initializeSegmentControl;
- (void)loadDiscussListData;
- (void)loadEmptyView;
- (void)loadSearchSource;
- (void)loadTroopListData;
- (void)loadView;
- (void)onDidScrollDiscussView;
- (void)onDidScrollSearchResultView;
- (void)onDidScrollTroopView;
- (void)onDidSelectDiscussCallBack:(id)arg1;
- (void)onDidSelectTroopCallBack:(id)arg1;
- (void)onDidSelectedSearchResultCallback:(id)arg1;
- (void)onHandleMemberListStateUpdateCallback;
- (void)onHandleSearchResultShowCallback:(id)arg1;
- (void)onHandleSearchSourceLoad;
- (void)onNotifyGroupInfoPrivilegeFlag:(id)arg1;
- (void)setTopView:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)switchTableView:(_Bool)arg1;
- (void)valueChanged:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
