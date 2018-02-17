//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString, TBAddressModel, TBQQUserInfoModel, TBVideoSpreadGroupListModel;

@interface TBStoryVideoDesModel : NSObject <NSCoding>
{
    _Bool _isWatch;
    _Bool _isHasRelatedVideos;
    _Bool _isHasLike;
    _Bool _isPicture;
    _Bool _isLocal;
    unsigned int _viewTotalNum;
    unsigned int _videoHeight;
    unsigned int _videoWidth;
    unsigned int _strangerViewTotalNum;
    unsigned int _uncheckLikeNum;
    unsigned int _totalLikeNum;
    unsigned int _totalCommentNum;
    int _latitude;
    int _longitude;
    unsigned int _videoLimit;
    unsigned int _error;
    unsigned int _urlFlag;
    int _timezoneOffset;
    unsigned int _videoSource;
    NSString *_vid;
    NSString *_videoUrl;
    NSString *_videoCover;
    NSString *_title;
    NSString *_doodleUrl;
    NSString *_doodleText;
    unsigned long long _createTime;
    NSString *_label;
    unsigned long long _videoTime;
    TBAddressModel *_address;
    unsigned long long _videoLength;
    TBQQUserInfoModel *_authorUserInfo;
    double _videoLoadTime;
    double _videoPlayerTime;
    NSArray *_mentionList;
    unsigned long long _captureTime;
    NSString *_captureLocation;
    TBVideoSpreadGroupListModel *_groupList;
    double _fakedownLoadProgress;
    NSString *_feedID;
    unsigned long long _groupCode;
    NSString *_groupStoryFileMD5;
    NSString *_fileLocalPath;
    NSString *_dataKey;
}

+ (id)createWithQQStoryCPBMessageDecoder:(struct CPBMessageDecoder *)arg1;
+ (id)filterOverdueVideo:(id)arg1;
@property(retain, nonatomic) TBAddressModel *address; // @synthesize address=_address;
@property(retain, nonatomic) TBQQUserInfoModel *authorUserInfo; // @synthesize authorUserInfo=_authorUserInfo;
@property(retain, nonatomic) NSString *captureLocation; // @synthesize captureLocation=_captureLocation;
@property(nonatomic) unsigned long long captureTime; // @synthesize captureTime=_captureTime;
- (id)convertToVideoBasicInfo;
- (void)copyFrom:(id)arg1;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *dataKey; // @synthesize dataKey=_dataKey;
- (void)dealloc;
@property(retain, nonatomic) NSString *doodleText; // @synthesize doodleText=_doodleText;
@property(retain, nonatomic) NSString *doodleUrl; // @synthesize doodleUrl=_doodleUrl;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) unsigned int error; // @synthesize error=_error;
@property(nonatomic) double fakedownLoadProgress; // @synthesize fakedownLoadProgress=_fakedownLoadProgress;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(retain, nonatomic) NSString *fileLocalPath; // @synthesize fileLocalPath=_fileLocalPath;
@property(nonatomic) unsigned long long groupCode; // @synthesize groupCode=_groupCode;
@property(retain, nonatomic) TBVideoSpreadGroupListModel *groupList; // @synthesize groupList=_groupList;
@property(retain, nonatomic) NSString *groupStoryFileMD5; // @synthesize groupStoryFileMD5=_groupStoryFileMD5;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool isHasLike; // @synthesize isHasLike=_isHasLike;
@property(nonatomic) _Bool isHasRelatedVideos; // @synthesize isHasRelatedVideos=_isHasRelatedVideos;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
- (_Bool)isOverdueVideo;
@property(nonatomic) _Bool isPicture; // @synthesize isPicture=_isPicture;
- (_Bool)isVideoURLNormal;
@property(nonatomic) _Bool isWatch; // @synthesize isWatch=_isWatch;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) int latitude; // @synthesize latitude=_latitude;
@property(nonatomic) int longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSArray *mentionList; // @synthesize mentionList=_mentionList;
@property(nonatomic) unsigned int strangerViewTotalNum; // @synthesize strangerViewTotalNum=_strangerViewTotalNum;
@property(nonatomic) int timezoneOffset; // @synthesize timezoneOffset=_timezoneOffset;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int totalCommentNum; // @synthesize totalCommentNum=_totalCommentNum;
@property(nonatomic) unsigned int totalLikeNum; // @synthesize totalLikeNum=_totalLikeNum;
@property(nonatomic) unsigned int uncheckLikeNum; // @synthesize uncheckLikeNum=_uncheckLikeNum;
@property(nonatomic) unsigned int urlFlag; // @synthesize urlFlag=_urlFlag;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *videoCover; // @synthesize videoCover=_videoCover;
@property(nonatomic) unsigned int videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) unsigned long long videoLength; // @synthesize videoLength=_videoLength;
@property(nonatomic) unsigned int videoLimit; // @synthesize videoLimit=_videoLimit;
@property(nonatomic) double videoLoadTime; // @synthesize videoLoadTime=_videoLoadTime;
@property(nonatomic) double videoPlayerTime; // @synthesize videoPlayerTime=_videoPlayerTime;
@property(nonatomic) unsigned int videoSource; // @synthesize videoSource=_videoSource;
@property(nonatomic) unsigned long long videoTime; // @synthesize videoTime=_videoTime;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(nonatomic) unsigned int videoWidth; // @synthesize videoWidth=_videoWidth;
@property(nonatomic) unsigned int viewTotalNum; // @synthesize viewTotalNum=_viewTotalNum;

@end

