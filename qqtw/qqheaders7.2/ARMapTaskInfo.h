//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSMutableArray, NSString;

@interface ARMapTaskInfo : NSObject <NSCopying>
{
    unsigned int _status;
    unsigned int _priority;
    unsigned int _treasureType;
    unsigned int _openMethod;
    unsigned long long _taskID;
    NSString *_logoURL;
    NSString *_busiName;
    NSString *_openKey;
    NSString *_gameInfo;
    NSString *_topURL;
    NSString *_singleRedBagUrl;
    NSString *_disableRedBagUrl;
    NSString *_twoRedBagUrl;
    NSString *_bottomURL;
    NSString *_farPoiUrl;
    unsigned long long _displayMode;
    NSArray *_occupiers;
    NSString *_animationUrl;
    NSString *_animationMd5;
    NSString *_jumpURL;
    NSString *_scanJSON;
    double _beginTime;
    double _endTime;
    NSString *_starPhotoWording;
    NSMutableArray *_lbsPackArray;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *animationMd5; // @synthesize animationMd5=_animationMd5;
@property(copy, nonatomic) NSString *animationUrl; // @synthesize animationUrl=_animationUrl;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(copy, nonatomic) NSString *bottomURL; // @synthesize bottomURL=_bottomURL;
@property(copy, nonatomic) NSString *busiName; // @synthesize busiName=_busiName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(copy, nonatomic) NSString *disableRedBagUrl; // @synthesize disableRedBagUrl=_disableRedBagUrl;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *farPoiUrl; // @synthesize farPoiUrl=_farPoiUrl;
@property(copy, nonatomic) NSString *gameInfo; // @synthesize gameInfo=_gameInfo;
@property(copy, nonatomic) NSString *jumpURL; // @synthesize jumpURL=_jumpURL;
@property(retain, nonatomic) NSMutableArray *lbsPackArray; // @synthesize lbsPackArray=_lbsPackArray;
@property(copy, nonatomic) NSString *logoURL; // @synthesize logoURL=_logoURL;
@property(retain, nonatomic) NSArray *occupiers; // @synthesize occupiers=_occupiers;
@property(copy, nonatomic) NSString *openKey; // @synthesize openKey=_openKey;
@property(nonatomic) unsigned int openMethod; // @synthesize openMethod=_openMethod;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *scanJSON; // @synthesize scanJSON=_scanJSON;
@property(copy, nonatomic) NSString *singleRedBagUrl; // @synthesize singleRedBagUrl=_singleRedBagUrl;
@property(copy, nonatomic) NSString *starPhotoWording; // @synthesize starPhotoWording=_starPhotoWording;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned long long taskID; // @synthesize taskID=_taskID;
@property(copy, nonatomic) NSString *topURL; // @synthesize topURL=_topURL;
@property(nonatomic) unsigned int treasureType; // @synthesize treasureType=_treasureType;
@property(copy, nonatomic) NSString *twoRedBagUrl; // @synthesize twoRedBagUrl=_twoRedBagUrl;

@end

