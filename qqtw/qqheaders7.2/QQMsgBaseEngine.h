//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQMsgBaseEngine : NSObject
{
    NSMutableDictionary *dict;
}

- (void)cleanAllFunction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)hidden;
- (id)init;
- (_Bool)invokeFunctionForKey:(id)arg1;
- (_Bool)invokeFunctionForKey:(id)arg1:(void *)arg2;
- (void)registerFunctionWithTarget:(id)arg1 selector:(SEL)arg2 key:(id)arg3;
- (void)removeFunctionWithkey:(id)arg1;
- (void)removeTarget:(id)arg1;

@end

