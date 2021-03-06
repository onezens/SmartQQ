//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class CAEmitterLayer, NSArray;

@interface ARMapRedPacketBGView : UIImageView
{
    NSArray *_hongBaoList;
    int _rainVelocityLevel;
    CAEmitterLayer *_redEnvelopeEmitter;
}

- (void).cxx_destruct;
- (void)createRedEnvelopeRain;
- (void)hideAllRainAnimation;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)redEnvelopeCellWithContent:(id)arg1;
@property(retain) CAEmitterLayer *redEnvelopeEmitter; // @synthesize redEnvelopeEmitter=_redEnvelopeEmitter;
- (void)resetAllRainVelocityWithLevel:(int)arg1;
- (void)setupSubViews;
- (void)showAllRainAnimation;
- (void)startAllRainAnimation;
- (void)startRedEnvelopeRainAnimation;
- (void)stopAllRainAnimation;
- (void)stopRedEnvelopeRainAnimation;
- (void)updateWithBackgroundImage:(id)arg1;

@end

