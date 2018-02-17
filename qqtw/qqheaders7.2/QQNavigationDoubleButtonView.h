//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface QQNavigationDoubleButtonView : UIButton
{
    UIButton *_leftButton;
    UIButton *_rightButton;
}

- (void).cxx_destruct;
- (id)initWithLeftButton:(id)arg1 rightButton:(id)arg2;
- (void)layoutSubviews;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
- (void)reloadAppearance;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
- (void)sizeToFit;
- (void)updateButton:(id)arg1 color:(id)arg2;
- (void)updateButtonColor:(id)arg1;

@end

