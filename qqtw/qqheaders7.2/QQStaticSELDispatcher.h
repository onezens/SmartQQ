//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQStaticSELDispatcherProtocol.h"

@class NSString;

@interface QQStaticSELDispatcher : NSObject <QQStaticSELDispatcherProtocol>
{
}

+ (void)accountLogined;
+ (void)appLaunched;
+ (void)dispatchSelector:(SEL)arg1;
+ (void)dispatchSelector:(SEL)arg1 targets:(id)arg2;
+ (id)dispatchSelector:(SEL)arg1 withObject:(id)arg2;
+ (id)dispatchSelector:(SEL)arg1 withObject:(id)arg2 targets:(id)arg3;
+ (void)filterRegisteredArray;
+ (void)initialize;
+ (id)modelWithMessageModel:(id)arg1;
+ (id)quoteTextFromMsgModel:(id)arg1;
+ (id)registeredObjs:(SEL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

