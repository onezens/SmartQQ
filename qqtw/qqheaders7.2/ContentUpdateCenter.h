//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface ContentUpdateCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleAccountLogin;
- (void)handleAccountLogout;
- (void)handleFileUpdate:(id)arg1;
- (id)init;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)registerNotificationHandler;
- (void)removeNotificationObsever;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;

@end

