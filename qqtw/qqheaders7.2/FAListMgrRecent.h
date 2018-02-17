//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAListMgrBase.h"

@class NSLock, NSMutableArray;

@interface FAListMgrRecent : FAListMgrBase
{
    NSMutableArray *_fileListCache;
    NSLock *_cacheLock;
}

+ (id)getDocCategoryDataUtils:(id)arg1 isCheckExist:(_Bool)arg2;
- (void)addFileRecordToRecentCache:(id)arg1;
- (void)categoryFileList:(id)arg1 info:(struct FAListInfo)arg2;
- (void)clearFileList;
- (void)dealloc;
- (void)deleteRecentFile:(id)arg1;
- (void)deleteRecentFileInDB:(id)arg1;
- (void)getAudioCategoryData:(id)arg1 info:(struct FAListInfo)arg2;
- (void)getDocCategoryData:(id)arg1 info:(struct FAListInfo)arg2;
- (id)getFileList:(struct FAListInfo)arg1;
- (void)getFileListCategory:(struct FAListInfo)arg1 isForce:(_Bool)arg2;
- (void)getFileListFromStart:(unsigned short)arg1 toEnd:(unsigned short)arg2 businessFilter:(unsigned long long)arg3;
- (unsigned short)getMaxRecentRecordNumber;
- (void)getPicCategoryData:(id)arg1 info:(struct FAListInfo)arg2;
- (void)getRecentCategoryData:(id)arg1 info:(struct FAListInfo)arg2;
- (void)getRecentCategoryFile:(id)arg1 info:(struct FAListInfo)arg2 filter:(CDUnknownBlockType)arg3;
- (void)getVideoCategoryData:(id)arg1 info:(struct FAListInfo)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)onAccountChanged;
- (void)onAccountLogout;

@end
