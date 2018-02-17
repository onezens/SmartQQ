//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BDHUploadDelegate.h"
#import "IHttpStateDelegate.h"
#import "IRichMediaDownloadDelegate.h"

@class NSMutableArray, NSString;

@interface RichMediaPBTransferManager : NSObject <IHttpStateDelegate, BDHUploadDelegate, IRichMediaDownloadDelegate>
{
    NSMutableArray *_uploadReqs;
    NSMutableArray *_uploadHttps;
    NSMutableArray *_downloadReqs;
    NSMutableArray *_downloadHttps;
}

+ (id)getInstance;
- (void)cancelAllDownloadRequests;
- (void)cancelAllUploadRequests;
- (void)cancelPBFileDownload:(int)arg1;
- (void)cancelPBFileUpload:(int)arg1;
- (void)changeAccount:(id)arg1;
- (void)dealloc;
- (void)downloadPBFile:(id)arg1;
- (void)generateHttpUploadReqData:(id)arg1 useBHD:(_Bool)arg2;
- (int)getDownloadCout;
- (id)getDownloadReqWithHttpSessionId:(int)arg1;
- (id)getDownloadReqWithSeq:(int)arg1;
- (id)getUploadReqWithHttpSessionId:(int)arg1;
- (id)getUploadReqWithSeq:(int)arg1;
- (void)handlSendDownloadReq:(id)arg1;
- (void)handlSendUploadReq:(id)arg1;
- (_Bool)handleDownloadResp:(id)arg1 req:(id)arg2;
- (_Bool)handleUploadResp:(id)arg1 req:(id)arg2;
- (id)init;
- (_Bool)isRichMediaPBFileDownloading:(id)arg1;
- (_Bool)isUploadAndDownloadRetry:(int)arg1;
- (void)notifyBDHCancel:(long long)arg1 uploadDetail:(id)arg2;
- (void)notifyBDHFail:(long long)arg1 uploadDetail:(id)arg2 fail:(id)arg3;
- (void)notifyBDHSuccess:(long long)arg1 uploadDetail:(id)arg2;
- (void)notifyPBFileDownloadReqResult:(_Bool)arg1 seq:(int)arg2 error:(id)arg3 resp:(id)arg4;
- (void)notifyPBFileUploadReqResult:(_Bool)arg1 seq:(int)arg2 error:(id)arg3 resp:(id)arg4;
- (void)onDownloadFail:(id)arg1 error:(id)arg2;
- (void)onDownloadSuccess:(id)arg1;
- (void)onForceOffLineNotify;
- (void)onHttpDownloadSuccess:(int)arg1 receivedData:(id)arg2;
- (void)onHttpState:(int)arg1 transferType:(int)arg2 success:(_Bool)arg3 error:(id)arg4 isUnifiedDownloader:(_Bool)arg5;
- (_Bool)parsePBFile:(id)arg1 receivedData:(id)arg2;
- (void)retrySendPBFileDownloadReq:(id)arg1;
- (void)retrySendPBFileUploadReq:(id)arg1;
- (int)sendPBFileDownloadReq:(id)arg1;
- (int)sendPBFileUploadReq:(id)arg1;
- (void)updatePBFileDownloadState:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)updatePBFileUploadSate:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)uploadPBFile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

