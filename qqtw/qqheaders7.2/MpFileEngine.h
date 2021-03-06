//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FileAssistantDownloadTransferDelegate.h"

@class FAXPDownloadTransfer, NSMutableDictionary, NSMutableString, NSString, NSTimer;

@interface MpFileEngine : NSObject <FileAssistantDownloadTransferDelegate>
{
    unsigned int _ip;
    unsigned short _port;
    NSTimer *_msgTimer;
    unsigned long long _sessionid;
    NSString *_downloadfileIDafterReconnect;
    NSMutableDictionary *_connectInfo;
    _Bool _connected;
    NSMutableDictionary *_sysdatasource;
    NSMutableDictionary *_subdatasource;
    NSMutableDictionary *_fileitems;
    NSMutableDictionary *_filemodels;
    NSMutableDictionary *_getJsonTransfers;
    NSMutableDictionary *_thumbtransfers;
    NSMutableDictionary *_origintransfers;
    struct CMPBranchChannelMgr *_mpBranchEngine;
    int _selectedChannel;
    _Bool _isRelayConnectFail;
    _Bool _isLanConnectFail;
    _Bool _isLanReverseConnectFail;
    _Bool _isPCSupportRelay;
    FAXPDownloadTransfer *_heartTask;
    _Bool _isDelayDisconnect;
    unsigned int _reverseListenIP;
    unsigned short _reverseListenPort;
    _Bool _isReverseEngineStarting;
    int _thumbnailDownloadingCount;
    int _originalFileDownloadingCount;
    long long lastMsgCmd;
    NSMutableString *_challengeRandom;
    NSMutableString *_challengePWD;
    NSMutableString *_confirmedPWD;
    double _lastTimePwdUsed;
}

+ (id)GetInstance;
- (void)CancelFileTask:(id)arg1 isThumb:(_Bool)arg2;
- (void)CancelJsonTask:(id)arg1;
- (void)CancelResumeTask;
- (void)CheckFile:(id)arg1;
- (void)DetachRelayHttpClient:(struct IHttpClient *)arg1;
- (void)DoDownloadFile:(id)arg1 isThumb:(_Bool)arg2;
- (void)DoFetchFileList:(id)arg1 chnType:(int)arg2;
- (void)DownloadFile:(id)arg1 isThumb:(_Bool)arg2;
- (void)FetchFileList:(id)arg1;
- (void)FileAssistantDownloadTransfer:(id)arg1 curTransSize:(long long)arg2 totalTransSize:(long long)arg3;
- (void)FileAssistantDownloadTransfer:(id)arg1 didFinished:(int)arg2;
- (void)FileAssistantDownloadTransferDidRecviveFirstData:(id)arg1;
- (void)FileAssistantGetJsonComplete:(id)arg1 success:(_Bool)arg2 data:(id)arg3;
- (void)FileAssistantOnRecvHello:(id)arg1 code:(int)arg2;
- (id)GetDownloadFilePath:(id)arg1 isThumb:(_Bool)arg2;
- (id)GetDownloadTempFilePath:(id)arg1 isThumb:(_Bool)arg2;
- (id)GetDownloadUrl:(id)arg1 isThumb:(_Bool)arg2;
- (id)GetFAModel:(id)arg1;
- (id)GetFileList:(id)arg1;
- (struct IHttpClient *)GetRelayHttpClient;
- (struct CXPIReverseTcpSocketCreater *)GetReverseTcpSocketCreater;
- (void)InvokeReportConnection:(id)arg1 result:(int)arg2 fileCount:(int)arg3;
- (void)OnDownloadFileComplete:(id)arg1 isThumb:(_Bool)arg2 resultCode:(int)arg3;
- (void)OnDownloadFileProgress:(id)arg1 isThumb:(_Bool)arg2 totalBytes:(long long)arg3 totalBytesExpected:(long long)arg4;
- (void)OnDownloadFileStart:(id)arg1;
- (void)OnMessageReply:(id)arg1 SessionID:(unsigned long long)arg2;
- (_Bool)OnNetReachabilityDidChange:(id)arg1;
- (void)OnPCOffline:(id)arg1;
- (void)OnRelayChnReady:(unsigned int)arg1 isSuc:(_Bool)arg2;
- (void)StopDownloadFile:(id)arg1 isThumb:(_Bool)arg2;
- (void)StopFileTask:(id)arg1 isThumb:(_Bool)arg2;
- (_Bool)changeMpPwd;
- (void)checkLocalPwd:(id)arg1;
- (_Bool)connect:(long long)arg1 fileid:(id)arg2;
- (void)dealloc;
- (void)delayRemoveTask;
- (void)disconnect;
- (void)disconnectImmediately;
- (id)getChallengePWD;
- (id)getChallengeRandom;
- (id)getConfirmedPWD;
- (int)getConnectChnType;
- (void)getReverseChnListenIP:(unsigned int *)arg1 Port:(unsigned short *)arg2;
- (id)init;
- (_Bool)isConnected;
- (_Bool)isLastPwdKeepAlive;
- (_Bool)isPCSupportRelayChannel;
@property(readonly, nonatomic, getter=isPCSupportViewFile) _Bool pcSupportViewFile;
- (_Bool)isReverseEngineStarted;
- (void)onChannelConnected:(_Bool)arg1;
- (void)onChannelExplore:(int)arg1 Result:(_Bool)arg2 Data:(id)arg3 FileID:(id)arg4 IpPort:(id)arg5;
- (void)onCheckFile:(id)arg1 isSuccess:(_Bool)arg2 data:(id)arg3;
- (void)onFetchList:(id)arg1 success:(_Bool)arg2 fileid:(id)arg3 ipandport:(id)arg4;
- (void)onMessageTimeout:(id)arg1;
- (void)onReverseChannelConnected:(_Bool)arg1;
- (void)onReverseServertStarted:(unsigned int)arg1 Port:(unsigned short)arg2;
- (void)openRelayRoom:(id)arg1;
- (void)reConnectForDownloadFile:(id)arg1 FromAuth:(_Bool)arg2;
- (_Bool)reFetchFileList:(id)arg1 FromAuth:(_Bool)arg2;
- (_Bool)sendMessage:(long long)arg1;
- (void)startDownloadTask:(_Bool)arg1;
- (void)startHeartBeats;
- (void)stopReverseChannel;
- (void)verifyMpPwd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

