//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GAMultiThreadObject.h"

#import "IAccountChangedObsever.h"

@class NSString;

@interface QZoneStorageBase : GAMultiThreadObject <IAccountChangedObsever>
{
    long long _currentUin;
}

- (_Bool)checkVersion:(int)arg1 clearFiles:(_Bool)arg2;
- (void)dealloc;
- (_Bool)enableVersionControl;
- (void)flush;
- (id)getCurrentFolderPath;
- (int)getCurrentVersion;
- (int)getVersionWithFilePath:(id)arg1;
- (id)init;
- (void)load;
- (void)onAccountChanged:(long long)arg1;
- (void)onAccountLogin;
- (void)onAccountLogout;
- (void)saveVersion:(int)arg1;
- (void)saveVersion:(int)arg1 withVersionFileName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

