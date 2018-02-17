//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TVKLiteURLCacheManager : NSObject
{
    unsigned long long _maxCacheFileSize;
}

+ (id)sharedInstance;
- (void)cleanAllInfo;
- (long long)getCurrentCacheFileSize;
- (double)getCurrentSystemTime;
- (id)getDefsForFileID:(id)arg1;
- (id)getDirectoryDataPath;
- (id)getTimesForFileID:(id)arg1;
- (id)getUrlsForFileID:(id)arg1;
- (id)init;
@property(nonatomic) unsigned long long maxCacheFileSize; // @synthesize maxCacheFileSize=_maxCacheFileSize;
- (void)setUrlInfoForFileID:(id)arg1 Urls:(id)arg2 Defs:(id)arg3 Times:(id)arg4;
- (void)updateAllInfo;

@end

