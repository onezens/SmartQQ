//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface QQAIOVideoCellTipsView : UIView
{
    UIImageView *_iconImageView;
    UILabel *_tipsLabel;
}

- (void)dealloc;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setImage:(id)arg1;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void)setTipsText:(id)arg1;
- (void)setTipsText:(id)arg1 adjustSize:(_Bool)arg2;

@end
