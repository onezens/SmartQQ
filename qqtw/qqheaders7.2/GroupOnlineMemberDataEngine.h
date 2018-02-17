//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSMutableDictionary, NSString;

@interface GroupOnlineMemberDataEngine : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_aioData;
    NSMutableDictionary *_memberListData;
}

+ (id)sharedInstance;
- (void)dealloc;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)getAioOnlineMemberList:(unsigned long long)arg1 update:(_Bool)arg2;
- (id)getAllOnlineMemberList:(unsigned long long)arg1 update:(_Bool)arg2;
- (id)getOnlineBuffer:(unsigned long long)arg1 serviceType:(int)arg2;
- (id)init;
- (void)notifyError:(id)arg1;
- (void)onAccountChanged:(id)arg1;
- (void)processA2A0Data:(CDStruct_7895f40e)arg1;
- (void)processA2A1Data:(CDStruct_7895f40e)arg1;
- (int)requestAioOnlineMemberList:(id)arg1;
- (int)requestAllOnlineMemberList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
