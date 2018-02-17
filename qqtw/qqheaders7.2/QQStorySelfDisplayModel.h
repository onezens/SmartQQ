//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQStoryBaseLoadingModel.h"

@class NSString, QQStoryVideoDisplayModel;

@interface QQStorySelfDisplayModel : QQStoryBaseLoadingModel
{
    _Bool _isExpanded;
    _Bool _isRecent;
    _Bool _isAllStoryVideosDownloading;
    _Bool _hasShareToDiscover;
    int _videoState;
    int _coverState;
    unsigned int _isVIP;
    unsigned int _fansCount;
    NSString *_uin;
    NSString *_nickName;
    NSString *_headUrl;
    unsigned long long _totalVideo;
    unsigned long long _totalSuccessVideo;
    unsigned long long _totalViewCount;
    unsigned long long _totalLikeCount;
    unsigned long long _totalCommentCount;
    unsigned long long _totalFailedVideo;
    QQStoryVideoDisplayModel *_firstVideoModel;
    NSString *_coverUrl;
}

@property(nonatomic) int coverState; // @synthesize coverState=_coverState;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
- (void)dealloc;
@property(nonatomic) unsigned int fansCount; // @synthesize fansCount=_fansCount;
@property(retain, nonatomic) QQStoryVideoDisplayModel *firstVideoModel; // @synthesize firstVideoModel=_firstVideoModel;
@property(nonatomic) _Bool hasShareToDiscover; // @synthesize hasShareToDiscover=_hasShareToDiscover;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(nonatomic) _Bool isAllStoryVideosDownloading; // @synthesize isAllStoryVideosDownloading=_isAllStoryVideosDownloading;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(nonatomic) _Bool isRecent; // @synthesize isRecent=_isRecent;
@property(nonatomic) unsigned int isVIP; // @synthesize isVIP=_isVIP;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (void)setCoverUrl:(id)arg1 withCoverState:(int)arg2;
@property(nonatomic) unsigned long long totalCommentCount; // @synthesize totalCommentCount=_totalCommentCount;
@property(nonatomic) unsigned long long totalFailedVideo; // @synthesize totalFailedVideo=_totalFailedVideo;
@property(nonatomic) unsigned long long totalLikeCount; // @synthesize totalLikeCount=_totalLikeCount;
@property(nonatomic) unsigned long long totalSuccessVideo; // @synthesize totalSuccessVideo=_totalSuccessVideo;
@property(nonatomic) unsigned long long totalVideo; // @synthesize totalVideo=_totalVideo;
@property(nonatomic) unsigned long long totalViewCount; // @synthesize totalViewCount=_totalViewCount;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(nonatomic) int videoState; // @synthesize videoState=_videoState;

@end

