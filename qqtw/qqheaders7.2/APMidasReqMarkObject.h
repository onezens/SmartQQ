//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupPropertyModel.h"

#import "NSCopying.h"

@class NSString;

@interface APMidasReqMarkObject : QQGroupPropertyModel <NSCopying>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *reqName; // @dynamic reqName;
@property(nonatomic) unsigned long long reqTag; // @dynamic reqTag;
@property(nonatomic) unsigned long long tm; // @dynamic tm;

@end

