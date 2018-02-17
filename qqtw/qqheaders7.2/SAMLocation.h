//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSDictionary, NSString;

@interface SAMLocation : QQModel
{
    _Bool _isCache;
    int _longitude;
    int _latitude;
    int _altitude;
    long long _accuracy;
    double _timeStamp;
    double _positionShareLon;
    double _positionShareLat;
    NSString *_positionShareAddress;
    NSDictionary *_positionShareCityID;
    NSDictionary *_positionShareFieldDict;
    double _positionShareTimeStamp;
    long long _source;
}

- (void).cxx_destruct;
@property(nonatomic) long long accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) int altitude; // @synthesize altitude=_altitude;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isPositionShareAvailable;
@property(nonatomic) int latitude; // @synthesize latitude=_latitude;
@property(nonatomic) int longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *positionShareAddress; // @synthesize positionShareAddress=_positionShareAddress;
@property(retain, nonatomic) NSDictionary *positionShareCityID; // @synthesize positionShareCityID=_positionShareCityID;
@property(retain, nonatomic) NSDictionary *positionShareFieldDict; // @synthesize positionShareFieldDict=_positionShareFieldDict;
@property(nonatomic) double positionShareLat; // @synthesize positionShareLat=_positionShareLat;
@property(nonatomic) double positionShareLon; // @synthesize positionShareLon=_positionShareLon;
@property(nonatomic) double positionShareTimeStamp; // @synthesize positionShareTimeStamp=_positionShareTimeStamp;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;

@end

