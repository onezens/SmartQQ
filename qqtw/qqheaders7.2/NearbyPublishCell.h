//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TightTableViewCell.h"

@class NMCommentView, NSMutableArray, NSString, UILabel, UIView;

@interface NearbyPublishCell : TightTableViewCell
{
    UILabel *_titleLabel;
    UIView *_titleBackgroud;
    UIView *_separateView;
    UILabel *_desStyleLabel;
    NMCommentView *_desLabel;
    NSString *_desContent;
    struct CGRect _lastImageRect;
    NSMutableArray *_imageViewArr;
}

- (void).cxx_destruct;
- (void)configure:(id)arg1;
- (id)createRichTextView;
- (void)initCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)reloadAppearance;

@end
