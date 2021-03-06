//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PlayerInfo : NSObject
{
    unsigned int _gender;
    unsigned int _level;
    unsigned int _age;
    unsigned int _price;
    unsigned long long _uin;
    NSString *_nickName;
    NSString *_logoUrl;
    unsigned long long _likeType;
    NSString *_sign;
}

@property(nonatomic) unsigned int age; // @synthesize age=_age;
- (void)dealloc;
@property(nonatomic) unsigned int gender; // @synthesize gender=_gender;
@property(nonatomic) unsigned int level; // @synthesize level=_level;
@property(nonatomic) unsigned long long likeType; // @synthesize likeType=_likeType;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) unsigned int price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;

@end

