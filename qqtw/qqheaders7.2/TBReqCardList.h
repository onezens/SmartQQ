//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBReqGeneralListModel.h"

@class TBGPSModel;

@interface TBReqCardList : TBReqGeneralListModel
{
    unsigned int _pullType;
    unsigned long long _topicID;
    TBGPSModel *_gpsModel;
}

- (void)dealloc;
- (id)description;
- (id)getRequestPBData;
@property(retain, nonatomic) TBGPSModel *gpsModel; // @synthesize gpsModel=_gpsModel;
@property(nonatomic) unsigned int pullType; // @synthesize pullType=_pullType;
@property(nonatomic) unsigned long long topicID; // @synthesize topicID=_topicID;

@end

