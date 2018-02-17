//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView;

@interface QQTipViewInfo : NSObject
{
    UIView *_tipsView;
    NSString *_key;
    _Bool _addSubViewSuccess;
    _Bool _waitRemove;
    double _removeAnimationDuration;
    id <QQTipViewInfoDelegate> _delegate;
    int _xo;
}

+ (id)tipsInfo:(id)arg1 withKey:(id)arg2;
- (void)animationDisplayEnd;
- (_Bool)containSameKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)startDisplayAnimationTimer;
- (void)stopDisplayAniamtionTimer;

// Remaining properties
@property(nonatomic) _Bool addSubViewSuccess; // @dynamic addSubViewSuccess;
@property(nonatomic) id <QQTipViewInfoDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) NSString *key; // @dynamic key;
@property(nonatomic) double removeAnimationDuration; // @dynamic removeAnimationDuration;
@property(retain, nonatomic) UIView *tipsView; // @dynamic tipsView;
@property(nonatomic) _Bool waitRemove; // @dynamic waitRemove;

@end

