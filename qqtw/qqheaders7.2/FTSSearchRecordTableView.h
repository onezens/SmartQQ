//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "FTSRecommendViewDelegate.h"
#import "QQDynamicHotWordsAreaDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FTSRecommendView, NSArray, NSLock, NSString, QQDynamicHotWordsAreaNew;

@interface FTSSearchRecordTableView : UITableView <UITableViewDataSource, UITableViewDelegate, FTSRecommendViewDelegate, QQDynamicHotWordsAreaDelegate>
{
    unsigned long long _searchEntranceTabType;
    unsigned long long _showModeType;
    NSArray *_searchRecords;
    NSLock *_searchRecordsLock;
    NSString *_lastSearchKeyword;
    FTSRecommendView *_recommendView;
    NSArray *_recommendItems;
    QQDynamicHotWordsAreaNew *_dynamicHotArea;
    id <FTSSearchRecordTableViewDelegate> _tableViewdelegate;
}

- (void).cxx_destruct;
- (void)FTSRCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 itemData:(id)arg3;
- (void)addSearchRecords:(id)arg1;
- (void)deleteSearchRecord:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 searchEntranceTabType:(unsigned long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onSelectArticleItem;
- (void)qqDynamicHotIndexDidClicked:(id)arg1;
- (void)qqDynamicHotWordDidClicked:(id)arg1;
- (void)reloadData;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)sectionHeaderViewWithTitle:(id)arg1 tableView:(id)arg2 section:(long long)arg3 separatorHidden:(_Bool)arg4;
- (void)setLastSearchKeyword:(id)arg1;
@property(nonatomic) __weak id <FTSSearchRecordTableViewDelegate> tableViewdelegate; // @synthesize tableViewdelegate=_tableViewdelegate;
- (unsigned long long)sourceTypeWithSection:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

