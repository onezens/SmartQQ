//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface QZOCSPluginLoadEngine : NSObject
{
    NSObject<OS_dispatch_queue> *_innerQueue;
    NSObject<OS_dispatch_queue> *_loadQueue;
    NSMutableDictionary *_waitLoadTaskDic;
    double _engineStartTime;
    _Bool _enableOutInvoke;
    NSMutableArray *_waitInvokeBlockArray;
    NSMutableDictionary *_pluginLockObjecDic;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)RDMReportPluginTask:(id)arg1 errorCode:(unsigned long long)arg2 OCSEngineLoadError:(long long)arg3;
- (void)createPluginLoadTag:(id)arg1;
- (void)deleteExpiredOCSPluginsFinished:(id)arg1;
- (id)getOCSPluginLoadTempDir;
- (id)getTempOCSPluginLoadDirById:(id)arg1;
- (id)init;
- (void)invokePlugin:(id)arg1;
- (void)loadOCSPlugin:(id)arg1;
- (_Bool)pluginHasLoad:(id)arg1;
- (void)pluginLoadFinish:(id)arg1 errorCode:(unsigned long long)arg2 ocsFilesPath:(id)arg3 pluginVersion:(id)arg4;
- (void)preLoadPlugin:(id)arg1;
- (void)processPluginPreTask;
- (void)runWaitBlock;
- (void)setUPTimeOutWaitPluginCheck;
- (void)showUpdatePluginViewController:(id)arg1;
- (void)startLoadOCSPlugin:(id)arg1;

@end

