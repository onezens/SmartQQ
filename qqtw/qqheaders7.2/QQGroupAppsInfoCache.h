//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQGroupAppsInfoCache : NSObject
{
    NSMutableDictionary *_groupAppsInfoCache;
}

+ (id)getInstance;
- (id)cachedAppsInfoForGroupCode:(unsigned long long)arg1;
- (void)dealloc;
- (void)getGroupExtraAppsInfo:(long long)arg1;
- (id)init;
- (void)onGetAppsInfoRecv:(id)arg1;
- (void)setUnreadCount:(int)arg1 withGroupCode:(id)arg2 appID:(unsigned long long)arg3;

@end

