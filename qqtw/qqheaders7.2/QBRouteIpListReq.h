//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QBWupUserBase;

@interface QBRouteIpListReq : JceObjectV2
{
    int jcev2_p_3_o_iSubType;
    QBWupUserBase *jcev2_p_0_r_stUB;
    NSArray *jcev2_p_1_r_vIPType__b0x9i_VONSNumber;
    NSString *jcev2_p_2_o_sTypeName;
    NSString *jcev2_p_4_o_sExtraInfo;
    NSString *jcev2_p_5_o_sMCCMNC;
}

+ (void)initialize;
+ (id)jceType;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, getter=jce_iSubType, setter=setJce_iSubType:) int jcev2_p_3_o_iSubType; // @synthesize jcev2_p_3_o_iSubType;
@property(retain, nonatomic, getter=jce_sExtraInfo, setter=setJce_sExtraInfo:) NSString *jcev2_p_4_o_sExtraInfo; // @synthesize jcev2_p_4_o_sExtraInfo;
@property(retain, nonatomic, getter=jce_sMCCMNC, setter=setJce_sMCCMNC:) NSString *jcev2_p_5_o_sMCCMNC; // @synthesize jcev2_p_5_o_sMCCMNC;
@property(retain, nonatomic, getter=jce_sTypeName, setter=setJce_sTypeName:) NSString *jcev2_p_2_o_sTypeName; // @synthesize jcev2_p_2_o_sTypeName;
@property(retain, nonatomic, getter=jce_stUB, setter=setJce_stUB:) QBWupUserBase *jcev2_p_0_r_stUB; // @synthesize jcev2_p_0_r_stUB;
@property(retain, nonatomic, getter=jce_vIPType, setter=setJce_vIPType:) NSArray *jcev2_p_1_r_vIPType__b0x9i_VONSNumber; // @synthesize jcev2_p_1_r_vIPType__b0x9i_VONSNumber;

@end

