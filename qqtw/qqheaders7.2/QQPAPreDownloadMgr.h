//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, PAPrefetchLRUCache;

@interface QQPAPreDownloadMgr : NSObject
{
    NSMutableDictionary *_IOReportDic;
    NSMutableDictionary *_downloadingImgMonitorDic;
    NSObject<OS_dispatch_queue> *_operationQueue;
    NSString *_cacheDirectory;
    NSMutableArray *_htmlPreloadTaskArray;
    NSMutableArray *_imgPreloadTaskArray;
    PAPrefetchLRUCache *_prefetchItemCache;
    NSMutableArray *_downloadingImgMonitorArray;
}

+ (_Bool)isIPConnectNeedReport;
+ (_Bool)isReadInArticleDomain:(id)arg1;
+ (void)reportIpConnStateWithTime:(unsigned long long)arg1 andOriginUrl:(id)arg2 andInfo:(id)arg3;
+ (void)reportIpConnStateWithTime:(unsigned long long)arg1 andOriginUrl:(id)arg2 andIsSuccess:(_Bool)arg3 andIsUseIP:(_Bool)arg4 andHaveIp:(_Bool)arg5 andResponseUrl:(id)arg6 andRetCode:(long long)arg7 andSource:(unsigned long long)arg8;
+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *IOReportDic; // @synthesize IOReportDic=_IOReportDic;
- (void)_downloadDataReport:(id)arg1 forItem:(id)arg2 code:(long long)arg3 excuteTime:(long long)arg4 source:(id)arg5;
- (int)_getFileType:(id)arg1;
- (_Bool)_grayStrategy;
@property(copy, nonatomic) NSString *cacheDirectory; // @synthesize cacheDirectory=_cacheDirectory;
- (void)cancelPreDownloadTask:(id)arg1;
- (void)clearLocalCache:(int)arg1;
- (void)clearPrefetchItemCache:(int)arg1;
@property(retain) NSMutableArray *downloadingImgMonitorArray; // @synthesize downloadingImgMonitorArray=_downloadingImgMonitorArray;
@property(retain) NSMutableDictionary *downloadingImgMonitorDic; // @synthesize downloadingImgMonitorDic=_downloadingImgMonitorDic;
- (void)excuteNewTaskWithFileType:(int)arg1;
- (int)getCacheStatusWithUrl:(id)arg1;
- (id)getDownloadingImgMonitorDic:(id)arg1;
- (id)getGrayStrategyConfig;
- (id)getIoReportDic:(id)arg1;
- (id)getLocalCacheDataByUrl:(id)arg1;
@property(retain) NSMutableArray *htmlPreloadTaskArray; // @synthesize htmlPreloadTaskArray=_htmlPreloadTaskArray;
@property(retain) NSMutableArray *imgPreloadTaskArray; // @synthesize imgPreloadTaskArray=_imgPreloadTaskArray;
- (id)init;
- (id)localCachePath;
- (id)localCachePathForURL:(id)arg1;
- (_Bool)needProxyRequest:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) PAPrefetchLRUCache *prefetchItemCache; // @synthesize prefetchItemCache=_prefetchItemCache;
- (void)preloadArticleCacheData:(id)arg1;
- (_Bool)proxyRequestToCache:(id)arg1 onFinish:(CDUnknownBlockType)arg2;
- (void)removeAllDownloadingImgMonitorDic;
- (void)reportPAAlbumPreDownload:(_Bool)arg1 elapse:(long long)arg2;
- (void)requestFailWithSession:(id)arg1 originUrl:(id)arg2 error:(id)arg3 excuteTime:(long long)arg4 source:(id)arg5;
- (void)requestRedirectWithUrl:(id)arg1;
- (void)requestSuccessWithSession:(id)arg1 originUrl:(id)arg2 resObject:(id)arg3 excuteTime:(long long)arg4 source:(id)arg5;
- (void)scheduleDownloadWithNewTaskArray:(id)arg1 withType:(int)arg2;
- (id)sortPreloadTaskArray:(id)arg1;
- (void)startArticlePreDownloadTasks:(id)arg1;
- (void)startDownloadWithTask:(id)arg1;
- (void)startPhotoPreDownloadTasks:(id)arg1;

@end
