//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSData, NSString;

@interface FMJCUploadDownstream : JceObjectV2
{
    int jcev2_p_0_o_retcode;
    NSString *jcev2_p_1_o_serverID;
    NSData *jcev2_p_2_o_extra;
}

+ (void)initialize;
+ (id)jceType;
- (void).cxx_destruct;
- (id)init;
@property(retain, nonatomic, getter=jce_extra, setter=setJce_extra:) NSData *jcev2_p_2_o_extra; // @synthesize jcev2_p_2_o_extra;
@property(nonatomic, getter=jce_retcode, setter=setJce_retcode:) int jcev2_p_0_o_retcode; // @synthesize jcev2_p_0_o_retcode;
@property(retain, nonatomic, getter=jce_serverID, setter=setJce_serverID:) NSString *jcev2_p_1_o_serverID; // @synthesize jcev2_p_1_o_serverID;

@end

