//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

@interface QQOfflineURLProtocol : NSURLProtocol
{
}

+ (id)cachedDataForRequest:(id)arg1;
+ (id)cachedDataForRequestAndRemove:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (id)getFastCacheDic;
+ (id)localDataForRequest:(id)arg1;
+ (void)removeAllFastCache;
+ (void)saveCachedData:(id)arg1 forRequest:(id)arg2;
- (void)startLoading;
- (void)stopLoading;

@end

