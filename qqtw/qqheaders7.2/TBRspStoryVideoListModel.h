//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBRspGeneralListModel.h"

@interface TBRspStoryVideoListModel : TBRspGeneralListModel
{
    unsigned int _totalCount;
    unsigned int _seq;
    unsigned long long _totalTime;
}

- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;
@property(nonatomic) unsigned int seq; // @synthesize seq=_seq;
@property(nonatomic) unsigned int totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) unsigned long long totalTime; // @synthesize totalTime=_totalTime;

@end

