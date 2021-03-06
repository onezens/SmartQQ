//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSRecursiveLock;

@interface QQWifiLRUCache : NSObject
{
    unsigned long long _capacity;
    NSMutableArray *_lruList;
    NSRecursiveLock *_lruLock;
}

- (id)allValues;
- (unsigned long long)cacheSize;
@property(nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
- (void)dealloc;
- (id)del:(id)arg1;
- (id)find:(id)arg1;
- (id)get:(id)arg1;
- (id)init;
@property(retain, nonatomic) NSMutableArray *lruList; // @synthesize lruList=_lruList;
@property(retain, nonatomic) NSRecursiveLock *lruLock; // @synthesize lruLock=_lruLock;
- (id)put:(id)arg1 value:(id)arg2;

@end

