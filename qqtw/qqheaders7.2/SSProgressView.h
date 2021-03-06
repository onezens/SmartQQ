//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer;

@interface SSProgressView : UIView
{
    CALayer *background;
    CALayer *_gradientLayer;
}

- (void)applicationDidBecomeActive:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) CALayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (id)initWithCenter:(struct CGPoint)arg1 outRadius:(double)arg2 midRadius:(double)arg3;
- (void)setShadowColor:(struct CGColor *)arg1;
- (void)showLoading;
- (void)stopLoading;

@end

