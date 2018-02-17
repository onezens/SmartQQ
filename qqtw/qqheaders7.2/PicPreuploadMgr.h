//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, PicPreuploadConfig;

@interface PicPreuploadMgr : NSObject
{
    _Bool _enablePreupload;
    _Bool _enablePrecompress;
    long long _limitReason;
    long long _uin;
    int _xo;
    NSMutableDictionary *_picInfoDict;
    PicPreuploadConfig *_preuploadConfig;
    int _maxPreuploadFiles;
    long long _maxPreuploadBytes;
    int _maxConcurrentCount;
    int _pauseUploadThresold;
    long long _chatType;
    NSMutableDictionary *_wasteFlowDict;
    _Bool _hasSelPic;
    _Bool _currentEnableUpload;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)OnNetReachabilityDidChange:(id)arg1;
- (_Bool)beyondQuota;
- (void)calcWasteStat:(long long)arg1 uploadBytes:(long long)arg2 picNum:(int)arg3;
- (_Bool)canSendMessage;
- (void)cancelAllUploadedPic:(long long)arg1;
- (void)cancelUploadedPic:(id)arg1 cancelType:(long long)arg2;
- (void)changeAccount:(id)arg1;
- (void)dealloc;
- (_Bool)doUploadPicByOrgStyle:(id)arg1 bodyType:(int)arg2 aioDelegate:(id)arg3;
@property(nonatomic) _Bool enablePrecompress; // @dynamic enablePrecompress;
@property(nonatomic) _Bool enablePreupload; // @dynamic enablePreupload;
- (void)enterPreupload;
- (void)getConfigInfo;
- (id)init;
- (void)internalCancelAllUploadedPic:(long long)arg1;
- (void)internalCancelUploadedPic:(id)arg1 cancelType:(long long)arg2;
- (_Bool)internalExecTask:(id)arg1;
- (void)internalRemoveAllUploadedPic:(long long)arg1;
- (void)internalSendPicMessage:(id)arg1;
- (void)internalSendPreuploadMessage:(id)arg1 netStatus:(int)arg2;
- (void)internalStopTask:(id)arg1 cancelType:(long long)arg2 forceStop:(_Bool)arg3;
- (void)internalUpdatePicUploadReqInfo:(id)arg1;
- (void)internalUpdatePicUploadState:(id)arg1 uploadResult:(_Bool)arg2 secondTrans:(_Bool)arg3 error:(id)arg4 fileResid:(id)arg5 oldUuid:(id)arg6;
- (_Bool)internalUploadPic:(id)arg1 picInfo:(id)arg2 bodyType:(int)arg3 aioDelegate:(id)arg4;
- (void)leavePreupload;
- (void)loadConfig;
- (float)minProgress;
- (void)networkDidChange;
- (void)onForceOffLineNotify;
- (void)parseConfig;
- (void)removeAllUploadedPic:(long long)arg1;
- (void)reportStat;
- (int)runningTaskNum;
- (void)sendPicMessage:(id)arg1;
- (void)setDefaultProp;
- (void)setMaxConcurrentCount:(int)arg1;
- (void)setMaxPreuploadBytes:(long long)arg1;
- (void)setMaxPreuploadFiles:(int)arg1;
- (void)setPauseUploadThresold:(int)arg1;
- (void)updateDpcConfig:(id)arg1;
- (void)updatePicUploadReqInfo:(id)arg1;
- (void)updatePicUploadState:(id)arg1 uploadResult:(_Bool)arg2 secondTrans:(_Bool)arg3 error:(id)arg4 fileResid:(id)arg5 oldUuid:(id)arg6;
- (void)updatePreuploadConfig;
- (void)uploadPic:(id)arg1 picInfo:(id)arg2 bodyType:(int)arg3 chatType:(long long)arg4 aioDelegate:(id)arg5;

// Remaining properties
@property(nonatomic) long long limitReason; // @dynamic limitReason;

@end

