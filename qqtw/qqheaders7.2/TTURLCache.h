//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;

@interface TTURLCache : NSObject
{
    NSString *_cachePath;
    NSMutableDictionary *_imageCache;
    NSMutableDictionary *_gifCache;
    NSMutableArray *_imageSortedList;
    unsigned long long _totalPixelCount;
    unsigned long long _maxPixelCount;
    long long _totalLoading;
    double _invalidationAge;
    _Bool _disableDiskCache;
    _Bool _disableImageCache;
    _Bool chagePath;
    NSRecursiveLock *_threadLock;
    int _xo;
}

+ (id)defaultCachePath;
+ (id)defaultFaceCachePath;
+ (id)sharedCache;
- (id)GetDataPathFromDisk:(id)arg1;
- (id)GetDataPathFromDiskWithKey:(id)arg1;
- (void)SYmoveDataForURL:(id)arg1 toURL:(id)arg2;
- (id)cacheMusicPathForURL:(id)arg1 type:(id)arg2;
- (id)cachePathForKey:(id)arg1;
- (id)cachePathForURL:(id)arg1;
- (id)createTemporaryURL;
- (id)dataForKey:(id)arg1 expires:(double)arg2 timestamp:(id *)arg3;
- (id)dataForURL:(id)arg1;
- (id)dataForURL:(id)arg1 expires:(double)arg2 timestamp:(id *)arg3;
- (void)dealloc;
- (void)expireImagesFromMemory;
- (_Bool)hasDataForURL:(id)arg1;
- (_Bool)hasImageForURL:(id)arg1;
- (_Bool)hasImageForURLCacheFlag:(id)arg1;
- (id)imageForKey:(id)arg1;
- (id)imageForURL:(id)arg1;
- (id)init;
- (id)keyForURL:(id)arg1;
- (id)keyForUrlWithoutDomain:(id)arg1;
@property unsigned long long maxPixelCount; // @synthesize maxPixelCount=_maxPixelCount;
- (void)moveDataForURL:(id)arg1 toURL:(id)arg2;
- (void)removeAll:(_Bool)arg1;
- (void)removeKey:(id)arg1 fromDisk:(_Bool)arg2;
- (void)removeURL:(id)arg1 fromDisk:(_Bool)arg2;
- (void)storeAVImage:(id)arg1 forURL:(id)arg2;
- (void)storeData:(id)arg1 forKey:(id)arg2;
- (void)storeData:(id)arg1 forURL:(id)arg2;
- (void)storeImage:(id)arg1 forKey:(id)arg2;
- (void)storeImage:(id)arg1 forKey:(id)arg2 force:(_Bool)arg3;
- (void)storeImage:(id)arg1 forURL:(id)arg2;
- (_Bool)storeMusic:(id)arg1 type:(id)arg2 forKey:(id)arg3;
- (_Bool)storeMusic:(id)arg1 type:(id)arg2 forURL:(id)arg3;
- (id)storeTemporaryImage:(id)arg1 toDisk:(_Bool)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *cachePath; // @dynamic cachePath;
@property(nonatomic) _Bool disableDiskCache; // @dynamic disableDiskCache;
@property(nonatomic) _Bool disableImageCache; // @dynamic disableImageCache;
@property(nonatomic) double invalidationAge; // @dynamic invalidationAge;

@end
