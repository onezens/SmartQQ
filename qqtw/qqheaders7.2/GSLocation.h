//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GSLocation : NSObject
{
    int _longitude;
    int _latitude;
    int _altitude;
    long long _accuracy;
}

@property(nonatomic) long long accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) int altitude; // @synthesize altitude=_altitude;
- (id)description;
@property(nonatomic) int latitude; // @synthesize latitude=_latitude;
@property(nonatomic) int longitude; // @synthesize longitude=_longitude;

@end

