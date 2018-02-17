//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ITVVideoDownloadDelegate.h"

@class FAVideoTVDownTask, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface FAVideoDownLoadMgr : NSObject <ITVVideoDownloadDelegate>
{
    NSMutableArray *_waitQueue;
    NSMutableDictionary *_urlDict;
    id <FADelegate> _delegate;
    NSObject<OS_dispatch_queue> *_videoQueue;
    FAVideoTVDownTask *_curTask;
}

+ (id)getInstance;
- (void)OnFADownloadUpdate:(id)arg1 isFinish:(_Bool)arg2 withErr:(id)arg3;
- (void)OnNetReachabilityDidChange:(id)arg1;
- (void)OnTVVideoDownloadError:(id)arg1;
- (void)OnTVVideoDownloadProgress:(id)arg1;
- (void)OnTVVideoDownloadSuccess:(id)arg1;
- (void)addPlayTask:(id)arg1;
- (void)cancel:(id)arg1;
- (void)checkDiskSize:(id)arg1;
@property(retain, nonatomic) FAVideoTVDownTask *curTask; // @synthesize curTask=_curTask;
- (void)dealloc;
- (void)download:(id)arg1;
- (void)fetchDownlaodURL:(id)arg1;
- (id)fineTaskByPlayId:(long long)arg1 fileId:(id)arg2 currentTask:(_Bool *)arg3;
- (id)init;
- (void)internalDownload:(id)arg1;
- (void)notifyPlayURL:(id)arg1;
- (void)onDownloadComplete:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)onFADownURLFetch:(id)arg1 downInfo:(id)arg2 error:(id)arg3;
- (void)onFAThumbnailFail:(id)arg1 size:(int)arg2;
- (void)onFAThumbnailProgress:(id)arg1 size:(int)arg2 progress:(double)arg3;
- (void)onFAThumbnailSuccess:(id)arg1 size:(int)arg2;
- (void)onTaskComplete:(id)arg1;
- (void)postTaskError:(id)arg1 error:(id)arg2;
- (void)prepareDownloadTask:(id)arg1 fetchUrl:(_Bool)arg2;
- (void)removePlayTask:(id)arg1;
- (void)startPrelaodVideo:(id)arg1;
- (void)stopPreloadVideo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

