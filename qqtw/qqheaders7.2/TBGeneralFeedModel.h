//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSArray, NSString, TBFeedVideoAttribModel, TBQQUserInfoModel;

@interface TBGeneralFeedModel : QQModel
{
    _Bool _isEnd;
    _Bool _isFakeFeedInfo;
    _Bool _hasShareToDiscover;
    unsigned int _date;
    unsigned int _feedSeq;
    unsigned int _vidListOrder;
    unsigned int _videoTotalNum;
    TBQQUserInfoModel *_user;
    TBFeedVideoAttribModel *_videoAttribModel;
    NSArray *_videoInfo;
    NSString *_feedID;
    NSString *_nextCookie;
}

+ (id)createFeedInfoModel;
+ (id)createWithPBData:(struct CPBMessageDecoder *)arg1;
+ (_Bool)isFakeFeedID:(id)arg1;
- (id)copyToNewFeedInfoModel;
@property(nonatomic) unsigned int date; // @synthesize date=_date;
- (void)dealloc;
- (void)delFeedVideoInfo:(unsigned long long)arg1;
- (void)delFeedVideoInfoWithVid:(id)arg1;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(nonatomic) unsigned int feedSeq; // @synthesize feedSeq=_feedSeq;
@property(nonatomic) _Bool hasShareToDiscover; // @synthesize hasShareToDiscover=_hasShareToDiscover;
- (void)insertBatchFeedVideoInfo:(id)arg1;
- (void)insertFeedVideoInfo:(id)arg1;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(nonatomic) _Bool isFakeFeedInfo; // @synthesize isFakeFeedInfo=_isFakeFeedInfo;
@property(retain, nonatomic) NSString *nextCookie; // @synthesize nextCookie=_nextCookie;
- (void)removeFakeFeedVideoInfo;
@property(retain, nonatomic) TBQQUserInfoModel *user; // @synthesize user=_user;
@property(nonatomic) unsigned int vidListOrder; // @synthesize vidListOrder=_vidListOrder;
@property(retain, nonatomic) TBFeedVideoAttribModel *videoAttribModel; // @synthesize videoAttribModel=_videoAttribModel;
@property(retain, nonatomic) NSArray *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) unsigned int videoTotalNum; // @synthesize videoTotalNum=_videoTotalNum;

@end

