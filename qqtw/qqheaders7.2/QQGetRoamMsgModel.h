//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSMutableArray, NSMutableSet, NSString;

@interface QQGetRoamMsgModel : NSObject <IEngineDispatchDelegate>
{
    int LastSeq;
    NSMutableArray *_MsgArray;
    id <QQGetRoamMsgModelProtocol> _delegate;
    int _TotalGetNum;
    NSMutableSet *_gettingUins;
    long long _lastReqTimeVal;
    _Bool _isInFailed;
    vector_562b947f _ssoSeqArr;
}

+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)ActionSetRoamMsg;
- (void)ClearAllCache;
- (void)GetRoamMsgAfterWebPwdVerified:(id)arg1;
- (void)GetRoamMsgByTimeval:(id)arg1 beginMsgTimeval:(long long)arg2;
- (void)SetRoamMsg:(id)arg1;
- (id)_getKeyChainUserPwd;
- (void)_removeOldUserPwd:(id)arg1;
- (void)actionGetRoamMsg:(id)arg1;
- (void)beginRequestRoamMsg:(id)arg1;
- (void)closeGetRoamMsgFunction;
- (_Bool)containsSeq:(int)arg1;
- (void)dealloc;
@property(nonatomic) id <QQGetRoamMsgModelProtocol> delegate; // @synthesize delegate=_delegate;
- (void)deleteUserRoamInfo;
- (void)deleteUserRoamInfo:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (long long)getRoamAuthType;
- (id)getUserPwd;
- (id)getUserSig;
- (void)handleResponseMsgs;
- (_Bool)hasPassword;
- (id)init;
@property(nonatomic) long long lastReqTimeVal; // @synthesize lastReqTimeVal=_lastReqTimeVal;
- (void)notifyError:(id)arg1;
- (void)removeUserPwd;
- (void)removeUserPwd:(id)arg1;
- (void)removeUserSig;
- (void)removeUserSig:(id)arg1;
- (_Bool)roamFlagChanged;
- (_Bool)roamOn;
- (_Bool)roamOnNew;
- (long long)roamType;
- (_Bool)setRoamAuthType:(long long)arg1 local:(_Bool)arg2;
- (void)setRoamFlag:(id)arg1;
- (void)setRoamFlagChangedValue:(_Bool)arg1;
- (void)setUserPwd:(id)arg1;
- (void)setUserSig:(id)arg1;
- (void)updateDBMsg:(id)arg1 serverMsg:(id)arg2;
- (void)updateRoamFlag:(id)arg1;
- (void)updateSevenDayRoamFlag:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

