//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage;

@interface LevelMeter : UIView
{
    double _peakLevel;
    UIImage *_image;
    int _state;
    _Bool _vertical;
    _Bool _noBackGround;
}

- (void)dealloc;
- (void)drawMic:(struct CGRect)arg1 BackGround:(_Bool)arg2;
- (void)drawNormalViewInRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithFrame:(struct CGRect)arg1;
@property(getter=isVertical) _Bool vertical; // @synthesize vertical=_vertical;
@property(nonatomic) _Bool noBackGround; // @synthesize noBackGround=_noBackGround;
@property double peakLevel;
- (void)setState:(int)arg1;
- (void)showBlurIn:(id)arg1;

@end

