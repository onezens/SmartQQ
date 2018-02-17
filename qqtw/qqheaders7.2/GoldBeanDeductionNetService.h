//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSString, QQLockDictionary;

@interface GoldBeanDeductionNetService : NSObject <IEngineDispatchDelegate>
{
    long long _remainGoldBean;
    QQLockDictionary *_requestDic;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)getOIDBSSOPKG:(unsigned int)arg1 serviceType:(unsigned int)arg2 buffer:(basic_string_075b6133)arg3;
- (void)handleForCmd:(const char *)arg1 Seq:(unsigned int)arg2 Result:(int)arg3;
- (id)init;
- (void)innerRequestGoldBeanDeduction:(id)arg1;
- (void)innerRequestOrderId:(id)arg1;
- (void)notifyError:(id)arg1;
- (void)parseSendFreeGiftRequest:(basic_string_075b6133 *)arg1 Msg:(CDStruct_7895f40e)arg2;
- (void)parserGoldBeanDeductionRequest:(basic_string_075b6133 *)arg1 Msg:(CDStruct_7895f40e)arg2;
- (void)parserOrderRequest:(basic_string_075b6133 *)arg1 Msg:(CDStruct_7895f40e)arg2;
- (void)parserVipGoldBeanDeductionRequest:(basic_string_075b6133 *)arg1 Msg:(CDStruct_7895f40e)arg2 Result:(int)arg3;
@property(nonatomic) long long remainGoldBean; // @synthesize remainGoldBean=_remainGoldBean;
@property(retain, nonatomic) QQLockDictionary *requestDic; // @synthesize requestDic=_requestDic;
- (void)requestGoldBeanDeductionForGenderWithRoomID:(id)arg1 productID:(int)arg2 CostPerProduct:(unsigned long long)arg3 Complete:(CDUnknownBlockType)arg4;
- (void)requestGoldBeanDeductionForGiftWithRoomID:(id)arg1 productID:(int)arg2 recvUin:(unsigned long long)arg3 giftNum:(unsigned long long)arg4 CostPerProduct:(unsigned long long)arg5 AddTime:(unsigned int)arg6 Complete:(CDUnknownBlockType)arg7;
- (void)requestGoldBeanDeductionForVipWithRoomID:(id)arg1 productID:(int)arg2 CostPerProduct:(unsigned long long)arg3 Complete:(CDUnknownBlockType)arg4;
- (void)requestGoldBeanDeductionForVipWithRoomID:(id)arg1 productID:(int)arg2 recvUin:(unsigned long long)arg3 minuteCount:(unsigned int)arg4 Complete:(CDUnknownBlockType)arg5;
- (void)requestSendFreeGiftWithRoomID:(id)arg1 productID:(int)arg2 giftID:(unsigned int)arg3 recvUin:(unsigned long long)arg4 giftNum:(unsigned long long)arg5 CostPerProduct:(unsigned long long)arg6 AddTime:(unsigned int)arg7 Complete:(CDUnknownBlockType)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

