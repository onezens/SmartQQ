//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSThread;

@interface KSCrashDeadlockMonitor : NSObject
{
    _Bool _awaitingResponse;
    unsigned int _mainThread;
    NSThread *_monitorThread;
}

- (void).cxx_destruct;
@property _Bool awaitingResponse; // @synthesize awaitingResponse=_awaitingResponse;
- (void)cancel;
- (void)handleDeadlock;
- (id)init;
@property(nonatomic) unsigned int mainThread; // @synthesize mainThread=_mainThread;
@property(retain, nonatomic) NSThread *monitorThread; // @synthesize monitorThread=_monitorThread;
- (void)runMonitor;
- (void)watchdogAnswer;
- (void)watchdogPulse;

@end
