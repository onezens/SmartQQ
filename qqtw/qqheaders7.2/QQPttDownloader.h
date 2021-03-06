//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, QQMessageModel;

@interface QQPttDownloader : NSObject
{
    NSMutableDictionary *_downloadItem;
    NSMutableDictionary *_waitForDownloadItem;
    NSMutableDictionary *_streamPttDlItem;
    QQMessageModel *_lastDownloadModel;
    double _lastDownloadTime;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)NotifyError:(id)arg1;
- (void)NotifyFinish:(id)arg1;
- (void)NotifyStart:(id)arg1;
- (void)OnNetReachabilityDidChange:(id)arg1;
- (void)actionGetRegisterFinish;
- (void)addDownloadPttReq:(id)arg1;
- (void)dealloc;
- (void)downloadPtt:(id)arg1;
- (void)downloadPttLocal:(id)arg1 isFromPlanDownload:(_Bool)arg2;
- (int)getDownloadingCount;
- (int)getMaxConcurrentDownload;
- (id)getModelKey:(id)arg1;
- (id)getMsgByUuid:(id)arg1;
- (id)getMsgByUuidFromWaitQueue:(id)arg1;
- (id)getStreamMsgByUuid:(id)arg1;
- (void)handleTransferStateNotification:(id)arg1;
- (id)init;
@property(retain, nonatomic) QQMessageModel *lastDownloadModel; // @synthesize lastDownloadModel=_lastDownloadModel;
@property(nonatomic) double lastDownloadTime; // @synthesize lastDownloadTime=_lastDownloadTime;
- (void)notifyReceiveStreamMsg:(id)arg1;
- (void)planDownLoadPtt;
- (void)recordStreamPttDownload:(id)arg1;
- (void)saveAllAndClean;
- (void)updateDb:(id)arg1;
- (void)updatePttDownload:(id)arg1 downloadSuccess:(_Bool)arg2;
- (void)updateStreamPttDownload:(id)arg1 downloadSuccess:(_Bool)arg2;

@end

