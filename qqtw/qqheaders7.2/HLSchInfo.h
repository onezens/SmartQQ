//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HLCarriorInfo, NSMutableDictionary, NSRecursiveLock;

@interface HLSchInfo : NSObject
{
    HLCarriorInfo *_carrior;
    NSMutableDictionary *_mapApnToSchInfo;
    NSRecursiveLock *_lock;
    long long _schIndex;
    struct __SCNetworkReachability *_ref;
    id _backObserver;
}

+ (_Bool)isJailbroken;
+ (id)shareInstance;
- (void).cxx_destruct;
- (void)asyncTouchScheduler;
@property(retain, nonatomic) id backObserver; // @synthesize backObserver=_backObserver;
@property(retain) HLCarriorInfo *carrior; // @synthesize carrior=_carrior;
- (void)configReachability;
- (void)dealloc;
- (id)init;
- (id)ipForDomain:(id)arg1 count:(long long *)arg2;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *mapApnToSchInfo; // @synthesize mapApnToSchInfo=_mapApnToSchInfo;
@property(nonatomic) struct __SCNetworkReachability *ref; // @synthesize ref=_ref;
@property(nonatomic) long long schIndex; // @synthesize schIndex=_schIndex;
- (id)settingValueForKey:(id)arg1 appID:(long long)arg2 carrior:(id)arg3;
- (void)switchIP:(id)arg1 domain:(id)arg2 carrior:(id)arg3;
- (void)touchScheduler;

@end

