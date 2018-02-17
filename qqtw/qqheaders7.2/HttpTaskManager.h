//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface HttpTaskManager : NSObject
{
    NSMutableArray *_uploadTaskQueue;
    NSMutableArray *_downloadObjQueue;
    NSMutableArray *_downloadTaskQueue;
    int _httpSessionId;
}

+ (id)getInstance;
- (void)dealloc;
- (id)getDownloadObj:(int)arg1;
- (float)getDownloadProcess:(int)arg1;
- (id)getDownloadTask:(int)arg1;
- (int)getHttpSessiontId;
- (float)getPicDownloadProcess:(int)arg1;
- (id)getPrintUrl:(id)arg1;
- (id)getUploadObj:(int)arg1;
- (float)getUploadProcess:(int)arg1;
- (id)init;
- (void)loopPlanDownloadTask;
- (void)loopPlanUploadTask;
- (void)notifyDownloadTaskFinish;
- (void)notifyUploadTaskFinish;
- (void)removeDownloadObj:(int)arg1;
- (void)removeDownloadTask:(int)arg1;
- (void)removeUploadObj:(int)arg1;
- (int)startC2CPicUploadByBDH:(id)arg1 uKey:(id)arg2 delegate:(id)arg3;
- (int)startC2CPttDownloadTask:(id)arg1 downloadUrl:(id)arg2 delegate:(id)arg3;
- (int)startC2CPttDownloadTaskByJKImage:(id)arg1 downloadUrl:(id)arg2 delegate:(id)arg3;
- (int)startC2CPttUploadByBDH:(id)arg1 extendinfo:(id)arg2 delegate:(id)arg3;
- (int)startC2CPttUploadTask:(id)arg1 uploadUrls:(id)arg2 delegate:(id)arg3;
- (int)startGroupPicUploadByBDH:(id)arg1 uKey:(id)arg2 delegate:(id)arg3;
- (int)startGroupPicUploadTask:(id)arg1 uploadUrls:(id)arg2 delegate:(id)arg3;
- (int)startGroupPttDownloadTask:(id)arg1 downloadUrl:(id)arg2 delegate:(id)arg3;
- (int)startGroupPttDownloadTaskByJKImage:(id)arg1 downloadUrl:(id)arg2 delegate:(id)arg3;
- (int)startGroupPttUploadByBDH:(id)arg1 extendinfo:(id)arg2 delegate:(id)arg3;
- (int)startHTMLPicUploadByBDH:(id)arg1 uKey:(id)arg2 delegate:(id)arg3;
- (int)startPAJSSdkPttUploadByBDH:(id)arg1 extendinfo:(id)arg2 delegate:(id)arg3;
- (int)startPBLongMsgFileDownloadTask:(id)arg1 downloadUrls:(id)arg2 delegate:(id)arg3;
- (int)startPBPttDownloadTask:(id)arg1 downloadUrl:(id)arg2 delegate:(id)arg3;
- (int)startPicDownloadTask:(id)arg1 downloadUrlSource:(int)arg2 downloadUrls:(id)arg3 delegate:(id)arg4;
- (int)startPicDownloadTaskByPDTask:(id)arg1 downloadUrlSource:(int)arg2 downloadUrls:(id)arg3 delegate:(id)arg4;
- (int)startPttDownloadTask:(id)arg1 uuid:(id)arg2 downloadUrl:(id)arg3 delegate:(id)arg4;
- (int)startPttDownloadTaskByJKImage:(id)arg1 uuid:(id)arg2 downloadUrl:(id)arg3 delegate:(id)arg4;
- (int)startRichMediaPBFileDownloadTask:(id)arg1 downloadUrls:(id)arg2 delegate:(id)arg3;
- (int)startRichMediaPBFileDownloadTaskByJKImage:(id)arg1 downloadUrls:(id)arg2 delegate:(id)arg3;
- (int)startRichMediaPBFileUploadTask:(id)arg1 uploadUrls:(id)arg2 delegate:(id)arg3;
- (int)startRichMediaPBFileUploadTaskByBDH:(id)arg1 delegate:(id)arg2;
- (int)startSVideoDownloadTask:(id)arg1 downloadUrl:(id)arg2 encryptKey:(id)arg3 delegate:(id)arg4;
- (int)startSVideoDownloadTaskByJKImage:(id)arg1 downloadUrl:(id)arg2 encryptKey:(id)arg3 delegate:(id)arg4;
- (int)startSVideoUploadByBDH:(id)arg1 uKey:(id)arg2 sessionKey:(id)arg3 delegate:(id)arg4;
- (int)startSVideoUploadTask:(id)arg1 uploadUrls:(id)arg2 delegate:(id)arg3;

@end

