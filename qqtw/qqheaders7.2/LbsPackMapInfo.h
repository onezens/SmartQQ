//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray;

@interface LbsPackMapInfo : NSObject
{
    int _flushTime;
    int _flushDist;
    NSData *_mapCookie;
    NSData *_pageCookie;
    NSMutableArray *_lbsPackPoiInfoArray;
}

- (void).cxx_destruct;
- (id)description;
@property(nonatomic) int flushDist; // @synthesize flushDist=_flushDist;
@property(nonatomic) int flushTime; // @synthesize flushTime=_flushTime;
@property(retain, nonatomic) NSMutableArray *lbsPackPoiInfoArray; // @synthesize lbsPackPoiInfoArray=_lbsPackPoiInfoArray;
@property(retain, nonatomic) NSData *mapCookie; // @synthesize mapCookie=_mapCookie;
@property(retain, nonatomic) NSData *pageCookie; // @synthesize pageCookie=_pageCookie;

@end

