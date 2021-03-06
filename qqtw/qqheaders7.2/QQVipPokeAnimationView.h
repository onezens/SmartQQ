//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class LOTAnimationView, NSString;

@interface QQVipPokeAnimationView : UIView
{
    LOTAnimationView *_vipBubbleAnimation;
    UIView *_viewer;
    id <QQLightInteractionAnimationActorDelegate> _animationDelegate;
    unsigned long long _direction;
    long long _type;
    NSString *_vipId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long animationType; // @dynamic animationType;
- (void)dealloc;
- (id)initWithContainerView:(id)arg1 type:(long long)arg2 vipId:(id)arg3 direction:(unsigned long long)arg4 Delegate:(id)arg5;
- (_Bool)isPlaying;
- (void)replay;
- (void)resume;
@property(readonly, nonatomic) NSString *vipId; // @dynamic vipId;

@end

