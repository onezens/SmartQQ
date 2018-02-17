//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ALAssetsLibrary, NSArray, NSData, NSDictionary, NSString, NSURL, QQAssetsGroup, UIImage;

@protocol IAlbumService

@optional
+ (long long)authorizationStatus;
- (NSArray *)albumData;
- (void)assetALForURL:(NSURL *)arg1 resultBlock:(void (^)(id))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)assetForIdentity:(NSString *)arg1 resultBlock:(void (^)(id))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)assetForURL:(NSURL *)arg1 resultBlock:(void (^)(id))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)assetsALGroup:(QQAssetsGroup *)arg1 enumerateAssetsUsingBlock:(void (^)(NSArray *))arg2;
- (void)assetsGroup:(QQAssetsGroup *)arg1 enumerateAssetsUsingBlock:(void (^)(NSArray *))arg2;
- (void)assetsGroup:(QQAssetsGroup *)arg1 recentCount:(unsigned long long)arg2 enumerateAssetsUsingBlock:(void (^)(NSArray *))arg3;
- (void)asyncCompressAndSaveImages:(NSArray *)arg1 uuids:(NSArray *)arg2 accType:(int)arg3 scaleMode:(int)arg4 compressCallback:(void (^)(NSString *, NSString *, int, struct CGSize))arg5 finishCallback:(void (^)(NSArray *))arg6;
- (void)asyncCompressImageAtPath:(NSString *)arg1 toPath:(NSString *)arg2;
- (void)asyncSendAlbumPhotoList:(NSArray *)arg1 withblock:(void (^)(NSArray *, _Bool, _Bool))arg2;
- (void)asyncSendAlbumPhotoList:(NSArray *)arg1 withblock:(void (^)(NSArray *, _Bool, _Bool))arg2 presetName:(NSString *)arg3;
- (_Bool)checkPerformace:(QQAssetsGroup *)arg1;
- (ALAssetsLibrary *)defaultAssetsLibrary;
- (void)enumerateALGroupsWithTypes:(unsigned long long)arg1 usingBlock:(void (^)(NSArray *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (_Bool)enumerateAllAsset:(QQAssetsGroup *)arg1 enumerateAssetsUsingBlock:(void (^)(NSArray *))arg2;
- (void)enumerateGroupsWithTypes:(unsigned long long)arg1 fullListBlock:(void (^)(NSArray *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)enumerateGroupsWithTypes:(unsigned long long)arg1 usingBlock:(void (^)(NSArray *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (_Bool)hasRecentAsset:(unsigned long long)arg1;
- (_Bool)isAlbumChanged;
- (_Bool)isCachedAlbum:(QQAssetsGroup *)arg1;
- (_Bool)isCompressing;
- (void)saveALVideoToAlbumWithPath:(NSURL *)arg1 completionBlock:(void (^)(id, NSError *))arg2;
- (void)saveImageToAlbumAndShowTipsWithImage:(UIImage *)arg1;
- (void)saveImageToAlbumWithPath:(NSString *)arg1;
- (void)saveVideoToAlbumWithPath:(NSURL *)arg1 completionBlock:(void (^)(id, NSError *))arg2;
- (NSArray *)syncCacheOriginalImages:(NSArray *)arg1 uuids:(NSArray *)arg2;
- (void)writeImageDataToSavedPhotosAlbum:(NSData *)arg1 metadata:(NSDictionary *)arg2 completionBlock:(void (^)(NSURL *, NSError *))arg3;
- (void)writeImageToSavedPhotosAlbum:(struct CGImage *)arg1 orientation:(long long)arg2 completionBlock:(void (^)(NSURL *, NSError *))arg3;
@end

