//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSObject<QQImageMaskViewDelegate>, QQAnimatedRevealMaskView, QQProgressData, QQTwinkleCircleView, UIActivityIndicatorView, UILabel;

@interface QQImageMaskView : UIView
{
    _Bool _autoHide;
    UILabel *_text;
    UIActivityIndicatorView *_indicator;
    QQProgressData *_processData;
    NSObject<QQImageMaskViewDelegate> *_delegate;
    _Bool _fontSelfAdaption;
    _Bool _buffProgressIsToBePerformed;
    QQAnimatedRevealMaskView *_shadeView;
    QQTwinkleCircleView *_twinkleCircle;
    _Bool _usedinSecertView;
    long long _indicatorStyle;
    int _progressStyle;
    double _realProgress;
}

- (void)_buffProgress;
- (void)_buffProgressAfterDelay:(float)arg1;
- (void)adjustActivityIndicatorViewStype:(long long)arg1;
- (void)adjustCircleViewWithSelfFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool autoHide; // @synthesize autoHide=_autoHide;
- (void)clearProgress;
- (void)clearProgressAndHideMask;
@property(readonly, nonatomic) QQProgressData *data; // @synthesize data=_processData;
- (void)dealloc;
@property(nonatomic) __weak NSObject<QQImageMaskViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)doClearAndHide;
- (void)drawRect:(struct CGRect)arg1;
- (id)fontAdjustFrame:(struct CGRect)arg1 string:(id)arg2;
@property(nonatomic) _Bool fontSelfAdaption; // @synthesize fontSelfAdaption=_fontSelfAdaption;
- (void)hideMask;
- (void)hideMaskWithAnimation;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isUploading;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepare:(id)arg1;
@property(nonatomic) double progress; // @dynamic progress;
@property(nonatomic) int progressStyle; // @synthesize progressStyle=_progressStyle;
@property(nonatomic) double realProgress; // @synthesize realProgress=_realProgress;
- (void)refreshText;
- (void)resumeAnimation;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) int style; // @dynamic style;
- (void)setTextHidden:(_Bool)arg1;
@property(nonatomic) _Bool usedinSecertView; // @synthesize usedinSecertView=_usedinSecertView;
- (void)showShadeAndProgressCircle;
- (void)stopTwinkle:(_Bool)arg1;

@end

