//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer;

@interface QQShadeView : UIView
{
    _Bool _isCanceled;
    _Bool _isExcuting;
    NSTimer *_timer;
    float _startAlpha;
    float _endAlpha;
}

- (void)dealloc;
- (void)didFadeIn;
- (void)didFadeOut;
- (void)fadeIn;
- (void)fadeOut;
- (void)gradualChangeToAlpha:(float)arg1 finishedCallback:(SEL)arg2;
- (_Bool)isAlphaAnimationVisiable;
- (void)startToFlash;
- (void)startToFlashWithAlphaBetween:(float)arg1 and:(float)arg2;
- (void)stopFlashing;

@end

