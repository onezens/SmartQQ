//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FAModel, NSDictionary, NSError, VideoPlayParams;

@protocol FADelegate <NSObject>
- (void)didDeleteFileRecordFail:(FAModel *)arg1 withErr:(NSError *)arg2;
- (void)didDeleteFileRecordSuccess:(FAModel *)arg1;
- (void)didFileAirCopyToGroupAction:(FAModel *)arg1;
- (void)didFileAirCopyToGroupCSRequestDone:(FAModel *)arg1 withErr:(NSError *)arg2 isGroupTempSpace:(_Bool)arg3;
- (void)didFileAirCopyToSelfDeviceFinish:(FAModel *)arg1 withErr:(NSError *)arg2;
- (void)didFileAirCopyToSelfDeviceStart:(FAModel *)arg1;
- (void)didFileDownURLFetch:(FAModel *)arg1 playParam:(VideoPlayParams *)arg2 error:(NSError *)arg3;
- (void)didFileListFail:(int)arg1 withErr:(NSError *)arg2;
- (void)didFileListSuccess:(struct FAListInfo)arg1 start:(unsigned short)arg2 end:(unsigned short)arg3 data:(id)arg4 hasMore:(_Bool)arg5;
- (void)didFileMsgAdd:(FAModel *)arg1;
- (void)didFileRecallResult:(unsigned long long)arg1 withErr:(NSError *)arg2;
- (void)didFileRecordAdd:(FAModel *)arg1;
- (void)didFileRecordLinkedWYJobIDChange:(FAModel *)arg1;
- (void)didFileRecordUpdate:(FAModel *)arg1 withErr:(NSError *)arg2;
- (void)didLocalLibraryInfoSuccess:(NSDictionary *)arg1;
- (void)didThumbnailFail:(FAModel *)arg1 size:(int)arg2 withErr:(NSError *)arg3;
- (void)didThumbnailProgress:(FAModel *)arg1 size:(int)arg2 progress:(double)arg3;
- (void)didThumbnailSuccess:(FAModel *)arg1 size:(int)arg2;
@end

