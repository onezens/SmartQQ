//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BeaconEncodeObject.h"

#import "BeaconPersistEncoding.h"

@class NSString;

@interface BeaconPersistObject : BeaconEncodeObject <BeaconPersistEncoding>
{
    long long _dbid;
    long long _time;
    long long _encLength;
    int _priority;
    int _type;
    long long _md5;
    int _dcount;
    int _xo;
}

@property(nonatomic) long long dbid; // @synthesize dbid=_dbid;
@property(nonatomic) int dcount; // @synthesize dcount=_dcount;
@property(nonatomic) long long encLength; // @synthesize encLength=_encLength;
- (id)encodeData;
- (id)init;
@property(nonatomic) long long md5; // @synthesize md5=_md5;
@property(nonatomic) int priority; // @synthesize priority=_priority;
- (_Bool)setEncodeData:(id)arg1;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) int type; // @synthesize type=_type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

