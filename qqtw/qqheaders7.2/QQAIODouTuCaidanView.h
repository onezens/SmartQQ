//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class NSTimer, QQAvatarView, UIImageView, UIView;

@interface QQAIODouTuCaidanView : UIWindow
{
    UIView *_animationView;
    QQAvatarView *_avatarView;
    unsigned long long _frameIndex;
    UIImageView *_imageView;
    unsigned long long _count;
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (void)animationTimerCallback;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) QQAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)dealloc;
@property(nonatomic) unsigned long long frameIndex; // @synthesize frameIndex=_frameIndex;
- (void)getImageOfIndexAsync:(unsigned long long)arg1 count:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1 count:(unsigned long long)arg2;
- (_Bool)isPlaying;
- (void)playFrameAnimations;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void)stopPlaying;

@end

