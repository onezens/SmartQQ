//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseInfoModel.h"

#import "FavCoding.h"

@class NSString;

@interface TextInfoModel : BaseInfoModel <FavCoding>
{
    NSString *_brief;
    NSString *_data;
    _Bool _brief_has_emotion;
    _Bool _data_has_emotion;
}

- (id)GetFTSBrief;
- (_Bool)canForward;
- (void)dealloc;
- (void)encodeAddReqMsg:(void *)arg1;
- (id)encodeDataForDetail:(_Bool)arg1;
- (void)encodeModifyReqMsg:(void *)arg1;
- (_Bool)fillDetailInfo:(void *)arg1;
- (id)getDefaultThumbPath;
- (int)getForwardData:(id)arg1 Fetch:(_Bool)arg2;
- (int)getRspType;
- (id)init;
- (id)initWithSummary:(void *)arg1;
- (id)isBriefMatched:(id)arg1;
- (id)isDetailMatched:(id)arg1;
- (void)mergeDataFromModel:(id)arg1;
- (void)setData:(id)arg1 forDetail:(_Bool)arg2;

// Remaining properties
@property(retain, nonatomic) NSString *brief; // @dynamic brief;
@property(nonatomic) _Bool brief_has_emotion; // @dynamic brief_has_emotion;
@property(retain, nonatomic) NSString *data; // @dynamic data;
@property(nonatomic) _Bool data_has_emotion; // @dynamic data_has_emotion;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

