//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, UIColor;

@interface QQCircleManulAnimation : UIView
{
    CAShapeLayer *_layer;
    UIColor *_circleTintColor;
}

@property(retain, nonatomic) UIColor *circleTintColor; // @synthesize circleTintColor=_circleTintColor;
- (void)dealloc;
- (void)endCircleAnimation;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)showCircleAnimation:(float)arg1;
- (void)updateCircleAnimation:(float)arg1;

@end

