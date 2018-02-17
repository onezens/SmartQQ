//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache;

@interface QQConfigManager : NSObject
{
    NSCache *_cache;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)cachedObjectForKey:(id)arg1;
- (void)handleConfigRequest:(const void *)arg1;
- (void)handleConfigResponse:(const void *)arg1;
- (void)handleItems:(id)arg1 forNumber:(long long)arg2 version:(long long)arg3;
- (id)init;
- (_Bool)isNewForNumber:(long long)arg1;
- (id)nodeForKeyPath:(id)arg1;
- (id)nodesForNumber:(long long)arg1;
- (void)setCachedObject:(id)arg1 forKey:(id)arg2;
- (void)setIsNew:(_Bool)arg1 forNumber:(long long)arg2;
- (void)setItems:(id)arg1 forNumber:(long long)arg2 version:(long long)arg3;
- (long long)versionForNumber:(long long)arg1;

@end

