//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBWeakSelectorTarget : NSObject
{
    id _target;
    SEL _targetSelector;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SEL handleSelector;
- (id)initWithTarget:(id)arg1 targetSelector:(SEL)arg2;
- (_Bool)sendMessageToTarget:(id)arg1;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
@property(readonly, nonatomic) SEL targetSelector; // @synthesize targetSelector=_targetSelector;

@end

