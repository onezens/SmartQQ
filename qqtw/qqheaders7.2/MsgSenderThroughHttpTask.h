//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ArkHTTPSessionTask, NSTimer;

@interface MsgSenderThroughHttpTask : NSObject
{
    ArkHTTPSessionTask *_arkHttpTask;
    NSTimer *_timer;
    int seqId;
}

@property(retain, nonatomic) ArkHTTPSessionTask *arkHttpTask; // @synthesize arkHttpTask=_arkHttpTask;
- (void)dealloc;
@property(nonatomic) int seqId; // @synthesize seqId;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;

@end

