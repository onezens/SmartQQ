//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CellContainerView.h"

@class UIImageView, UILabel;

@interface ViewControllerMaskView : CellContainerView
{
    UIImageView *_imageViewUp;
    UIImageView *_imageViewDown;
    UILabel *_descriptionLabel;
    double _bottomInset;
}

@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (void)dismiss:(id)arg1;
@property(retain, nonatomic) UIImageView *imageViewDown; // @synthesize imageViewDown=_imageViewDown;
@property(retain, nonatomic) UIImageView *imageViewUp; // @synthesize imageViewUp=_imageViewUp;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupUI;
- (void)showInView:(id)arg1;
- (void)startAnimation;
- (_Bool)visible;

@end

