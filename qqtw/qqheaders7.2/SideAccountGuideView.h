//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAAnimationGroup, UIImageView, UILabel;

@interface SideAccountGuideView : UIView
{
    UILabel *_textLabel;
    double _arrowPointDef;
    UIView *_tipsView;
    struct CGPoint _arrowPoint;
    struct CGRect _tipShowRect;
    UIImageView *_cInView;
    UIImageView *_cOutView;
    CAAnimationGroup *aniGroup1;
    CAAnimationGroup *aniGroup;
}

- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)show:(_Bool)arg1;
- (void)startAnimation;
- (void)villEnterForground;

@end

