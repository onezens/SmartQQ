//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@interface UITableCellStepView : UITableViewCell
{
    int feedBackType;
    int feedBackStyle;
    _Bool drawSepLine;
    int currentSkin;
    _Bool needHightArrow;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initialize;
- (void)layoutSubviews;
- (void)setFeedBackBg:(int)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;

@end

