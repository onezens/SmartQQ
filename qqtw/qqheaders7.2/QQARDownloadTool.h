//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface QQARDownloadTool : NSObject
{
    NSMutableSet *_downloadingArResourceUrlSet;
    NSMutableDictionary *_allTaskDict;
    NSMutableDictionary *_allNeedDownloadTaskDict;
    long long _totalSize;
    NSObject<OS_dispatch_queue> *_downloadARResQueueManager;
    _Bool _isDownloading;
    CDUnknownBlockType _mSucessTaskBlock;
    CDUnknownBlockType _mFailTaskBlock;
    CDUnknownBlockType _mDownloadingProgressNotification;
}

+ (id)downloadStart:(id)arg1 sucessTaskBlock:(CDUnknownBlockType)arg2 failTaskBlock:(CDUnknownBlockType)arg3 downloadingProgressNotification:(CDUnknownBlockType)arg4;
+ (void)stopDownLoadAll;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *allNeedDownloadTaskDict; // @synthesize allNeedDownloadTaskDict=_allNeedDownloadTaskDict;
@property(retain, nonatomic) NSMutableDictionary *allTaskDict; // @synthesize allTaskDict=_allTaskDict;
- (void)downloadARResourceFile:(id)arg1;
- (void)downloadWebViewRes:(id)arg1;
@property(retain, nonatomic) NSMutableSet *downloadingArResourceUrlSet; // @synthesize downloadingArResourceUrlSet=_downloadingArResourceUrlSet;
- (id)getDownloadTask:(id)arg1 isNeedDownload:(_Bool)arg2 key:(id)arg3;
- (id)init;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(copy, nonatomic) CDUnknownBlockType mDownloadingProgressNotification; // @synthesize mDownloadingProgressNotification=_mDownloadingProgressNotification;
@property(copy, nonatomic) CDUnknownBlockType mFailTaskBlock; // @synthesize mFailTaskBlock=_mFailTaskBlock;
@property(copy, nonatomic) CDUnknownBlockType mSucessTaskBlock; // @synthesize mSucessTaskBlock=_mSucessTaskBlock;
- (void)postDownloadingProgressNotification:(id)arg1;
- (void)postDownloadingProgressNotification:(id)arg1 isCloud:(_Bool)arg2;
@property(nonatomic) long long totalSize; // @synthesize totalSize=_totalSize;
- (void)stopDownload;
- (void)unzipExistFileFromTool:(id)arg1;
- (_Bool)unzipFile:(id)arg1 toFolder:(id)arg2 fileInfoDic:(id)arg3;

@end

