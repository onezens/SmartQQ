//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PersonalUrlMode : NSObject
{
    NSString *_business;
    long long _vipType;
    NSString *_url;
    int _xo;
}

+ (_Bool)isValidMode:(id)arg1;
- (void)dealloc;
- (id)initWithDic:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *business; // @dynamic business;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(nonatomic) long long vipType; // @dynamic vipType;

@end

