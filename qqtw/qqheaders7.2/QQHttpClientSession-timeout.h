//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQHttpClientSession.h"

@interface QQHttpClientSession (timeout)
+ (id)cftsessionWithRequest:(id)arg1 bussiness:(id)arg2 resource:(int)arg3 success:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
- (id)cftTimer;
- (void)handleTimeout;
- (void)setCftTimer:(id)arg1;
@end
