//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class ARMapItemInfo, NSString;

@interface ARMapOpenPOIRequestItem : SAMRequestItem
{
    _Bool _holder;
    unsigned int _mode;
    int _rtLat;
    int _rtLng;
    int _lat;
    int _lon;
    unsigned int _time;
    unsigned int _status;
    unsigned long long _taskID;
    unsigned long long _poiID;
    NSString *_picID;
    NSString *_sign;
    long long _ret;
    NSString *_err;
    ARMapItemInfo *_item;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *err; // @synthesize err=_err;
- (char *)getRequestBuffer;
@property(nonatomic) _Bool holder; // @synthesize holder=_holder;
- (id)init;
@property(retain, nonatomic) ARMapItemInfo *item; // @synthesize item=_item;
@property(nonatomic) int lat; // @synthesize lat=_lat;
@property(nonatomic) int lon; // @synthesize lon=_lon;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
@property(copy, nonatomic) NSString *picID; // @synthesize picID=_picID;
@property(nonatomic) unsigned long long poiID; // @synthesize poiID=_poiID;
@property(nonatomic) long long ret; // @synthesize ret=_ret;
@property(nonatomic) int rtLat; // @synthesize rtLat=_rtLat;
@property(nonatomic) int rtLng; // @synthesize rtLng=_rtLng;
- (id)serviceCmd;
@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned long long taskID; // @synthesize taskID=_taskID;
@property(nonatomic) unsigned int time; // @synthesize time=_time;

@end

