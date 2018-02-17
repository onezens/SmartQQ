//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BluePriorityThread, FMDatabase, NSRecursiveLock, NSString;

@interface QQDBTaskQueue : NSObject
{
    map_ea34e22a _taskList;
    struct map<__unsafe_unretained id<QQDBTaskQueueProtocol>, NSString *, std::less<__unsafe_unretained id<QQDBTaskQueueProtocol>>, std::allocator<std::pair<const __unsafe_unretained id<QQDBTaskQueueProtocol>, NSString *>>> _observers;
    FMDatabase *_db;
    _Bool _taskCacheOpen;
    BluePriorityThread *_taskThread;
    NSRecursiveLock *_observerLock;
    int _tasksInThread;
    _Bool _destroyed;
    int _workMode;
    double _pri;
    NSString *_threadKey;
}

+ (id)threadWithKey:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)asyncHighPriorityTask:(id)arg1;
- (void)asyncTask:(id)arg1;
- (void)asyncTask:(id)arg1 withKey:(id)arg2;
- (void)cleanTask;
- (void)dealloc;
- (void)decreaseTaskCount;
- (void)destroy;
- (void)doFlush:(const map_ea34e22a *)arg1;
- (void)doNextTask;
- (void)flushAllTasks;
- (void)flushAllTasks:(_Bool)arg1;
- (void)flushTasks:(unsigned long long)arg1;
- (id)getDBThread;
- (id)init;
- (id)initWithKey:(id)arg1 Priority:(double)arg2;
- (void)inscreseTaskCount;
- (_Bool)isThreadIdle;
- (void)notifyIdle;
- (void)notifyTaskEnd;
- (void)removeObserver:(id)arg1;
- (void)removeObservers;
- (void)setDb:(id)arg1;
- (void)setMode:(int)arg1;
- (void)syncAllTaskWithTask:(id)arg1;
- (void)syncFlushAllTasks;
- (void)syncHighPriorityTask:(id)arg1;
- (void)syncTask:(id)arg1;
- (void)syncTask:(id)arg1 withKey:(id)arg2;
- (void)taskCacheOpen:(_Bool)arg1;

@end

