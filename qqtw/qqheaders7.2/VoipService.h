//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"
#import "IVoipService.h"

@class MSFLoginProcessor, NSString, VoipLoginProcessor;

@interface VoipService : NSObject <IVoipService, IEngineDispatchDelegate>
{
    _Bool _bVoipEnabled;
    _Bool _bVoipLogin;
    _Bool _bVoipForegroundEver;
    _Bool _bMFSLogin;
    MSFLoginProcessor *_msfLoginProcessor;
    VoipLoginProcessor *_voipLoginProcessor;
}

+ (id)shareInstance;
- (void)dealloc;
- (void)didEnterBackground:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)enableVoipChannel:(_Bool)arg1;
- (void)handleC2CPush:(id)arg1 WithFruin:(long long)arg2;
- (void)handleMultiPush:(id)arg1 Withasu:(long long)arg2;
- (id)init;
- (_Bool)isConnected;
- (_Bool)isConnecting;
- (_Bool)isVoipChannelEnabled;
- (_Bool)isVoipLogin;
- (void)notifyError:(id)arg1;
- (void)onBgNetworkStateChanged:(id)arg1;
- (void)onNetworkStateChanged:(id)arg1;
- (void)requestVoipClose;
- (int)sendWupBuffer:(char *)arg1 cmd:(const char *)arg2;
- (void)sendWupBufferForACK:(char *)arg1 cmd:(const char *)arg2;
- (void)sendWupBufferForACKAfterLaunch;
- (void)startHeartPing;
- (void)willEnterForeground:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

