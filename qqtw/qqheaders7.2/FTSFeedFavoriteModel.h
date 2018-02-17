//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTSBaseCellModel.h"

@class BaseInfoModel, FavPicInfo, MatchResult, NSString;

@interface FTSFeedFavoriteModel : FTSBaseCellModel
{
    int _xo;
    NSString *_summary;
    NSString *_src;
    _Bool _hasThumbnailForCell;
    FavPicInfo *_picInfo;
    unsigned long long _author;
    unsigned long long _local_id;
    BaseInfoModel *_baseInfoModel;
    int _searchMatchResult;
    MatchResult *_matchResult;
}

- (void).cxx_destruct;
- (void)cellDidSelectedAction:(long long)arg1;
- (double)cellHeight;
- (id)cellIdentifier;
- (id)cellViewClassName;
- (id)createSearchCondition;
- (id)init;

// Remaining properties
@property(nonatomic) unsigned long long author; // @dynamic author;
@property(retain, nonatomic) BaseInfoModel *baseInfoModel; // @dynamic baseInfoModel;
@property(nonatomic) _Bool hasThumbnailForCell; // @dynamic hasThumbnailForCell;
@property(nonatomic) unsigned long long local_id; // @dynamic local_id;
@property(retain, nonatomic) MatchResult *matchResult; // @dynamic matchResult;
@property(retain, nonatomic) FavPicInfo *picInfo; // @dynamic picInfo;
@property(nonatomic) int searchMatchResult; // @dynamic searchMatchResult;
@property(retain, nonatomic) NSString *src; // @dynamic src;
@property(retain, nonatomic) NSString *summary; // @dynamic summary;

@end

