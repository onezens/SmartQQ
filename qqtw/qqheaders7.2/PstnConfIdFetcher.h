//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PstnConfIdFetcher : NSObject
{
    unsigned long long _discuzId;
    CDUnknownBlockType _callback;
}

- (void)dealloc;
- (void)doFetch;
- (void)fetch;
- (id)initWithDiscuzId:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)invokeCallBack:(int)arg1;

@end

