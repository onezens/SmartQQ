//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APMidasBaseReq.h"

@class NSString;

@interface APMidasMonthReq : APMidasBaseReq
{
}

- (void)dealloc;
- (id)init;
- (_Bool)validateParams;

// Remaining properties
@property(nonatomic) _Bool autoPay; // @dynamic autoPay;
@property(retain, nonatomic) NSString *remark; // @dynamic remark;
@property(retain, nonatomic) NSString *serviceCode; // @dynamic serviceCode;
@property(retain, nonatomic) NSString *serviceName; // @dynamic serviceName;
@property(nonatomic) int serviceType; // @dynamic serviceType;

@end

