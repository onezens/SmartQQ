//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QuickReplyTaskDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface PushAckEngine : NSObject <QuickReplyTaskDelegate>
{
    NSMutableDictionary *_taskDic;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isAppTerminating;
}

+ (id)shareInstance;
- (void)dealloc;
- (id)geneApnsAckBuffer:(id)arg1 andIp:(unsigned int)arg2 andSendTime:(unsigned long long)arg3;
- (id)geneVoipMsgAckBuffer:(id)arg1 sessionType:(BOOL)arg2 item:(id)arg3;
- (void)handleRecvApnsPush:(id)arg1;
- (void)handleVoipPushMsg:(id)arg1 sessionType:(BOOL)arg2 item:(id)arg3;
- (id)init;
- (void)onRecvApnsPush:(id)arg1;
- (void)onRecvVoipPushMsg:(id)arg1 sessionType:(BOOL)arg2 item:(id)arg3;
- (void)quickReplyRequestEnd;
- (void)quickReplyRequestFailed:(int)arg1;
- (void)quickReplyRequestSuccess:(id)arg1 seq:(int)arg2 buffer:(id)arg3;
- (void)stopAck;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

