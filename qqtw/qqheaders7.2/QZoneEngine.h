//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, QZoneSvrEngine;

@interface QZoneEngine : NSObject
{
    NSString *uin;
    NSString *pwd;
    QZoneSvrEngine *qzoneProtrolEngine;
    NSMutableDictionary *dict;
}

+ (id)GetInstance;
- (void)dealloc;
- (id)init;
- (_Bool)invokeFunctionForKey:(id)arg1;
- (_Bool)invokeFunctionForKey:(id)arg1 arg:(id)arg2;
@property(retain, nonatomic) NSString *pwd; // @synthesize pwd;
- (void)registerFunctionWithTarget:(id)arg1 selector:(SEL)arg2 key:(id)arg3 arg:(id)arg4;
- (void)registerFunctionWithTarget:(id)arg1 selector:(SEL)arg2 key:(id)arg3 arg:(id)arg4 seq:(int *)arg5;
- (void)removeFunctionWithkey:(id)arg1;
- (void)removeTarget:(id)arg1;
@property(retain, nonatomic) NSString *uin; // @synthesize uin;

@end

