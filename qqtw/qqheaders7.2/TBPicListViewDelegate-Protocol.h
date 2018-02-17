//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBPicItem, TBPicListView;

@protocol TBPicListViewDelegate <NSObject>
- (long long)numberOfPic:(TBPicListView *)arg1;
- (void)resetViewOfPic:(TBPicItem *)arg1 atIndex:(long long)arg2;
- (TBPicItem *)viewOfPic:(TBPicListView *)arg1 atIndex:(long long)arg2;

@optional
- (void)onClickPic:(long long)arg1 withView:(TBPicItem *)arg2;
- (void)onScrollEndToRight;
- (void)onScrollToRequestMoreData;
- (void)viewWillDisuse:(TBPicItem *)arg1 atIndex:(long long)arg2;
@end

