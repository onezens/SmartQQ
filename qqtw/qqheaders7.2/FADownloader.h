//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FADownDoEndDelegate.h"
#import "FADownHttpDelegate.h"
#import "FADownRequestDelegate.h"

@class FADownDoEndC2C, FADownHttp, FADownRequest, FATaskInfoDownload, NSString;

@interface FADownloader : NSObject <FADownRequestDelegate, FADownHttpDelegate, FADownDoEndDelegate>
{
    int _logId;
    FATaskInfoDownload *_fileInfo;
    id <FADownloadDelegate> _delegate;
    FADownRequest *_filedownRequest;
    FADownHttp *_filedownHttp;
    FADownDoEndC2C *_filedownDoEnd;
    _Bool _isRetryReqUrl;
    int _xo;
}

- (void)OnDoEndResult:(_Bool)arg1;
- (void)OnHttpProgress:(id)arg1;
- (void)OnHttpResult:(_Bool)arg1 isInvalidUrl:(_Bool)arg2 info:(id)arg3;
- (void)OnRequestResult:(_Bool)arg1 tmpName:(id)arg2 url:(id)arg3 info:(id)arg4;
- (void)OnThumbnailDone:(id)arg1;
- (void)OnThumbnailHttpFail:(id)arg1;
- (void)OnThumbnailProgress:(id)arg1 progress:(double)arg2;
- (void)OnThumbnailRequestFail:(id)arg1;
- (void)cancel;
- (void)cancelWithNotifyFailCode:(int)arg1 errMsg:(id)arg2;
- (void)createComponent;
- (void)dealloc;
- (id)init:(id)arg1;
- (void)retryReqUrl;
- (void)start:(id)arg1;
- (void)stop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) FATaskInfoDownload *fileInfo; // @dynamic fileInfo;
@property(retain, nonatomic) FADownDoEndC2C *filedownDoEnd; // @dynamic filedownDoEnd;
@property(retain, nonatomic) FADownHttp *filedownHttp; // @dynamic filedownHttp;
@property(retain, nonatomic) FADownRequest *filedownRequest; // @dynamic filedownRequest;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

