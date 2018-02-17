//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSTimer;

@interface GetTroopRemarkManager : NSObject
{
    NSTimer *_timer;
    NSMutableArray *_array;
    int _dwIndex;
    int _repeatCount;
    id <GetTroopRemarkProtocol> _delegate;
    NSMutableDictionary *_GroupRemarkDic;
    int _autoSeq;
    int _manuSeq;
    int _xo;
}

+ (id)GetInstance;
+ (id)GetNeedTroopRemarkList;
- (void).cxx_destruct;
- (void)Action:(id)arg1;
- (void)ActionGetBatchMemberRemark:(id)arg1;
- (void)ActionGetMemberRemark:(id)arg1;
- (void)ActionReGetTroopRemark:(id)arg1;
- (void)ReGetTroopRemark:(id)arg1;
- (void)ReTimeOut;
- (void)changeAccount;
- (void)dealloc;
- (void)enterBackGround;
- (void)getMemberRemark:(id)arg1 groupCode:(id)arg2 groupUIN:(long long)arg3;
- (id)init;
- (id)init:(id)arg1;
- (void)requestBatchMemberRemark:(id)arg1 groupCode:(id)arg2;
- (void)start;
- (void)stopGetTroopRemark;
- (void)timeOut;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *array; // @dynamic array;
@property(nonatomic) __weak id <GetTroopRemarkProtocol> delegate; // @dynamic delegate;
@property(nonatomic) int dwIndex; // @dynamic dwIndex;

@end

