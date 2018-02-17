//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSLock, NSString;

@interface QHDataService : NSObject <IEngineDispatchDelegate>
{
    NSLock *_requestLock;
    _Bool hasSend;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)getSerializedSSOData:(struct MessageLite *)arg1;
- (id)init;
- (void)notifyError:(id)arg1;
- (void)onLogoutNotification;
- (id)packMultibusidUrlReq:(_Bool)arg1 infoData:(id)arg2;
- (void)resetSend;
- (void)sendQianhaiBankModelReqsForUin:(_Bool)arg1;
- (void)uniformLogQianhaiBank:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

