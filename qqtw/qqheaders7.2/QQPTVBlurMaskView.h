//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UIColor;

@interface QQPTVBlurMaskView : UIImageView
{
    UIColor *_bgColor;
    double _radius;
    double _maskCenterYOffset;
    struct CGPoint _maskCenter;
}

@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) struct CGPoint maskCenter; // @synthesize maskCenter=_maskCenter;
@property(nonatomic) double maskCenterYOffset; // @synthesize maskCenterYOffset=_maskCenterYOffset;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (void)setBackgroundImg:(id)arg1;

@end

