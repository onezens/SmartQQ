//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FileAssistantDownloadTransfer.h"

@class NSString;

@interface FAXPDownloadTransfer : FileAssistantDownloadTransfer
{
    struct FAXPHttpDownTask *_downTask;
    int _chnType;
    _Bool _exploreFlag;
    NSString *_fileName;
    _Bool _isRunning;
}

- (_Bool)attachHttpClient:(int)arg1;
- (void)cancelDownload;
@property(nonatomic) int chnType; // @synthesize chnType=_chnType;
- (void)dealloc;
- (_Bool)defaultAttachHttpClient;
@property(nonatomic) _Bool exploreFlag; // @synthesize exploreFlag=_exploreFlag;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (unsigned long long)getChannelTaskLogID;
- (id)initForGetFile:(id)arg1 filePath:(id)arg2 downloadUrl:(id)arg3 fileName:(id)arg4;
- (id)initForGetJson:(id)arg1 exploreFlag:(_Bool)arg2;
- (id)initForHeartBeats:(id)arg1;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
- (void)onComplete:(int)arg1;
- (void)onGetJsonComplete:(int)arg1 data:(id)arg2;
- (void)onRecvHello:(int)arg1;
- (void)startDownload;

@end

