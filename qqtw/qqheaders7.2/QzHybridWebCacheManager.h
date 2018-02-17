//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QzHybridWebCacheManager : NSObject
{
    long long _updateIDSeed;
    NSMutableDictionary *_updateContext;
}

+ (void)delData:(id)arg1;
+ (id)getData:(id)arg1;
+ (id)getData:(id)arg1 withPlugin:(id)arg2;
+ (_Bool)hasData:(id)arg1;
+ (id)instance;
+ (_Bool)isPluginDoRecvInOneTime:(id)arg1;
+ (id)pluginForRequest:(id)arg1;
+ (void)registerPlugin:(id)arg1;
+ (void)setData:(id)arg1 withRequest:(id)arg2;
+ (void)unregisterPlugin:(id)arg1;
+ (long long)update:(id)arg1 updatePolicy:(long long)arg2 plugin:(id)arg3 startThread:(id)arg4;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)delContext:(id)arg1;
- (long long)generateUpdateID;
- (id)getContext:(id)arg1;
- (id)init;
- (void)postURLProtocolActionNotification:(long long)arg1 updateID:(long long)arg2 object:(id)arg3;
- (void)postUpdateFinishNotification:(long long)arg1 request:(id)arg2 data:(id)arg3 error:(id)arg4;
- (void)setContext:(id)arg1 ForKey:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *updateContext; // @synthesize updateContext=_updateContext;
@property(nonatomic) long long updateIDSeed; // @synthesize updateIDSeed=_updateIDSeed;
- (long long)update:(id)arg1 updatePolicy:(long long)arg2 plugin:(id)arg3 startThread:(id)arg4;
- (void)updateDidFinish:(id)arg1;
- (void)updateDidFinish:(id)arg1 request:(id)arg2 response:(id)arg3 bodyData:(id)arg4 externInfo:(id)arg5;
- (void)updatePluginDidFail:(id)arg1;
- (void)updatePluginDidFail:(id)arg1 request:(id)arg2 error:(id)arg3;

@end
