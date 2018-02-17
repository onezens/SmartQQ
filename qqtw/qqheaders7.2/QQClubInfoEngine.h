//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IClubInfoService.h"
#import "IEngineDispatchDelegate.h"

@class NSMutableDictionary, NSString;

@interface QQClubInfoEngine : NSObject <IEngineDispatchDelegate, IClubInfoService>
{
    NSMutableDictionary *_seqUINCache;
    NSMutableDictionary *_vipInfoDict;
}

+ (id)shareEngine;
- (void).cxx_destruct;
- (id)clubInfoForKey:(id)arg1 WithUIN:(long long)arg2 error:(id *)arg3;
- (void)commitInit;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)init;
- (_Bool)isNecessaryRequest:(long long)arg1;
- (void)notifyError:(id)arg1;
- (int)requestClubIfNecessaryWithUIN:(long long)arg1;
- (int)requstClubWithUIN:(long long)arg1;
- (void)respClubInfo:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (_Bool)setCanUseRed:(long long)arg1 uin:(long long)arg2;
- (_Bool)setDisableRed:(long long)arg1 uin:(long long)arg2;
- (void)setRedPacketId:(int)arg1 andText:(id)arg2 withUin:(long long)arg3;
- (void)setVipInfos:(id)arg1 forUIN:(long long)arg2;
- (void)updateRequestTimeStampRecord:(long long)arg1 withInteval:(long long)arg2 withUin:(long long)arg3;
- (id)vipInfosForUIN:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

