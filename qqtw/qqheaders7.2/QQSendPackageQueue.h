//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQSendPackageQueue : NSObject
{
    NSMutableDictionary *_requestQueue;
    NSMutableDictionary *_requestCmdDic;
}

- (void)addQueueRequestWithID:(int)arg1 cmd:(id)arg2 uin:(long long)arg3 data:(id)arg4 timeout:(int)arg5 target:(id)arg6 selector:(SEL)arg7;
- (void)dealloc;
- (id)getQueueRequestWithCmd:(id)arg1;
- (id)getQueueRequestWithCmd:(id)arg1 userUIN:(long long)arg2;
- (id)getQueueRequestWithID:(int)arg1;
- (id)getQueueRequestWithTimer:(id)arg1;
- (id)init;
- (void)removeQueueRequestWithID:(int)arg1;

@end
