//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIActivityIndicatorView, UIImageView, UILabel;

@interface CFFootView : UIView
{
    int _style;
    _Bool _isLoading;
    _Bool _NotDraw;
    _Bool _drawBg;
    _Bool _animating;
    UILabel *_fontLabel;
    NSString *_labelTextValue;
    UIActivityIndicatorView *_progress;
    UIImageView *_progressStaticView;
    UIImageView *_progressDynamicView;
    UIImageView *_progressBackgroundView;
    int _state;
    id <CFFootViewDelegate> _delegate;
    int _randomFlag;
    int _xo;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)delayStopLoadState;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isLoad;
- (void)reFresh;
- (void)reFreshFoot;
- (void)reSetPosition;
@property(nonatomic) _Bool drawBg; // @dynamic drawBg;
@property(retain, nonatomic) NSString *labelTextValue; // @dynamic labelTextValue;
- (void)setLoad;
- (void)setNeedDrawLine:(_Bool)arg1;
@property(nonatomic) int style; // @dynamic style;
- (void)startLoad;
- (void)stopLoad;
- (void)stopLoadState;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(nonatomic) id <CFFootViewDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) UILabel *fontLabel; // @dynamic fontLabel;
@property(retain, nonatomic) UIActivityIndicatorView *progress; // @dynamic progress;

@end

