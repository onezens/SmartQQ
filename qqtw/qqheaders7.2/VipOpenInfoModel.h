//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface VipOpenInfoModel : NSObject <NSCoding>
{
    int _bizType;
    _Bool _isOpen;
    int _vipType;
    int _vipLevel;
    int _vipFlag;
    int _xo;
}

+ (id)orderKeys;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (_Bool)isDeluxe;

// Remaining properties
@property(nonatomic) int bizType; // @dynamic bizType;
@property(nonatomic) _Bool isOpen; // @dynamic isOpen;
@property(nonatomic) int vipFlag; // @dynamic vipFlag;
@property(nonatomic) int vipLevel; // @dynamic vipLevel;
@property(nonatomic) int vipType; // @dynamic vipType;

@end

