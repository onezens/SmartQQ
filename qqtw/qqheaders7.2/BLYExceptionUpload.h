//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class BLYAppInfo, BLYAppSession, NSArray, NSDictionary, NSString;

@interface BLYExceptionUpload : JceObjectV2
{
    _Bool jcev2_p_20_o_coldStart;
    int jcev2_p_10_o_crashCount;
    NSString *jcev2_p_0_r_type;
    long long jcev2_p_1_r_crashTime;
    NSString *jcev2_p_2_r_expName;
    NSString *jcev2_p_3_o_expMessage;
    NSString *jcev2_p_4_o_expAddr;
    NSString *jcev2_p_5_o_crashThread;
    NSString *jcev2_p_6_o_callStack;
    NSDictionary *jcev2_p_7_o_allStacks__b0x9i_M09ONSStringONSString;
    NSString *jcev2_p_8_o_expuid;
    BLYAppSession *jcev2_p_9_o_session;
    NSString *jcev2_p_11_o_userid;
    NSString *jcev2_p_12_o_deviceId;
    BLYAppInfo *jcev2_p_13_o_appInfo;
    NSArray *jcev2_p_14_o_libInfos__b0x9i_VOBLYAppInfo;
    NSArray *jcev2_p_15_o_plugins__b0x9i_VOBLYAppInfo;
    NSArray *jcev2_p_16_o_attaches__b0x9i_VOBLYAttachment;
    NSDictionary *jcev2_p_17_o_valueMap__b0x9i_M09ONSStringONSString;
    NSDictionary *jcev2_p_18_o_userMap__b0x9i_M09ONSStringONSString;
    NSString *jcev2_p_19_o_gatewayIp;
}

+ (void)initialize;
+ (id)jceType;
- (void).cxx_destruct;
- (id)init;
@property(retain, nonatomic, getter=jce_allStacks, setter=setJce_allStacks:) NSDictionary *jcev2_p_7_o_allStacks__b0x9i_M09ONSStringONSString; // @synthesize jcev2_p_7_o_allStacks__b0x9i_M09ONSStringONSString;
@property(retain, nonatomic, getter=jce_appInfo, setter=setJce_appInfo:) BLYAppInfo *jcev2_p_13_o_appInfo; // @synthesize jcev2_p_13_o_appInfo;
@property(retain, nonatomic, getter=jce_attaches, setter=setJce_attaches:) NSArray *jcev2_p_16_o_attaches__b0x9i_VOBLYAttachment; // @synthesize jcev2_p_16_o_attaches__b0x9i_VOBLYAttachment;
@property(retain, nonatomic, getter=jce_callStack, setter=setJce_callStack:) NSString *jcev2_p_6_o_callStack; // @synthesize jcev2_p_6_o_callStack;
@property(nonatomic, getter=jce_coldStart, setter=setJce_coldStart:) _Bool jcev2_p_20_o_coldStart; // @synthesize jcev2_p_20_o_coldStart;
@property(nonatomic, getter=jce_crashCount, setter=setJce_crashCount:) int jcev2_p_10_o_crashCount; // @synthesize jcev2_p_10_o_crashCount;
@property(retain, nonatomic, getter=jce_crashThread, setter=setJce_crashThread:) NSString *jcev2_p_5_o_crashThread; // @synthesize jcev2_p_5_o_crashThread;
@property(nonatomic, getter=jce_crashTime, setter=setJce_crashTime:) long long jcev2_p_1_r_crashTime; // @synthesize jcev2_p_1_r_crashTime;
@property(retain, nonatomic, getter=jce_deviceId, setter=setJce_deviceId:) NSString *jcev2_p_12_o_deviceId; // @synthesize jcev2_p_12_o_deviceId;
@property(retain, nonatomic, getter=jce_expAddr, setter=setJce_expAddr:) NSString *jcev2_p_4_o_expAddr; // @synthesize jcev2_p_4_o_expAddr;
@property(retain, nonatomic, getter=jce_expMessage, setter=setJce_expMessage:) NSString *jcev2_p_3_o_expMessage; // @synthesize jcev2_p_3_o_expMessage;
@property(retain, nonatomic, getter=jce_expName, setter=setJce_expName:) NSString *jcev2_p_2_r_expName; // @synthesize jcev2_p_2_r_expName;
@property(retain, nonatomic, getter=jce_expuid, setter=setJce_expuid:) NSString *jcev2_p_8_o_expuid; // @synthesize jcev2_p_8_o_expuid;
@property(retain, nonatomic, getter=jce_gatewayIp, setter=setJce_gatewayIp:) NSString *jcev2_p_19_o_gatewayIp; // @synthesize jcev2_p_19_o_gatewayIp;
@property(retain, nonatomic, getter=jce_libInfos, setter=setJce_libInfos:) NSArray *jcev2_p_14_o_libInfos__b0x9i_VOBLYAppInfo; // @synthesize jcev2_p_14_o_libInfos__b0x9i_VOBLYAppInfo;
@property(retain, nonatomic, getter=jce_plugins, setter=setJce_plugins:) NSArray *jcev2_p_15_o_plugins__b0x9i_VOBLYAppInfo; // @synthesize jcev2_p_15_o_plugins__b0x9i_VOBLYAppInfo;
@property(retain, nonatomic, getter=jce_session, setter=setJce_session:) BLYAppSession *jcev2_p_9_o_session; // @synthesize jcev2_p_9_o_session;
@property(retain, nonatomic, getter=jce_type, setter=setJce_type:) NSString *jcev2_p_0_r_type; // @synthesize jcev2_p_0_r_type;
@property(retain, nonatomic, getter=jce_userMap, setter=setJce_userMap:) NSDictionary *jcev2_p_18_o_userMap__b0x9i_M09ONSStringONSString; // @synthesize jcev2_p_18_o_userMap__b0x9i_M09ONSStringONSString;
@property(retain, nonatomic, getter=jce_userid, setter=setJce_userid:) NSString *jcev2_p_11_o_userid; // @synthesize jcev2_p_11_o_userid;
@property(retain, nonatomic, getter=jce_valueMap, setter=setJce_valueMap:) NSDictionary *jcev2_p_17_o_valueMap__b0x9i_M09ONSStringONSString; // @synthesize jcev2_p_17_o_valueMap__b0x9i_M09ONSStringONSString;

@end

