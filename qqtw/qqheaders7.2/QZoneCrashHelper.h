//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface QZoneCrashHelper : NSObject
{
    NSMutableDictionary *_filterFeedKeyInfoDic;
    NSRecursiveLock *_filterFeedKeyInfoDicLock;
    NSRecursiveLock *_savefilterFeedKeyInfoLock;
    NSString *_currentLayoutUGCKey;
    _Bool _isLayout;
    int _xo;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)addCurrentLayoutUCGKey:(id)arg1;
- (void)addFeedLayoutStatus:(_Bool)arg1;
- (void)dealCrashCount;
- (void)deleteCrashFlagTmp;
- (id)getCurrentLayoutUGCKey;
- (_Bool)getFeedLayoutStatus;
- (void)incCrashCount;
- (id)init;
- (_Bool)isCurrentInQzonePage;
- (void)minusCrashCount;
- (_Bool)needClearCacheWhenLauch;
- (void)onCrashed;
- (id)pathForCrashFlagTmpFile;
- (void)qzoneRootExit:(id)arg1;

@end

