//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, YktConfig;

@interface QQWlxCityConfig : NSObject
{
    NSString *_city_name;
    NSString *_city_code;
    NSMutableArray *_ykt;
    YktConfig *_curYktConfig;
}

@property(copy, nonatomic) NSString *city_code; // @synthesize city_code=_city_code;
@property(copy, nonatomic) NSString *city_name; // @synthesize city_name=_city_name;
@property(nonatomic) YktConfig *curYktConfig; // @synthesize curYktConfig=_curYktConfig;
@property(retain, nonatomic) NSMutableArray *ykt; // @synthesize ykt=_ykt;

@end
