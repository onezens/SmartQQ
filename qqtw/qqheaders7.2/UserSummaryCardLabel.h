//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImageView, UILabel;

@interface UserSummaryCardLabel : UIButton
{
    UIImageView *_iconView;
    UIImageView *_arrowView;
    struct CGPoint _iconPoint;
    struct CGPoint _labelPoint;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
- (struct CGPoint)adjustCenterForIP6:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutContentByTableHeaderView:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;

@end
