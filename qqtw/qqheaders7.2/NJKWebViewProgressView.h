//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer;

@interface NJKWebViewProgressView : UIView
{
    double _progress;
    UIView *_progressBarView;
    CAGradientLayer *_gradientLayer;
    double _barAnimationDuration;
    double _fadeAnimationDuration;
    double _fadeOutDelay;
    int _xo;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)configureViews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) double progress; // @dynamic progress;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)setProgressBarViewFrame:(struct CGRect)arg1;
- (void)setTintColor:(id)arg1;

// Remaining properties
@property(nonatomic) double barAnimationDuration; // @dynamic barAnimationDuration;
@property(nonatomic) double fadeAnimationDuration; // @dynamic fadeAnimationDuration;
@property(nonatomic) double fadeOutDelay; // @dynamic fadeOutDelay;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @dynamic gradientLayer;
@property(retain, nonatomic) UIView *progressBarView; // @dynamic progressBarView;

@end

