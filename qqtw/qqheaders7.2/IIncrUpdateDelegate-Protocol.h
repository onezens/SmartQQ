//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol IIncrUpdateDelegate <NSObject>

@optional
- (void)getReqPBBuffer:(char **)arg1 buffEnd:(char **)arg2;
- (void)getReqPBBuffer:(char **)arg1 buffEnd:(char **)arg2 seqId:(int)arg3 type:(int)arg4;
- (void)notifyRespPBBuffer:(const void *)arg1 size:(int)arg2 result:(int)arg3;
- (void)notifyRespPBBuffer:(const void *)arg1 size:(int)arg2 result:(int)arg3 type:(int)arg4 seqId:(int)arg5;
- (void)respPushPBBuffer:(const void *)arg1 size:(int)arg2;
@end
