//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseEngine.h"

@class NSMutableDictionary, NSRecursiveLock;

@interface QZPushEngine : QZBaseEngine
{
    NSMutableDictionary *_pushCache;
    NSRecursiveLock *_lock;
    _Bool _dataChange;
}

+ (id)instance;
- (void).cxx_destruct;
- (id)decodePushData:(id)arg1;
- (id)decodeUpdateData:(id)arg1;
- (id)init;
- (void)loadCache;
- (void)onApplicationEnterBackground:(id)arg1;
- (void)pushACK:(unsigned long long)arg1;
- (void)saveCache;

@end

