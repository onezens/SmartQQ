//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@class NSString;

@interface TeleCarrier : QQModel <NSCopying>
{
    NSString *_carrierName;
    NSString *_carrierId;
    NSString *_carrierProvince;
    NSString *_carrierCity;
    NSString *_carrierLogo;
    NSString *_carrierURL;
    NSString *_carrierExtraInfo;
    NSString *_redhotFilter;
    int _xo;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *carrierCity; // @dynamic carrierCity;
@property(retain, nonatomic) NSString *carrierExtraInfo; // @dynamic carrierExtraInfo;
@property(retain, nonatomic) NSString *carrierId; // @dynamic carrierId;
@property(retain, nonatomic) NSString *carrierLogo; // @dynamic carrierLogo;
@property(retain, nonatomic) NSString *carrierName; // @dynamic carrierName;
@property(retain, nonatomic) NSString *carrierProvince; // @dynamic carrierProvince;
@property(retain, nonatomic) NSString *carrierURL; // @dynamic carrierURL;
@property(retain, nonatomic) NSString *redhotFilter; // @dynamic redhotFilter;

@end

