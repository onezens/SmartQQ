//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface GroupFaceWallFileManager : NSObject
{
    NSMutableDictionary *_imageFileUseInfo;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (id)getFaceWallImageList:(id)arg1;
- (id)getFaceWallListWithPicId:(id)arg1;
- (id)getFaceWallOrgImageList:(id)arg1;
- (id)getGroupBigImageId:(id)arg1;
- (id)getGroupImageListId:(id)arg1;
- (id)getVerifyIdListKey:(id)arg1;
- (id)getVerifyIdListWithGroupCode:(id)arg1;
- (id)init;
- (_Bool)isBigFont;
- (_Bool)isItemInArryList:(id)arg1 arryList:(id)arg2;
- (void)setFaceWallImageList:(id)arg1 arryList:(id)arg2;
- (void)setFaceWallListWithPicId:(id)arg1 picIdList:(id)arg2;
- (void)setFaceWallOrgImageList:(id)arg1 arryList:(id)arg2;
- (void)setVerifyIdListWithGroupCode:(id)arg1 picIdList:(id)arg2;

@end

