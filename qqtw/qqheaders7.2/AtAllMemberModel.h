//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface AtAllMemberModel : NSObject
{
    _Bool _canAtAll;
    _Bool _enabled;
    NSString *_name;
    long long _atAllCount;
    NSString *_tipWords1;
    NSString *_tipWords2;
    NSDictionary *_atAllConfig;
}

@property(retain, nonatomic) NSDictionary *atAllConfig; // @synthesize atAllConfig=_atAllConfig;
@property(nonatomic) long long atAllCount; // @synthesize atAllCount=_atAllCount;
@property(nonatomic) _Bool canAtAll; // @synthesize canAtAll=_canAtAll;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *tipWords1; // @synthesize tipWords1=_tipWords1;
@property(retain, nonatomic) NSString *tipWords2; // @synthesize tipWords2=_tipWords2;

@end

