//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBReqGeneralListModel.h"

@class NSString;

@interface TBReqGetShareVideoList : TBReqGeneralListModel
{
    int _timeZone;
    unsigned long long _shareTime;
    NSString *_unionID;
}

- (void)dealloc;
- (id)description;
- (id)getRequestPBData;
@property(nonatomic) unsigned long long shareTime; // @synthesize shareTime=_shareTime;
@property(nonatomic) int timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSString *unionID; // @synthesize unionID=_unionID;

@end

