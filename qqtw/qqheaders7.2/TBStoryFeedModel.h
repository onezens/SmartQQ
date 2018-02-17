//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSArray, NSString, TBFeedBannerModel, TBGeneralFeedModel, TBGeneralRecommendFeedModel, TBQQUserInfoModel, TBShareGroupFeedModel, TBShareGroupInfoModel, TBShareGroupRecommendFeedModel;

@interface TBStoryFeedModel : QQModel
{
    _Bool _isFakeFeedInfo;
    long long _type;
    NSString *_feedID;
    TBGeneralFeedModel *_generalFeed;
    TBShareGroupFeedModel *_shareGroupFeed;
    TBGeneralRecommendFeedModel *_generalRecommendFeed;
    TBShareGroupRecommendFeedModel *_shareGroupRecommendFeed;
    TBFeedBannerModel *_bannerFeed;
}

+ (id)createWithPBData:(struct CPBMessageDecoder *)arg1;
@property(retain, nonatomic) TBFeedBannerModel *bannerFeed; // @synthesize bannerFeed=_bannerFeed;
- (id)converToStoryInterActiveModel;
@property(readonly, nonatomic) unsigned int date;
- (void)dealloc;
- (void)delFeedVideoInfoWithVid:(id)arg1;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(readonly, nonatomic) unsigned int feedSeq;
@property(retain, nonatomic) TBGeneralFeedModel *generalFeed; // @synthesize generalFeed=_generalFeed;
@property(retain, nonatomic) TBGeneralRecommendFeedModel *generalRecommendFeed; // @synthesize generalRecommendFeed=_generalRecommendFeed;
- (id)getFailedVideoList;
- (long long)getFailedVideoNumber;
- (long long)getSuccessVideoNumber;
@property(readonly, nonatomic) _Bool hasShareToDiscover;
- (void)insertBatchFeedVideoInfo:(id)arg1;
- (void)insertShareGroupVideoInfo:(id)arg1;
@property(nonatomic) _Bool isEnd;
@property(nonatomic) _Bool isFakeFeedInfo; // @synthesize isFakeFeedInfo=_isFakeFeedInfo;
- (_Bool)isPublicFeed;
- (_Bool)isSecretCircle;
@property(retain, nonatomic) NSString *nextCookie;
- (void)removeFakeFeedVideoInfo;
@property(retain, nonatomic) TBShareGroupFeedModel *shareGroupFeed; // @synthesize shareGroupFeed=_shareGroupFeed;
@property(retain, nonatomic) TBShareGroupRecommendFeedModel *shareGroupRecommendFeed; // @synthesize shareGroupRecommendFeed=_shareGroupRecommendFeed;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) TBShareGroupInfoModel *shareGroupInfo;
@property(readonly, nonatomic) NSArray *shareGroupVideoInfo;
@property(readonly, nonatomic) NSString *unionID;
- (void)updateFeedDescribe:(id)arg1;
@property(readonly, nonatomic) TBQQUserInfoModel *user;
@property(readonly, nonatomic) unsigned int vidListOrder;
@property(readonly, nonatomic) NSArray *videoInfo;
@property(readonly, nonatomic) int videoTotalNum;

@end

