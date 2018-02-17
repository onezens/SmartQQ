//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface QQContactCardTableViewCell : UITableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_infoTextLabel;
    UIImageView *_arrowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *infoTextLabel; // @synthesize infoTextLabel=_infoTextLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setup;
- (void)updateLayout;
- (void)updateWithImageName:(id)arg1 withText:(id)arg2 isShowArrow:(_Bool)arg3;

@end

