//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSMutableDictionary;

@interface QQVIPFunctionEtagMgr : NSObject
{
    NSCache *_etagItemCache;
    NSMutableDictionary *_seq2IdentityDic;
    _Bool _bUseEtag;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)costMgr;
- (void)dealloc;
- (id)etagCachePath:(id)arg1;
- (id)getEtagByReqIdentity:(id)arg1;
- (id)getRspBody:(id)arg1;
- (id)getRspBody:(id)arg1 ignorMaxCacheTime:(_Bool)arg2;
- (id)getRspBodyOfIgnorMaxCacheTime:(int)arg1;
- (id)init;
- (void)observer:(int)arg1 reqIdentity:(id)arg2;
- (void)removeObserver:(int)arg1;
- (id)reqIdentityForSeq:(int)arg1;
- (void)updateEtagInfo:(int)arg1 maxCacheTime:(long long)arg2 etag:(id)arg3 rspBody:(id)arg4;
- (void)updateEtagInfoByReqIdentity:(id)arg1 maxCacheTime:(long long)arg2;
- (void)updateEtagInfoBySeq:(int)arg1 maxCacheTime:(long long)arg2;

@end

