//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseInfoModel.h"

#import "FavCoding.h"

@class NSMutableArray, NSString;

@interface GalleryInfoModel : BaseInfoModel <FavCoding>
{
    NSString *_pic_desc;
    NSMutableArray *_pic_info_list;
}

- (id)GetFTSBrief;
- (id)briefForCell;
- (_Bool)canForward;
- (void)dealloc;
- (void)encodeAddReqMsg:(void *)arg1;
- (id)encodeDataForDetail:(_Bool)arg1;
- (void)encodeModifyReqMsg:(void *)arg1;
- (int)getForwardData:(id)arg1 Fetch:(_Bool)arg2;
- (id)getPicInfoList;
- (int)getRspType;
- (_Bool)hasOnlyPictures;
- (id)init;
- (id)initWithLocalPath:(id)arg1;
- (id)initWithSummary:(void *)arg1;
- (id)isBriefMatched:(id)arg1;
- (void)mergeDataFromModel:(id)arg1;
@property(copy, nonatomic) NSString *pic_desc; // @synthesize pic_desc=_pic_desc;
@property(retain, nonatomic) NSMutableArray *pic_info_list; // @synthesize pic_info_list=_pic_info_list;
- (void)setData:(id)arg1 forDetail:(_Bool)arg2;
- (id)sourceForCell;
- (id)titleForCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
