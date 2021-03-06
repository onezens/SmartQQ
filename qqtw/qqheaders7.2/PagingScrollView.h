//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableDictionary, NSString;

@interface PagingScrollView : UIScrollView <UIScrollViewDelegate>
{
    id <PagingScrollViewDataSource> _dataSource;
    id <PagingScrollViewDelegate> _pagingDelegate;
    long long _currentIndex;
    int _xo;
    NSMutableDictionary *_mdicContentViews;
    NSMutableDictionary *_mdicReusableViews;
}

- (void).cxx_destruct;
- (void)cacheReuseViewItem:(id)arg1;
- (id)contentViewForIndex:(long long)arg1;
- (id)dequeueReusableViewWithIdentifier:(id)arg1 index:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (long long)numberOfItems;
- (struct CGRect)rectForContentViewIndex:(long long)arg1;
- (void)reloadData;
- (void)reloadItem:(long long)arg1;
- (id)reuseViewItemWithIdentifier:(id)arg1 index:(long long)arg2;
- (void)scrollToRowAtIndex:(long long)arg1;
- (void)scrollToRowAtIndex:(long long)arg1 withAnimation:(_Bool)arg2;
- (void)scrollToRowAtIndexNoAnimation:(long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(nonatomic) __weak id <PagingScrollViewDataSource> dataSource; // @dynamic dataSource;
- (void)setPagingEnabled:(_Bool)arg1;

// Remaining properties
@property(nonatomic) long long currentIndex; // @dynamic currentIndex;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <PagingScrollViewDelegate> pagingDelegate; // @dynamic pagingDelegate;
@property(readonly) Class superclass;

@end

