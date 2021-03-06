//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GAMultiThreadObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface GAStorageManager : GAMultiThreadObject
{
    NSMutableArray *_clientKeys;
    NSMutableDictionary *_clientKeyMap;
}

+ (id)createImageKeyWithUrl:(id)arg1 clientKey:(id)arg2 clipper:(id)arg3;
+ (id)createKeyOfWithoutDomainUrl:(id)arg1;
+ (id)instance;
+ (id)keyForUrlWithoutDomain:(id)arg1;
+ (id)keyForUrlWithoutPoundSign:(id)arg1;
+ (id)md5FromString:(id)arg1;
+ (id)urlWithoutDomainNorPoundSign:(id)arg1;
+ (id)urlWithoutPoundSign:(id)arg1;
- (void).cxx_destruct;
- (id)downloadFileNameForURL:(id)arg1 clientKey:(id)arg2;
- (id)fileNameForUrl:(id)arg1 clientKey:(id)arg2;
- (id)fileNameForUrlDownload:(id)arg1 clientKey:(id)arg2;
- (id)fileNameForVideoClientKey:(id)arg1;
- (id)fileNameForVideoUrl:(id)arg1;
- (id)filePathForUrl:(id)arg1;
- (_Bool)imageExistForUrl:(id)arg1 clientKey:(id)arg2 clipper:(id)arg3;
- (_Bool)imageFileExistForUrl:(id)arg1 clientKey:(id)arg2;
- (id)imageForUrl:(id)arg1 clientKey:(id)arg2 clipper:(id)arg3;
- (id)imageFromMemForUrl:(id)arg1 clientKey:(id)arg2 clipper:(id)arg3;
- (id)init;
- (void)linkUrl:(id)arg1 toLocalPath:(id)arg2;
- (struct CGSize)originalSizeOfImageForUrl:(id)arg1 clientKey:(id)arg2 clipper:(id)arg3;
- (void)removeMemoryForUrl:(id)arg1 clientKey:(id)arg2 clipper:(id)arg3;
- (void)replaceClientKey:(id)arg1 localPath:(id)arg2 param:(id)arg3;
- (void)saveClientKey:(id)arg1 localPath:(id)arg2;
- (void)saveClientKey:(id)arg1 urls:(id)arg2;
- (void)saveImageToMem:(id)arg1 url:(id)arg2 clientKey:(id)arg3 clipper:(id)arg4;
- (_Bool)saveVideoClientKeyAndLocalUrl:(id)arg1 localPath:(id)arg2;
- (_Bool)saveVideoClientKeyAndNetUrl:(id)arg1 url:(id)arg2;

@end

