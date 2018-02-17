//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class CAGradientLayer, CALayer, CAShapeLayer, NSMutableArray, NSString, NSTimer, UIButton, UIImageView, UILabel;

@interface QQSafeHeaderView : UIView <CAAnimationDelegate>
{
    CALayer *_topCoverLayer;
    CAGradientLayer *_riskLevelLayer;
    CAShapeLayer *_ocLayer;
    CAShapeLayer *_icLayer;
    BOOL _level;
    _Bool _isLoading;
    UIImageView *_circleProgress;
    UIImageView *_shield;
    UIImageView *_qq;
    UIImageView *_levelIco;
    CALayer *_scanLine;
    NSMutableArray *_scanLines;
    UILabel *_loadingLabel;
    NSTimer *_countTimer;
    int _count;
    NSString *_loadingText;
    CALayer *_backLayer;
    UIButton *_infoButton;
}

- (void).cxx_destruct;
- (id)adjustKeyframes:(id)arg1 before:(int)arg2 after:(int)arg3;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)createButton;
- (id)createCircleLayer:(double)arg1 color:(id)arg2;
- (id)createLabel;
- (void)endLoading:(id)arg1 level:(BOOL)arg2;
- (void)endLoading:(id)arg1 level:(BOOL)arg2 backLayer:(id)arg3;
@property(readonly, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)keyframes;
- (void)startDismissAnimation;
- (void)startIconShowAnimation;
- (void)startLineScanAnimation;
- (void)startLoading:(id)arg1;
- (void)startLoading:(id)arg1 backLayer:(id)arg2;
- (void)startLoadingTextAnimation:(id)arg1;
- (void)startRotateAnimation;
- (void)startShowTextAnimation:(id)arg1 animated:(_Bool)arg2;
- (void)stopCountTimer;
- (void)timerCount:(id)arg1;
- (void)updateLevelColor:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
