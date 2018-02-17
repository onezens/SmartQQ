//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QMFileManager : NSObject
{
    NSString *documentDirectory_;
    NSString *rootDirectory_;
    _Bool _v1DataExist;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (void)checkBasicFilesToRootDirectory;
- (void)clearMapDataCache;
- (id)configDirectory;
- (void)copyItemAtPath:(id)arg1 toPath:(id)arg2;
@property(copy, nonatomic) NSString *documentDirectory; // @synthesize documentDirectory=documentDirectory_;
- (id)downloadDirectory;
- (id)init;
- (id)lbsCachePath;
- (void)makeDirectoryExist:(id)arg1;
- (void)removeOldData;
@property(copy, nonatomic) NSString *rootDirectory; // @synthesize rootDirectory=rootDirectory_;
@property(nonatomic) _Bool v1DataExist; // @synthesize v1DataExist=_v1DataExist;
- (id)userDirectory;
- (id)v1Directory;
- (id)verifyLBSCachePath;
- (id)versionDirectory;

@end
