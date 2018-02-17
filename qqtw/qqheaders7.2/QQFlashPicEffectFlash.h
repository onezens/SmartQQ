//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQFlashPicEffect.h"

@class UIImageView;

@interface QQFlashPicEffectFlash : QQFlashPicEffect
{
    double _tPreFrame;
    long long _playCount;
    UIImageView *_bkImageView;
    UIImageView *_blueImageView;
    UIImageView *_purpleImageView;
}

@property(retain, nonatomic) UIImageView *bkImageView; // @synthesize bkImageView=_bkImageView;
@property(retain, nonatomic) UIImageView *blueImageView; // @synthesize blueImageView=_blueImageView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2;
- (void)play;
- (void)playAnimation;
@property(retain, nonatomic) UIImageView *purpleImageView; // @synthesize purpleImageView=_purpleImageView;
- (id)reSizeImage:(id)arg1;
- (void)setup;
- (void)stopAnimation;

@end
