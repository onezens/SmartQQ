//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTSGroupResultsBaseViewController.h"

#import "FTSAssociationalWordsViewDelegate.h"
#import "FTSHotWordViewDelegate.h"
#import "FTSSubTabSearchHotWordViewDelegate.h"
#import "UISearchBarDelegate.h"

@class FTSAssociationalWordsView, FTSHotWordView, FTSNetDynamicSearchEngine, FTSSubTabSearchHotWordView, NSArray, NSMutableArray, NSString, UILabel, UIView;

@interface FTSGroupDynamicSearchNetResultsViewController : FTSGroupResultsBaseViewController <FTSHotWordViewDelegate, FTSAssociationalWordsViewDelegate, FTSSubTabSearchHotWordViewDelegate, UISearchBarDelegate>
{
    FTSNetDynamicSearchEngine *_ftsNetDynamicSearchEngine;
    NSString *_lastNetSearchKeyWord;
    FTSHotWordView *_dynamicBusiHotWordView;
    FTSAssociationalWordsView *_dynamicAssociationalWordsView;
    UIView *_tableViewHeaderView;
    UILabel *_tableViewHeaderLabel;
    UIView *_tableViewHeaderContentView;
    FTSSubTabSearchHotWordView *_ftsSubTabSearchHotWordView;
    _Bool _isNeedRealTimeSearch;
    NSArray *_groupMasks;
    NSString *_tabName;
    NSMutableArray *_dynamicNetSearchResults;
}

- (void).cxx_destruct;
- (void)FTSATableView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 model:(id)arg3;
- (void)FTSHotWordCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 model:(id)arg3;
- (void)FTSSubTabSearchHotWordCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 model:(id)arg3;
- (_Bool)_handleZhInputLanguage:(id)arg1;
- (void)_performHandleSearchProcess:(id)arg1;
- (void)_searchEventHandleSearchProcess:(id)arg1;
- (void)_searchEventHandleSearchProcessNew:(id)arg1;
- (void)adjustViewFrameWhenCreateSearchBar;
- (void)cancelFTSAction;
- (void)clearGroupResultsTable;
- (void)clearLastSearchWord;
- (void)clickTabOrScrollTabShow;
- (void)closeFTSAllTask;
- (void)dealloc;
@property(retain, nonatomic) NSMutableArray *dynamicNetSearchResults; // @synthesize dynamicNetSearchResults=_dynamicNetSearchResults;
- (void)forceStartNetSearch:(id)arg1;
- (_Bool)ftsCheckIsHaveResults:(id)arg1;
- (id)ftsGetAllFeedModel;
@property(retain, nonatomic) NSArray *groupMasks; // @synthesize groupMasks=_groupMasks;
- (id)initWithSearchKeyword:(id)arg1;
- (void)initializeAssociationalWordsView;
- (void)initializeHotAreaView;
- (void)initializeTableHeaderView;
@property(nonatomic) _Bool isNeedRealTimeSearch; // @synthesize isNeedRealTimeSearch=_isNeedRealTimeSearch;
- (_Bool)isSupportRightDragToGoBack;
- (void)loadView;
- (void)netSearchRequst:(id)arg1 fromAction:(id)arg2;
- (void)onAssociationWordUpdateCallback:(id)arg1;
- (void)onBusiHotWordUpdateCallback:(id)arg1;
- (void)onClickNoMoreResultView:(id)arg1;
- (void)onTableFootLoadingViewClick:(id)arg1;
- (void)onWillDisplayCell:(id)arg1 atIndexPath:(id)arg2;
- (void)processSearchStateChange:(id)arg1 isPinYining:(_Bool)arg2;
- (void)refreshSearchGroupResults:(_Bool)arg1 isNeedContinueRefresh:(_Bool)arg2;
- (void)reloadSearchStateAppearance;
- (void)resetCurrentSearchState:(long long)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchEventHandleSearchProcess:(id)arg1;
- (void)setShowFtsSubTabSearchHotWordView:(_Bool)arg1;
@property(copy, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
- (void)startFTSNetSearch:(id)arg1;
- (void)startFTSNetSearch:(id)arg1 fromAction:(id)arg2;
- (void)startTabSearchRequest:(id)arg1;
- (void)startUniteSearchRequest:(id)arg1 fromAcion:(long long)arg2;
- (void)stopSearchGroupResults:(_Bool)arg1;
- (void)updateAssociationWord:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
