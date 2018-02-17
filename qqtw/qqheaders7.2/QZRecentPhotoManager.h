//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSRecursiveLock, QZScanPhotoOperation;

@interface QZRecentPhotoManager : NSObject
{
    NSDate *_lastUpdatePositionDate;
    QZScanPhotoOperation *_operationQueueForAlbumList;
    NSObject<OS_dispatch_queue> *_queueForRecentPhotoManager;
    long long _detectedTagPhotosNum;
    _Bool _albumListShouldStopScan;
    NSDictionary *_cloudRecommendCurrentClickDict;
    NSMutableArray *_albumlistFinishBlocks;
    NSMutableArray *_activeFinishBlocks;
    NSRecursiveLock *_albumlistFinishBlockLock;
    NSRecursiveLock *_activeFinishBlockLock;
}

+ (id)assetWithAssetIdentifier:(id)arg1;
+ (id)assetWithAssetUrl:(id)arg1;
+ (id)assetsFromEventDict:(id)arg1;
+ (id)eventDescOfAssets:(id)arg1;
+ (_Bool)isCloudRecommendEvent:(id)arg1;
+ (_Bool)isVideoQQAssetReachLimit:(id)arg1;
+ (id)photoBrowserForPhotoEvent:(id)arg1 currentPage:(long long)arg2 eventIndex:(long long)arg3 delegate:(id)arg4 fromType:(long long)arg5;
+ (id)recommendGifCache;
+ (id)recommendGifCacheRaw;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)activeFeedScanPhotoEvent;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1 scanEntrance:(long long)arg2;
- (void)albumEventsFromOriginEvents:(id)arg1 cacheEvents:(id)arg2 entrance:(long long)arg3 eventType:(long long)arg4 onComplete:(CDUnknownBlockType)arg5 userParam:(id)arg6 operationID:(id)arg7;
- (void)albumlistScanEventLoadMoreCachesPhotos:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)albumlistScanEventPhotoWithCacheBlock:(CDUnknownBlockType)arg1 onComplete:(CDUnknownBlockType)arg2 operationID:(id)arg3;
- (void)albumlistStopScanEventPhoto;
- (_Bool)assetHasExif:(id)arg1;
- (id)assetsWithUUIDs:(id)arg1;
- (id)cachesEventFromOldEvents:(id)arg1 minCount:(long long)arg2 timestamp:(long long)arg3 allAssetsList:(id)arg4;
- (void)cancelAllOpertaions;
- (void)cancelOperation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 scanEntrance:(long long)arg3;
- (void)checkGifResultArray:(id)arg1;
- (void)cleanPhotoEventCache;
- (void)clearNewEventTag;
- (id)cloudRecommendArrayForDynamic;
- (id)cloudRecommendIDForDynamic;
- (id)dateByConvertingToDate:(id)arg1 isBegin:(_Bool)arg2;
- (void)dismissLocalRedPoint;
- (void)dismissRedPoint;
- (id)event:(id)arg1 key:(id)arg2 gpsInfo:(id)arg3 seperateByMaxCount:(long long)arg4 minCount:(long long)arg5 hideArray:(id)arg6;
- (_Bool)excludedHasUploadedAsset:(id)arg1;
- (void)finalAlbumEvents:(id)arg1 eventType:(long long)arg2 onComplete:(CDUnknownBlockType)arg3 userParam:(id)arg4 operationID:(id)arg5 entrance:(long long)arg6;
- (id)getConfigEventsBetweenStartTime:(double)arg1 endTime:(double)arg2 cachesPhotos:(id)arg3;
- (void)getEventPhotoBeforDays:(id)arg1 entrance:(long long)arg2 cacheEventPhotos:(id)arg3 eventMinPhotoCount:(long long)arg4 onComplete:(CDUnknownBlockType)arg5;
- (void)getEventPhotoBeforDays:(id)arg1 entrance:(long long)arg2 cacheEventPhotos:(id)arg3 eventMinPhotoCount:(long long)arg4 onComplete:(CDUnknownBlockType)arg5 operationID:(id)arg6;
- (void)getEventPhotoBeforDays:(id)arg1 entrance:(long long)arg2 scanEventType:(long long)arg3 cacheEventPhotos:(id)arg4 eventMinPhotoCount:(long long)arg5 onComplete:(CDUnknownBlockType)arg6 operationID:(id)arg7;
- (id)getSuggestImages:(id)arg1 date:(id)arg2 albumId:(id)arg3;
- (id)gifDictsFromSingleGifArray:(id)arg1 gpsInfo:(id)arg2;
- (_Bool)hasNewEvent;
- (long long)indexOfCardID:(id)arg1 inEvents:(id)arg2;
- (id)init;
- (_Bool)isAssetQualified:(id)arg1 scanEntrance:(long long)arg2 excludedUUIDs:(id)arg3 metadata:(id *)arg4 minPhotoSize:(long long)arg5 maxPhotoSize:(long long)arg6;
- (_Bool)isScreenshot:(id)arg1;
- (_Bool)isScreenshotFast:(id)arg1;
- (_Bool)operationIsCanceled:(id)arg1 entrance:(long long)arg2;
- (id)photoEventCardFromEventDict:(id)arg1 source:(id)arg2;
- (id)photoEventsFromDayPhotosDict:(id)arg1 minPhotoCount:(long long)arg2 timeStamp:(long long)arg3;
- (void)recordCurrentClickCloudRecommendDict:(id)arg1;
- (void)recordLoadMoreBeginDateWithEventDict:(id)arg1;
- (void)recordManualCloseForEventPhoto;
- (void)removeCompletionBlock:(CDUnknownBlockType)arg1 scanEntrance:(long long)arg2;
- (void)requestConfigEventWithQualifiedEvents:(id)arg1 beforNormalEventsBeforeDays:(id)arg2 entrance:(long long)arg3 cacheEventPhotos:(id)arg4 eventMinPhotoCount:(long long)arg5 onComplete:(CDUnknownBlockType)arg6 operationID:(id)arg7;
- (void)requestDailyConfigBeforNormalEventsBeforeDays:(id)arg1 entrance:(long long)arg2 cacheEventPhotos:(id)arg3 eventMinPhotoCount:(long long)arg4 onComplete:(CDUnknownBlockType)arg5 operationID:(id)arg6;
- (void)requestRedPoint:(_Bool)arg1;
- (id)requestSystemAssetsList;
- (void)scanEntrance:(long long)arg1 cacheBlock:(CDUnknownBlockType)arg2 onComplete:(CDUnknownBlockType)arg3 operationID:(id)arg4;
- (void)scanEventPhotoWithCacheBlock:(CDUnknownBlockType)arg1 onComplete:(CDUnknownBlockType)arg2 scanEntrance:(long long)arg3 scanEventType:(long long)arg4 displayedPhotos:(id)arg5 operationID:(id)arg6;
- (void)scanFixedRecentPhotos:(long long)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)scanRecentlyCapturedPhotosIfNeededWithScene:(long long)arg1;
- (void)setNewEventTag;
- (void)showRecentBannerAnywayOnComplete:(CDUnknownBlockType)arg1;
- (id)singleEventsFromEventsSet:(id)arg1;
- (id)sortEventArray:(id)arg1;
- (id)tagResultIndexFromAssets:(id)arg1 hasBaby:(_Bool)arg2;
- (id)transferAssetsToUuidAssetDict:(id)arg1;
- (void)updateDayPhotosDict:(id)arg1 withAsset:(id)arg2 gpsInfo:(id)arg3 timeStamp:(long long)arg4;
- (void)updateFetchResult;
- (id)uuidForAsset:(id)arg1;
- (void)writePhotoEventsToCache:(id)arg1 entrance:(long long)arg2 userParam:(id)arg3;

@end
