//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSData;

@interface FMJCUploadUpstream : JceObjectV2
{
    long long jcev2_p_0_o_busiType;
    long long jcev2_p_1_o_fileType;
    NSData *jcev2_p_2_o_extra;
}

+ (void)initialize;
+ (id)jceType;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, getter=jce_busiType, setter=setJce_busiType:) long long jcev2_p_0_o_busiType; // @synthesize jcev2_p_0_o_busiType;
@property(retain, nonatomic, getter=jce_extra, setter=setJce_extra:) NSData *jcev2_p_2_o_extra; // @synthesize jcev2_p_2_o_extra;
@property(nonatomic, getter=jce_fileType, setter=setJce_fileType:) long long jcev2_p_1_o_fileType; // @synthesize jcev2_p_1_o_fileType;

@end

