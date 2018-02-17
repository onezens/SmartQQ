//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface FriendShieldManager : NSObject
{
    NSMutableDictionary *_ltShieldList;
    int _ltReqCount;
    int _ltReqSeq;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)friendShieldResultPushNotification:(id)arg1;
- (void)getLtShield:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getMzShield:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleList:(id)arg1 index:(unsigned int)arg2 seq:(int)arg3;
- (void)handleLtShieldNotify:(_Bool)arg1;
- (id)init;
- (void)innerReqShieldListFrom:(unsigned int)arg1;
- (void)msfPacketResponseNotification:(id)arg1;
- (void)onAccountLogoutNotification:(id)arg1;
- (void)reqShieldLtList;
- (void)sendFriendShieldReq:(_Bool)arg1 UIN:(unsigned long long)arg2;
- (void)sendLtShiledReq:(_Bool)arg1 Uin:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendMzShiledReq:(_Bool)arg1 phoneCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setLtShield:(_Bool)arg1 uin:(unsigned long long)arg2 phone:(id)arg3;
- (void)setMzShield:(_Bool)arg1 phoneCode:(id)arg2;
- (id)shieldDicWithLtId:(unsigned long long)arg1 phone:(id)arg2;
- (id)shieldDicWithMzPhone:(id)arg1;
- (void)updateNetWork:(id)arg1;

@end

