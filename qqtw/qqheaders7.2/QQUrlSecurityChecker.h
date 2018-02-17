//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSString;

@interface QQUrlSecurityChecker : NSObject <IEngineDispatchDelegate>
{
}

+ (id)shareChecker;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)init;
- (_Bool)isUsingSSOUrlCheck;
- (void)notifyError:(id)arg1;
- (void)saveConfig:(id)arg1;
- (id)startCheckUrl:(id)arg1 from:(id)arg2 refer:(id)arg3;
- (id)startWebCheckUrl:(id)arg1;
- (void)switchOff;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

