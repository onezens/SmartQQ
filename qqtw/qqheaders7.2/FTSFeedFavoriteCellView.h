//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTSBaseCellView.h"

@class FTSHighlightRichLabel, FavImageView, UIImageView, UILabel, UIView;

@interface FTSFeedFavoriteCellView : FTSBaseCellView
{
    FTSHighlightRichLabel *_summaryLabel;
    FTSHighlightRichLabel *_srcLabel;
    UILabel *_comeFromLable;
    FavImageView *_favImageView;
    UIView *_leftView;
    UIImageView *_playView;
}

- (void).cxx_destruct;
- (void)adjustSubviews;
- (void)initCellUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)loadCellWithFTSFeedInfo:(id)arg1;

@end

