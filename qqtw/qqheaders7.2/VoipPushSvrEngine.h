//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VoipPushC2CMsgChannel;

@interface VoipPushSvrEngine : NSObject
{
    VoipPushC2CMsgChannel *_c2cChannel;
}

+ (id)shareInstance;
- (void)closeVoipPush;
- (id)getC2CSolver;
- (void)handleVoipPush:(id)arg1;
- (id)init;
- (void)notifyServerVoipTokenInvaild;

@end

