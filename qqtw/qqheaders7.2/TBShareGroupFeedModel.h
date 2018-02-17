//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSArray, NSString, TBShareGroupInfoModel;

@interface TBShareGroupFeedModel : QQModel
{
    _Bool _isEnd;
    unsigned int _date;
    unsigned int _feedSeq;
    unsigned int _seq;
    int _videoTotalNum;
    unsigned int _vidListOrder;
    TBShareGroupInfoModel *_shareGroupInfo;
    NSArray *_videoList;
    NSString *_nextCookie;
    NSString *_feedID;
    NSString *_desc;
    NSArray *_todayNewMember;
}

+ (id)createWithPBData:(struct CPBMessageDecoder *)arg1;
@property(nonatomic) unsigned int date; // @synthesize date=_date;
- (void)dealloc;
- (void)delFeedVideoInfoWithVid:(id)arg1;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(nonatomic) unsigned int feedSeq; // @synthesize feedSeq=_feedSeq;
- (void)insertBatchFeedVideoInfo:(id)arg1;
- (void)insertNewMembers:(id)arg1;
- (void)insertSelfBatchFeedVideoInfo:(id)arg1;
- (void)insertSelfFeedVideoInfo:(id)arg1;
- (void)insertShareGroupVideInfo:(id)arg1;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(retain, nonatomic) NSString *nextCookie; // @synthesize nextCookie=_nextCookie;
- (void)removeFakeFeedVideoInfo;
@property(nonatomic) unsigned int seq; // @synthesize seq=_seq;
@property(retain, nonatomic) TBShareGroupInfoModel *shareGroupInfo; // @synthesize shareGroupInfo=_shareGroupInfo;
@property(retain, nonatomic) NSArray *todayNewMember; // @synthesize todayNewMember=_todayNewMember;
@property(nonatomic) unsigned int vidListOrder; // @synthesize vidListOrder=_vidListOrder;
@property(retain, nonatomic) NSArray *videoList; // @synthesize videoList=_videoList;
@property(nonatomic) int videoTotalNum; // @synthesize videoTotalNum=_videoTotalNum;
- (void)updateFeedDescribe:(id)arg1;

@end

