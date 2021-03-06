//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSMutableDictionary, NSString;

@interface QQGroupMemberSpecialTitleManager : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_setSpecialTitleSeqDic;
    NSMutableDictionary *_updateSTResultDic;
}

+ (id)shareInstance;
- (void)dealloc;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)getSpecialTitleExpireTimeCheckFlagsForGroup:(id)arg1;
- (void)handleGroupMemberSpecialTitle:(const void *)arg1:(int)arg2;
- (id)init;
- (void)notifyError:(id)arg1;
- (void)postSetSpecialTitleResult:(id)arg1;
- (void)requestGroupMemberSpecialTitle:(unsigned long long)arg1 beginUin:(unsigned long long)arg2 updateTime:(unsigned long long)arg3;
- (void)saveGroupMemberSpecialTitleInfo:(id)arg1 troopMemModel:(id)arg2;
- (int)setGroupMemberSpecialTitle:(id)arg1 name:(id)arg2 expireTime:(unsigned long long)arg3;
- (int)setGroupMemberSpecialTitleInfo:(id)arg1;
- (void)setSpecialTitleExpireTimeCheckFlags:(id)arg1 ForGroup:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

