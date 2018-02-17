//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseEngine.h"

@interface QZFakeFeedEngine : QZBaseEngine
{
}

+ (id)instance;
- (void)addFeed:(id)arg1 withClientKey:(id)arg2;
- (id)extractBottomRecomm:(id)arg1;
- (_Bool)fakeUploadPhotos:(id)arg1 video:(id)arg2 albumId:(id)arg3 albumName:(id)arg4 desc:(id)arg5 withClientKey:(id)arg6 gpsInfo:(id)arg7 lbsAddress:(id)arg8 shootModel:(id)arg9 albumRight:(long long)arg10 albumAnonymity:(long long)arg11 individualAlbum:(long long)arg12 isShareAlbum:(_Bool)arg13 coverUrl:(id)arg14 extendInfo:(id)arg15;
- (_Bool)fakeUploadPhotosWithFeed:(id)arg1 withClientKey:(id)arg2 withFeedLevel:(long long)arg3;
- (_Bool)fakeWriteMoodWithContent:(id)arg1 hasMoreContent:(unsigned long long)arg2 photos:(id)arg3 video:(id)arg4 movieAlbum:(id)arg5 withClientKey:(id)arg6 lbsModel:(id)arg7 shootModel:(id)arg8 lbsAddress:(id)arg9 ugcRight:(unsigned long long)arg10 extendInfo:(id)arg11 otherInfo:(id)arg12;
- (_Bool)fakeWriteMoodWithFeed:(id)arg1 withClientKey:(id)arg2 requestID:(long long)arg3;
- (id)genClientKey;
- (id)genFakeCommmentWithContent:(id)arg1 commentId:(id)arg2 photoModel:(id)arg3;
- (id)genFakeCommmentWithContent:(id)arg1 commentId:(id)arg2 photoModel:(id)arg3 extendInfo:(id)arg4;
- (id)genFakeCommmentWithContent:(id)arg1 commentId:(id)arg2 photoModel:(id)arg3 photoFrom:(long long)arg4 extendInfo:(id)arg5;
- (id)genFakeCommmentWithContent:(id)arg1 commentId:(id)arg2 photoModel:(id)arg3 photoFrom:(long long)arg4 picCommentList:(id)arg5 extendInfo:(id)arg6;
- (id)genFakeCommmentWithContent:(id)arg1 commentId:(id)arg2 picCommentList:(id)arg3 extendInfo:(id)arg4;
- (void)genFakeFont:(id)arg1 feedModel:(id)arg2;
- (void)genFakeFrdList:(id)arg1;
- (id)genFakeLike;
- (id)genFakeReplyWithContent:(id)arg1 target:(id)arg2 extendInfo:(id)arg3;
- (id)generateFakeFeedCellUser;
- (_Bool)generateFakeRedBonusFeedWithKey:(id)arg1;
- (void)removeFeedWithClientKey:(id)arg1 notify:(_Bool)arg2;
- (void)updateMoodDataForFeed:(id)arg1 content:(id)arg2 hasMoreContent:(_Bool)arg3 pictureList:(id)arg4 video:(id)arg5 clientKey:(id)arg6 lbsModel:(id)arg7 shootModel:(id)arg8 lbsAddress:(id)arg9 ugcRight:(unsigned long long)arg10 extendInfo:(id)arg11 otherInfo:(id)arg12;
- (void)updateUploadPhotosForFeed:(id)arg1 albumId:(id)arg2 albumName:(id)arg3 pictureList:(id)arg4 video:(id)arg5 desc:(id)arg6 clientKey:(id)arg7 gpsInfo:(id)arg8 lbsAddress:(id)arg9 shootModel:(id)arg10 albumRight:(long long)arg11 albumAnonymity:(long long)arg12 individualAlbum:(long long)arg13 isShareAlbum:(_Bool)arg14 coverUrl:(id)arg15 extendInfo:(id)arg16;

@end

