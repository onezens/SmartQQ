//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTSBaseCellView.h"

@class FTSHighlightRichLabel, UIImageView, UILabel;

@interface FTSFeedMsgCellView : FTSBaseCellView
{
    FTSHighlightRichLabel *_nicknameLabel;
    FTSHighlightRichLabel *_subLabel;
    FTSHighlightRichLabel *_summaryLabel;
    UILabel *_timeLabel;
    UIImageView *_enterArrowIcon;
}

- (void).cxx_destruct;
- (void)handleMultiResultsShowOriginX:(double)arg1 originY:(double)arg2 maxLen:(double)arg3 withFeedModel:(id)arg4;
- (void)handleSingleResultsShowOriginX:(double)arg1 originY:(double)arg2 maxLen:(double)arg3 withFeedModel:(id)arg4;
- (void)initCellUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutSubviewsFTSFeedMsgList;
- (void)loadCellWithFTSFeedInfo:(id)arg1;

@end
