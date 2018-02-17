//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSArray, NSString;

@interface QQShareGroupNodeInfo : QQModel
{
    unsigned int _feedVideoTotal;
    unsigned int _videNum;
    unsigned int _commentNum;
    unsigned int _likeNum;
    NSString *_feedId;
    unsigned long long _feedType;
    unsigned long long _feedTime;
    NSArray *_videoList;
    NSArray *_storyIDList;
}

+ (id)createWithQQStory:(struct CPBMessageDecoder *)arg1;
@property(nonatomic) unsigned int commentNum; // @synthesize commentNum=_commentNum;
- (void)dealloc;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic) unsigned long long feedTime; // @synthesize feedTime=_feedTime;
@property(nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
@property(nonatomic) unsigned int feedVideoTotal; // @synthesize feedVideoTotal=_feedVideoTotal;
@property(nonatomic) unsigned int likeNum; // @synthesize likeNum=_likeNum;
@property(retain, nonatomic) NSArray *storyIDList; // @synthesize storyIDList=_storyIDList;
@property(nonatomic) unsigned int videNum; // @synthesize videNum=_videNum;
@property(retain, nonatomic) NSArray *videoList; // @synthesize videoList=_videoList;

@end

