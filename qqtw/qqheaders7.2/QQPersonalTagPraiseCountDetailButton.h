//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UILabel;

@interface QQPersonalTagPraiseCountDetailButton : UIButton
{
    UILabel *_totalCountLabel;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setPraiseUserInfoArray:(id)arg1 praiseCount:(unsigned long long)arg2;
@property(nonatomic) __weak UILabel *totalCountLabel; // @synthesize totalCountLabel=_totalCountLabel;

@end

