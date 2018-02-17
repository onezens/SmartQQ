//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIButton, UIImageView, UILabel, UIView;

@interface CFT_UITransferSelectBankCell : UITableViewCell
{
    UIView *redPoint;
    UIButton *_FAQLinkButton;
    NSString *_FAQLink;
    int _type;
    UIImageView *_cardIconImageView;
    UILabel *_cardNameLabel;
    UILabel *_cardTypeLabel;
    UIView *_lineView;
    id <UITransferSelectBankCellDelegate> _delegate;
}

@property(retain, nonatomic) UIImageView *cardIconImageView; // @synthesize cardIconImageView=_cardIconImageView;
@property(retain, nonatomic) UILabel *cardNameLabel; // @synthesize cardNameLabel=_cardNameLabel;
@property(retain, nonatomic) UILabel *cardTypeLabel; // @synthesize cardTypeLabel=_cardTypeLabel;
- (void)changeToNormalBg;
- (void)dealloc;
@property(nonatomic) id <UITransferSelectBankCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
- (void)onFAQLink:(id)arg1;
- (void)prepareForReuse;
- (void)setFAQLink:(id)arg1 title:(id)arg2;
- (void)setLogo:(id)arg1 type:(int)arg2;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)showRedPoint:(_Bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
