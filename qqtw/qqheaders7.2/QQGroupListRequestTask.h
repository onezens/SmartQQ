//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQGroupListRequestTask : NSObject
{
    int _seq;
    _Bool _byLogin;
}

- (void)dealloc;
- (id)init:(_Bool)arg1;
- (void)postNotify;
- (void)requestCallback:(id)arg1;
- (void)requestTimeout:(id)arg1;
- (void)sendRequest;

@end

