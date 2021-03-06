//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIImage, UIImageView;

@interface ButtonWithRedPoint : UIButton
{
    UIImageView *_redPoint;
    UIImageView *_backgroupImageView;
    NSString *_norBgImgName;
    NSString *_highLightBgImgName;
    NSString *_selectedBgImgName;
    int _xo;
    UIImage *_norBgImg;
    UIImage *_highBgImg;
    UIImage *_selectBgImg;
}

- (void)dealloc;
@property(retain, nonatomic) UIImage *highBgImg; // @synthesize highBgImg=_highBgImg;
@property(retain, nonatomic) NSString *highLightBgImgName; // @synthesize highLightBgImgName=_highLightBgImgName;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *norBgImg; // @synthesize norBgImg=_norBgImg;
@property(retain, nonatomic) NSString *norBgImgName; // @synthesize norBgImgName=_norBgImgName;
@property(retain, nonatomic) UIImageView *redPoint; // @synthesize redPoint=_redPoint;
- (void)reloadAppearance;
@property(retain, nonatomic) UIImage *selectBgImg; // @synthesize selectBgImg=_selectBgImg;
@property(retain, nonatomic) NSString *selectedBgImgName; // @synthesize selectedBgImgName=_selectedBgImgName;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)updateBgImgView;

@end

