//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQLoadObserverInfo : NSObject
{
    id _loader;
    id <QQLoadObserver> _observer;
    long long _observeType;
    id _userData;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithLoader:(id)arg1 observer:(id)arg2 observeType:(long long)arg3 userData:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) id loader; // @synthesize loader=_loader;
@property(readonly, nonatomic) long long observeType; // @synthesize observeType=_observeType;
@property(readonly, nonatomic) __weak id <QQLoadObserver> observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) id userData; // @synthesize userData=_userData;

@end

