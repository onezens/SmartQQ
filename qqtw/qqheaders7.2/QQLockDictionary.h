//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock, QQWeakContainer;

@interface QQLockDictionary : NSObject
{
    NSRecursiveLock *_lock;
    NSMutableDictionary *_dict;
    QQWeakContainer *_validChecker;
    _Bool _bCheckWild;
}

+ (id)dictionaryWithMutableDictionary:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)allKeys;
- (id)allKeysForObject:(id)arg1;
- (id)allValues;
- (int)count;
- (void)dealloc;
- (id)fetchDictionary;
- (id)init;
- (id)initWithMutableDictionary:(id)arg1;
- (id)initWithMutableDictionary:(id)arg1 withValidChecker:(id)arg2;
- (id)initWithMutableDictionary:(id)arg1 withValidChecker:(id)arg2 withCheckWild:(_Bool)arg3;
- (int)intForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;

@end

