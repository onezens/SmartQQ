//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CloudTagsView, UIButton, UIImageView, UILabel;

@interface QQPersonalTagQRCodeContainer : UIView
{
    CloudTagsView *_tagsView;
    UIImageView *_qrCodeImageView;
    UIImageView *_logoImageView;
    UIImageView *_containerBkg;
    UIButton *_containerBtn;
    UILabel *_titleLabel;
    UILabel *_titleLabel2;
}

- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
@property(nonatomic) __weak UIImageView *containerBkg; // @synthesize containerBkg=_containerBkg;
@property(nonatomic) __weak UIButton *containerBtn; // @synthesize containerBtn=_containerBtn;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(nonatomic) __weak UIImageView *qrCodeImageView; // @synthesize qrCodeImageView=_qrCodeImageView;
@property(retain, nonatomic) CloudTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(nonatomic) __weak UILabel *titleLabel2; // @synthesize titleLabel2=_titleLabel2;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setWords:(id)arg1 useWhiteTheme:(_Bool)arg2 cloudWordRegionSize:(struct CGSize)arg3 nickname:(id)arg4;

@end

