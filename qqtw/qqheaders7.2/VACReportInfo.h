//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class VACReportBody, VACReportHeader;

@interface VACReportInfo : JceObjectV2
{
}

+ (void)deleteFromDisk:(long long)arg1;
+ (id)jceType;
+ (id)loadFromDisk;
- (void)deleteFromDisk;
- (id)initWithModule:(id)arg1 action:(id)arg2;
- (void)saveToDisk;

// Remaining properties
@property(retain, nonatomic, getter=jce_header, setter=setJce_header:) VACReportHeader *jcev2_p_0_r_header; // @dynamic jcev2_p_0_r_header;
@property(retain, nonatomic, getter=jce_body, setter=setJce_body:) VACReportBody *jcev2_p_1_o_body; // @dynamic jcev2_p_1_o_body;

@end
