//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSLock, NSMutableArray, NSOperationQueue, NSString;

@interface QQLogger : NSObject <UIAlertViewDelegate>
{
    int _logLevel;
    NSOperationQueue *_logSaveQueue;
    NSOperationQueue *_logFileQueue;
    NSMutableArray *_cacheLogInfoArray;
    struct __sFILE *_fileHandle;
    NSLock *_fileHandleLock;
    char *_curLogFileDate;
    int _logSeq;
    _Bool _isFlushingLog;
    char _fileBuffer[16384];
    id <QQAsyncGetLogResultDelegate> _asyncGetLogResultDelegate;
    struct LoggerInfoFreeList _freelist;
    struct tm _createLogTMBJ;
    int autoUploadLogHour;
    NSMutableArray *_needZipFile;
    _Bool _isFirstEnter;
    long long _sizeLimit;
    NSString *_logFilePath;
}

+ (id)GetInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_alertVcCancelAction:(id)arg1;
- (void)_alertVcConfirmAction:(id)arg1;
- (void)addCheckLogFileOperation;
- (_Bool)addOneCLog:(int)arg1 inFile:(const char *)arg2 inLine:(unsigned int)arg3 moduleName:(const char *)arg4 actionName:(const char *)arg5 withLogContent:(char *)arg6;
- (_Bool)addOneLogInternal:(int)arg1 inFile:(const char *)arg2 inLine:(unsigned int)arg3 moduleName:(const char *)arg4 actionName:(const char *)arg5 withLogContent:(char *)arg6;
- (void)addOneLoginInfo:(id)arg1;
- (_Bool)addOneMessageLog:(int)arg1 inFile:(const char *)arg2 inLine:(unsigned int)arg3 seq:(int)arg4 serviceCmd:(id)arg5 msgSeq:(long long)arg6 senderUin:(id)arg7 recvUin:(id)arg8 withLogContent:(char *)arg9;
- (void)addSaveLogsOperation:(id)arg1;
- (void)addUploadLogFileOperation:(long long)arg1 type:(int)arg2 bgnTime:(struct tm)arg3 endTime:(struct tm)arg4 additionalInfo:(id)arg5;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)asyncGetLog:(id)arg1 timePoint:(id)arg2 beginTime:(struct tm *)arg3 endTime:(struct tm *)arg4;
- (void)asyncGetLog:(id)arg1 timePoint:(id)arg2 span:(int)arg3;
- (void)asyncGetLog:(id)arg1 timePoint:(id)arg2 time:(struct tm *)arg3 span:(int)arg4;
- (void)checkLogFile;
- (void)checkLogFilePathAvailable;
- (void)checkLogUploadOnCrash;
- (void)checkLogUploadOnUserFeedback;
- (void)checkLogUploadOnVipScreenShort;
- (void)clearLogBeforeTodayWithNotification:(_Bool)arg1;
- (void)createLogFile;
- (void)dealloc;
- (void)doNotifyPackLogResult:(id)arg1;
- (void)flushLog:(_Bool)arg1;
- (void)getCurDateString:(char *)arg1;
- (void)getLogImpl:(id)arg1;
- (id)getLogLevel;
- (id)getLogWithbeginTime:(struct tm)arg1 endTime:(struct tm)arg2;
- (void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleRemoteNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
@property(retain) NSString *logFilePath; // @synthesize logFilePath=_logFilePath;
@property(nonatomic, setter=setLogLevel:) int logLevel; // @synthesize logLevel=_logLevel;
- (void)printLog:(id)arg1;
- (void)processCheckLogFile:(id)arg1;
- (void)processClearLogBeforeTodayWithNotification:(id)arg1;
- (void)readFile:(struct __sFILE *)arg1 DateStr:(id)arg2 toData:(id)arg3 lineNum:(int *)arg4 beginHour:(int)arg5 beginMin:(int)arg6 endHour:(int)arg7 endMin:(int)arg8;
- (void)readOneDayLog:(id)arg1 logSize:(int *)arg2 paramDic:(id)arg3 withArchive:(id)arg4;
- (void)saveAndFflushLog;
- (void)saveCachedLogInfos;
- (void)saveOneLog:(id)arg1;
- (void)searchQQLog:(int *)arg1 withdateStr:(id)arg2 archive:(id)arg3 paramDic:(id)arg4;
- (void)setLogLevelIndeed:(int)arg1;
- (void)showAlert:(id)arg1;
- (void)traverseAndZip;
- (void)updateLogLevel;
- (void)uploadLog:(long long)arg1 type:(int)arg2 bgnTime:(struct tm)arg3 endTime:(struct tm)arg4 additionalInfo:(id)arg5;
- (void)uploadLogFile:(id)arg1;
- (_Bool)uploadLogFileImpl:(id)arg1 logSize:(int *)arg2 withArchive:(id)arg3;
- (void)uploadVideoLog:(unsigned long long)arg1:(const char *)arg2:(long long)arg3;
- (void)zipAllFile;
- (_Bool)zipOneHourFile:(id)arg1;
- (_Bool)zipOtherHourFile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

