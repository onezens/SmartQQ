//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBRspGeneralListModel.h"

@class NSString;

@interface TBRspGetHotTopicVideoListModel : TBRspGeneralListModel
{
    unsigned int _videoCount;
    unsigned long long _totalTime;
    NSString *_topicDes;
}

- (void)dealloc;
- (id)description;
- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;
@property(retain, nonatomic) NSString *topicDes; // @synthesize topicDes=_topicDes;
@property(nonatomic) unsigned long long totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) unsigned int videoCount; // @synthesize videoCount=_videoCount;

@end

