//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface QQMutiplePicDownloader : NSObject
{
    NSMutableArray *_messageModelArray;
    NSMutableArray *_modifiedMessageModelArray;
    NSMutableArray *_succeedDownloadList;
    NSMutableArray *_failedDownloadList;
    CDUnknownBlockType _completion;
    long long _callBackType;
    double _timeOutInterval;
}

- (void).cxx_destruct;
@property(nonatomic) long long callBackType; // @synthesize callBackType=_callBackType;
- (void)callCompletion:(long long)arg1;
- (void)dealloc;
- (void)downloadPicsByMessageModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadTimeOut;
- (id)getMessageModelByUUID:(id)arg1;
- (void)handleDownloadImagesStateNotification:(id)arg1;
- (id)init;
- (void)putLeftMessageModelIntoFailedDownloadList;
- (void)setTimeOutByDownloadCount:(long long)arg1;
@property(nonatomic) double timeOutInterval; // @synthesize timeOutInterval=_timeOutInterval;
- (void)stopDownload;

@end

