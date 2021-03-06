//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PAAdMsgVideoBannerModel;

@interface PAAdMsgVideoModel : NSObject
{
    NSString *_coverUrl;
    NSString *_vid;
    NSString *_adId;
    NSString *_adPaUin;
    double _startPlayTime;
    double _totalPlayTime;
    PAAdMsgVideoBannerModel *_bannerModel;
    unsigned long long _preDownloadType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(copy, nonatomic) NSString *adPaUin; // @synthesize adPaUin=_adPaUin;
@property(retain, nonatomic) PAAdMsgVideoBannerModel *bannerModel; // @synthesize bannerModel=_bannerModel;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
- (id)description;
@property(nonatomic) unsigned long long preDownloadType; // @synthesize preDownloadType=_preDownloadType;
@property(nonatomic) double startPlayTime; // @synthesize startPlayTime=_startPlayTime;
@property(nonatomic) double totalPlayTime; // @synthesize totalPlayTime=_totalPlayTime;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;

@end

