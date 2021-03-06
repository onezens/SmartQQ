//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock, NSTimer;

@interface QQWalletStorageManager : NSObject
{
    NSRecursiveLock *_cacheLock;
    NSMutableDictionary *_cacheDictionaryM;
    NSTimer *_timer;
    _Bool _isNeedUpdateCache;
    CDUnknownFunctionPointerType _previousUncaughtExceptionHandler;
}

+ (id)getQQWalletCacheDirectory;
+ (id)getQQWalletDocumentDirectory;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_clearMemoryCommonValueCache;
- (void)addTimer;
- (void)cacheData:(id)arg1 withKey:(id)arg2;
- (id)commonValueCacheFilePath;
- (void)dealloc;
- (_Bool)deleteCacheFile:(id)arg1 error:(id *)arg2;
- (void)deleteCacheFileName:(id)arg1;
- (void)getBlueBelt:(id)arg1 showCount:(long long *)arg2 isClosed:(_Bool *)arg3;
- (id)getCacheData:(id)arg1;
- (id)getCacheDataForKey:(id)arg1;
- (unsigned long long)getCacheSize;
- (id)getServiceClickTime:(id)arg1;
- (void)handleLogoutNotification:(id)arg1;
- (void)handleManualClearCacheEndNotification:(id)arg1;
- (void)handleWillResignActiveNotification:(id)arg1;
- (id)init;
- (void)invalidateTimer;
- (_Bool)isCacheFileExist:(id)arg1;
- (void)recordBlueBelt:(id)arg1 showCount:(long long)arg2 isClosed:(_Bool)arg3;
- (void)recordServiceClickTime:(id)arg1;
- (void)removeCacheDataForKey:(id)arg1;
- (_Bool)saveCacheDataToFile;
- (_Bool)saveToCache:(id)arg1 fileName:(id)arg2;
- (_Bool)saveToCache:(id)arg1 fileName:(id)arg2 error:(id *)arg3;

@end

