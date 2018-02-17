//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneModel.h"

@class NSArray, NSString, QzoneFeedModel;

@interface QZSearchFeedModel : QZoneModel
{
    _Bool _isHaveVideo;
    _Bool _cellSeparator;
    int _type;
    unsigned int _qzTotalpicNum;
    NSString *_qzFeedId;
    NSString *_nickName;
    NSString *_Uin;
    NSString *_remark;
    NSArray *_keywords;
    NSString *_detail;
    NSString *_feedTime;
    NSString *_title;
    NSArray *_photoList;
    NSString *_jumpUrl;
    NSString *_qzResultId;
    NSString *_jumeMoreUlr;
    QzoneFeedModel *_feedModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *Uin; // @synthesize Uin=_Uin;
- (id)analyzeNick:(id)arg1;
- (id)analyzeURL:(id)arg1;
@property(nonatomic) _Bool cellSeparator; // @synthesize cellSeparator=_cellSeparator;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
- (double)detailHeight;
@property(retain, nonatomic) QzoneFeedModel *feedModel; // @synthesize feedModel=_feedModel;
@property(retain, nonatomic) NSString *feedTime; // @synthesize feedTime=_feedTime;
- (id)getFilteredText:(id)arg1;
- (id)getValueByKey:(id)arg1 fromText:(id)arg2;
- (double)imageHeight;
- (id)init;
@property(nonatomic) _Bool isHaveVideo; // @synthesize isHaveVideo=_isHaveVideo;
@property(retain, nonatomic) NSString *jumeMoreUlr; // @synthesize jumeMoreUlr=_jumeMoreUlr;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (double)nickNameHeight;
@property(retain, nonatomic) NSArray *photoList; // @synthesize photoList=_photoList;
@property(retain, nonatomic) NSString *qzFeedId; // @synthesize qzFeedId=_qzFeedId;
@property(retain, nonatomic) NSString *qzResultId; // @synthesize qzResultId=_qzResultId;
@property(nonatomic) unsigned int qzTotalpicNum; // @synthesize qzTotalpicNum=_qzTotalpicNum;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int type; // @synthesize type=_type;
- (double)titleHeight;
@property(readonly, nonatomic) double viewHeight;

@end

