//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DownloadTmpFileInfo : NSObject
{
    int _networkStatus;
    NSString *_tmpFilePath;
    long long _tmpFileSize;
    long long _totalFileSize;
}

+ (id)existingDownloadTmpFileInfo:(id)arg1;
- (void).cxx_destruct;
- (float)downloadProgress;
- (id)initWithPath:(id)arg1 andTotalFileSize:(long long)arg2 andNetWorkStatus:(int)arg3;
- (void)moveToPath:(id)arg1 error:(id *)arg2;
@property(nonatomic) int networkStatus; // @synthesize networkStatus=_networkStatus;
- (id)removeTmpFile;
@property(retain, nonatomic) NSString *tmpFilePath; // @synthesize tmpFilePath=_tmpFilePath;
@property(nonatomic) long long tmpFileSize; // @synthesize tmpFileSize=_tmpFileSize;
@property(nonatomic) long long totalFileSize; // @synthesize totalFileSize=_totalFileSize;

@end

