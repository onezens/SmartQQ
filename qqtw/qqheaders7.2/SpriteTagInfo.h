//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SpriteTagInfo : NSObject
{
    NSString *_name;
    NSString *_type;
    long long _belongDressId;
    struct CGRect _rect;
}

@property(nonatomic) long long belongDressId; // @synthesize belongDressId=_belongDressId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;

@end

