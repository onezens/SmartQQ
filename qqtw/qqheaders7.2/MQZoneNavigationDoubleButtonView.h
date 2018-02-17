//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImage;

@interface MQZoneNavigationDoubleButtonView : UIView
{
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIImage *_defaultImage;
    UIImage *_customImage;
    UIImage *_customPressImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *customImage; // @synthesize customImage=_customImage;
@property(retain, nonatomic) UIImage *customPressImage; // @synthesize customPressImage=_customPressImage;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
- (void)hideLeftButton:(_Bool)arg1;
- (void)hideRightButton:(_Bool)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
- (id)maskLayer;
- (void)reloadAppearance;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
- (void)setLeftButton:(id)arg1 animated:(_Bool)arg2;
- (void)setRightButton:(id)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateCustomTheme:(_Bool)arg1;

@end
