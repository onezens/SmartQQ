//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMLBSRequestItem.h"

@class CUserData, QQNearByFilterModel;

@interface NearbyListReqItem : SAMLBSRequestItem
{
    BOOL _isTraversing;
    _Bool _isLoadingMore;
    int _gpsType;
    int _alumnusSource;
    QQNearByFilterModel *_nearbyFilter;
    CUserData *_userData;
}

- (void).cxx_destruct;
@property(nonatomic) int alumnusSource; // @synthesize alumnusSource=_alumnusSource;
- (id)getAdArgument;
- (id)getEncounterListFromOidbData:(struct CPBMessageDecoder *)arg1;
- (char *)getRequestBuffer;
@property(nonatomic) int gpsType; // @synthesize gpsType=_gpsType;
- (id)init;
@property(nonatomic) _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(nonatomic) BOOL isTraversing; // @synthesize isTraversing=_isTraversing;
@property(retain, nonatomic) QQNearByFilterModel *nearbyFilter; // @synthesize nearbyFilter=_nearbyFilter;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (id)serviceCmd;
@property(retain, nonatomic) CUserData *userData; // @synthesize userData=_userData;

@end

