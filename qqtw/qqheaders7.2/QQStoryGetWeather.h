//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBReqGeneralListModel.h"

@interface QQStoryGetWeather : TBReqGeneralListModel
{
    int _longitude;
    int _latitude;
    unsigned int _coordinate;
}

@property(nonatomic) unsigned int coordinate; // @synthesize coordinate=_coordinate;
- (id)getRequestPBData;
@property(nonatomic) int latitude; // @synthesize latitude=_latitude;
@property(nonatomic) int longitude; // @synthesize longitude=_longitude;

@end

