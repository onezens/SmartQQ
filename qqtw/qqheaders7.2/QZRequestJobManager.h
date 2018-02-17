//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZJobManager.h"

#import "IAccountChangedObsever.h"

@class NSString;

@interface QZRequestJobManager : QZJobManager <IAccountChangedObsever>
{
}

+ (id)defaultDatabasePath;
+ (id)sharedManager;
- (id)addJob:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)init;
- (void)onAccountLogin;
- (void)onAccountLogout;
- (void)onNetworkReachabilityChange:(id)arg1;
- (void)reportOperationFinish:(id)arg1 runtime:(long long)arg2;
- (void)reportSQLiteError:(int)arg1;
- (void)restartAllFailedOperations:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

