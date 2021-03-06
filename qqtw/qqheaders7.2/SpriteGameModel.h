//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface SpriteGameModel : NSObject
{
    _Bool _needOpenKey;
    _Bool _isSupportStandby;
    _Bool _isDisableGameMsg;
    int _appId;
    int _playMode;
    NSString *_idStr;
    NSString *_name;
    NSString *_coverImgUrl;
    NSString *_resUrl;
    NSString *_version;
    NSString *_actionIdStr;
    NSString *_introUrl;
    NSNumber *_iosShow;
    NSString *_iosStartVersion;
    NSString *_iosEndVersion;
    NSString *_rankImgUrl;
    NSMutableArray *_ctcBtnArray;
    NSMutableArray *_groupBtnArray;
    unsigned long long _querySlice;
    NSString *_joinPicName;
    NSString *_startPicName;
    NSString *_endPicName;
    NSString *_listCoverUrl;
    NSString *_bigCoverUrl;
    NSString *_bigCoverBgColor;
    NSString *_onlookerBkg;
    NSString *_toolUrl;
    NSArray *_bgPics;
    NSString *_lifeImgUrl;
}

@property(retain, nonatomic) NSString *actionIdStr; // @synthesize actionIdStr=_actionIdStr;
@property(nonatomic) int appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSArray *bgPics; // @synthesize bgPics=_bgPics;
@property(retain, nonatomic) NSString *bigCoverBgColor; // @synthesize bigCoverBgColor=_bigCoverBgColor;
@property(retain, nonatomic) NSString *bigCoverUrl; // @synthesize bigCoverUrl=_bigCoverUrl;
@property(retain, nonatomic) NSString *coverImgUrl; // @synthesize coverImgUrl=_coverImgUrl;
@property(retain, nonatomic) NSMutableArray *ctcBtnArray; // @synthesize ctcBtnArray=_ctcBtnArray;
- (void)dealloc;
@property(retain, nonatomic) NSString *endPicName; // @synthesize endPicName=_endPicName;
- (id)gameBgConfigByGameMode:(int)arg1;
@property(retain, nonatomic) NSMutableArray *groupBtnArray; // @synthesize groupBtnArray=_groupBtnArray;
@property(retain, nonatomic) NSString *idStr; // @synthesize idStr=_idStr;
- (id)initWithDict:(id)arg1;
@property(retain, nonatomic) NSString *introUrl; // @synthesize introUrl=_introUrl;
@property(retain, nonatomic) NSString *iosEndVersion; // @synthesize iosEndVersion=_iosEndVersion;
@property(retain, nonatomic) NSNumber *iosShow; // @synthesize iosShow=_iosShow;
@property(retain, nonatomic) NSString *iosStartVersion; // @synthesize iosStartVersion=_iosStartVersion;
@property(nonatomic) _Bool isDisableGameMsg; // @synthesize isDisableGameMsg=_isDisableGameMsg;
@property(nonatomic) _Bool isSupportStandby; // @synthesize isSupportStandby=_isSupportStandby;
@property(retain, nonatomic) NSString *joinPicName; // @synthesize joinPicName=_joinPicName;
@property(retain, nonatomic) NSString *lifeImgUrl; // @synthesize lifeImgUrl=_lifeImgUrl;
@property(retain, nonatomic) NSString *listCoverUrl; // @synthesize listCoverUrl=_listCoverUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool needOpenKey; // @synthesize needOpenKey=_needOpenKey;
@property(retain, nonatomic) NSString *onlookerBkg; // @synthesize onlookerBkg=_onlookerBkg;
@property(nonatomic) int playMode; // @synthesize playMode=_playMode;
@property(nonatomic) unsigned long long querySlice; // @synthesize querySlice=_querySlice;
@property(retain, nonatomic) NSString *rankImgUrl; // @synthesize rankImgUrl=_rankImgUrl;
@property(retain, nonatomic) NSString *resUrl; // @synthesize resUrl=_resUrl;
@property(retain, nonatomic) NSString *startPicName; // @synthesize startPicName=_startPicName;
@property(copy, nonatomic) NSString *toolUrl; // @synthesize toolUrl=_toolUrl;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;

@end

