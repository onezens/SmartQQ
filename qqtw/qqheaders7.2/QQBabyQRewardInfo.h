//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface QQBabyQRewardInfo : NSObject
{
    unsigned int _type;
    unsigned int _reportType;
    long long _seq;
    NSString *_name;
    NSString *_url;
    NSData *_cookies;
    NSString *_jmpWording;
    NSString *_optWording;
    NSString *_optUrl;
    unsigned long long _pendantID;
    NSString *_iconUrl;
    NSString *_toastWording;
}

+ (id)rewardInfoFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *cookies; // @synthesize cookies=_cookies;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *jmpWording; // @synthesize jmpWording=_jmpWording;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *optUrl; // @synthesize optUrl=_optUrl;
@property(copy, nonatomic) NSString *optWording; // @synthesize optWording=_optWording;
@property(nonatomic) unsigned long long pendantID; // @synthesize pendantID=_pendantID;
@property(nonatomic) unsigned int reportType; // @synthesize reportType=_reportType;
@property(nonatomic) long long seq; // @synthesize seq=_seq;
@property(copy, nonatomic) NSString *toastWording; // @synthesize toastWording=_toastWording;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

