//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary, NSString;

@interface RPDisplayInfo : NSObject <NSCoding, NSCopying>
{
    int _type;
    NSString *_content;
    int _priority;
    NSString *_contentDescripte;
    NSDictionary *_contentDescriptorMaps;
    _Bool _isCornerTextPot;
    int _xo;
}

+ (id)defaultNewInfo;
+ (id)defaultPointInfo;
+ (id)defaultTextInfo;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeFromPBDecoder:(struct CPBMessageDecoder *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool isCornerTextPot; // @dynamic isCornerTextPot;
- (_Bool)isNumberType;
@property(retain, nonatomic) NSString *contentDescripte; // @dynamic contentDescripte;

// Remaining properties
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(readonly, nonatomic) NSDictionary *contentDescriptorMaps; // @dynamic contentDescriptorMaps;
@property(nonatomic) int priority; // @dynamic priority;
@property(nonatomic) int type; // @dynamic type;

@end
