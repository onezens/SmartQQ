//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QAVChangeRoleDelegate.h"
#import "QZLVBadNetworkStrategyDelegate.h"

@class NSString, QZLVBadNetworkStrategy;

@interface QZLVRoleSwitchController : NSObject <QAVChangeRoleDelegate, QZLVBadNetworkStrategyDelegate>
{
    unsigned long long _currentRoleLevel;
    unsigned long long _lastRoleLevel;
    long long _udtLossCount;
    long long _udtDowngradeDuration;
    long long _udtUpgradeCount;
    long long _upgradeCount;
    long long _badFPSCount;
    long long _normalLossRateCount;
    long long _ignoreCount;
    _Bool _enableCpuMoniter;
    long long _cpuOverloadCount;
    QZLVBadNetworkStrategy *_strategy;
    NSString *_deftRole;
    id <QZLVRoleSwitchControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)OnChangeRoleDelegate:(int)arg1 WithErrinfo:(id)arg2;
- (void)changeRole:(id)arg1 isUpgrade:(_Bool)arg2;
- (void)checkQualityParam;
- (void)configDefaults;
@property(nonatomic) __weak id <QZLVRoleSwitchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)downgradeCount;
- (void)downgradeRole;
- (void)enableCpuMonitor:(_Bool)arg1;
- (_Bool)fpsShouldDowngrade:(long long)arg1 lossRate:(double)arg2;
- (id)init;
- (_Bool)isCpuOverload:(id)arg1;
- (void)resetParamAfterDowngrade;
- (id)roleNameOfLevel:(unsigned long long)arg1;
- (void)rollbackRole;
- (void)startWatch;
- (void)stopWatch;
- (void)strategy:(id)arg1 fullfillLive:(_Bool)arg2;
- (void)udtLossRate:(double)arg1 netDelay:(long long)arg2;
- (long long)upgradeCount;
- (void)upgradeRole;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

