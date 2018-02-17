//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComicInfoModel, ComicPageInfoModel, NSArray, NSMutableArray, NSNumber, NSString;

@interface QQVipFunctionComicHelperObj : NSObject
{
    CDUnknownBlockType _block;
    long long _retryCount;
    ComicInfoModel *_lastComicModel;
    NSString *_sectionID;
    NSArray *_sectionIDs;
    ComicPageInfoModel *_lastComicPageInfoModel;
    unsigned long long _type;
    NSNumber *_simpleRequestSectionModelArrMode;
    _Bool _preferLocalData;
    NSMutableArray *_deleteSectionModelArr;
    int _xo;
}

- (void).cxx_destruct;
- (void)mergeWithRespComicInfoModel:(id)arg1 andRespPageInfoModel:(id)arg2;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType block; // @dynamic block;
@property(retain, nonatomic) NSMutableArray *deleteSectionModelArr; // @dynamic deleteSectionModelArr;
@property(retain, nonatomic) ComicInfoModel *lastComicModel; // @dynamic lastComicModel;
@property(retain, nonatomic) ComicPageInfoModel *lastComicPageInfoModel; // @dynamic lastComicPageInfoModel;
@property(nonatomic) _Bool preferLocalData; // @dynamic preferLocalData;
@property(nonatomic) long long retryCount; // @dynamic retryCount;
@property(retain, nonatomic) NSString *sectionID; // @dynamic sectionID;
@property(retain, nonatomic) NSArray *sectionIDs; // @dynamic sectionIDs;
@property(retain, nonatomic) NSNumber *simpleRequestSectionModelArrMode; // @dynamic simpleRequestSectionModelArrMode;
@property(nonatomic) unsigned long long type; // @dynamic type;

@end

