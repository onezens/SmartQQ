//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMSFDelegate.h"
#import "IPacketDispatchService.h"

@class BlueTaskThread, NSMutableDictionary, NSRecursiveLock, NSString, QQLockDictionary;

@interface QPacketDispatchService : NSObject <IPacketDispatchService, IMSFDelegate>
{
    NSMutableDictionary *_packetDispatchDelegateDicWithSeq;
    NSMutableDictionary *_packetDispatchDelegateDic;
    id <IMSFDelegate> _defaultDispatchDelegate;
    NSRecursiveLock *_dicWithSeqLock;
    NSRecursiveLock *_dicLock;
    QQLockDictionary *_serialQueueDispatchDic;
    BlueTaskThread *_thread;
}

+ (id)getInstance;
- (void)CancelMSFPacket:(long long)arg1;
- (void)OnMSFApnState:(id)arg1;
- (void)OnMSFBackgroundNetworkState:(id)arg1;
- (void)OnMSFIllegalGrayApp:(id)arg1;
- (void)OnMSFMsg:(id)arg1;
- (void)OnMSFNetworkState:(id)arg1;
- (void)OnMSFPacketState:(id)arg1;
- (void)OnMSFRecvDataFromBackend:(const char *)arg1 buf:(char *)arg2 bufLen:(int)arg3 seq:(int)arg4;
- (void)OnMSFSSOErrorStateResult:(id)arg1;
- (void)OnMSFSocketFlow:(id)arg1;
- (void)ProcessMSFPacketState:(id)arg1;
- (_Bool)SendMSFPacket:(id)arg1 retSeq:(int *)arg2;
- (_Bool)SendMSFPacketWithUin:(id)arg1 retSeq:(int *)arg2;
- (_Bool)SendMSFPacketWithoutSigCheck:(id)arg1 retSeq:(int *)arg2;
- (void)accountLogoutBeforeClearUin;
- (void)clearTaskThread;
- (void)dealloc;
- (void)didAccountLogoutBeforeClearUin;
- (id)getIPArrayForDomain:(id)arg1;
- (id)getIPOnlyArrayForDomain:(id)arg1;
- (int)getSeq;
- (void)handleMSFRecvDataFromBackendNotify:(id)arg1;
- (id)init;
- (void)initSerialQueueData;
- (_Bool)onFailedSSODNSDomain:(id)arg1 andIP:(id)arg2;
- (void)onHTTPStatus:(id)arg1;
- (void)onMSFServerTimeUpdated:(id)arg1;
- (void)performDispatchBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
- (void)performDispatchOnMainThread:(CDUnknownBlockType)arg1;
- (void)performDispatchOnSerialQueue:(CDUnknownBlockType)arg1;
- (_Bool)preSendWupBuffer:(int *)arg1;
- (void)processMSFRecvDataFromBackend:(id)arg1;
- (void)registeSerialQueueDispatch:(const char *)arg1;
- (_Bool)registerDispatchDelegate:(id)arg1 dispatchDelegate:(id)arg2;
- (void)reportSSODNSWithDict:(id)arg1;
- (_Bool)resendWupBuffer:(char *)arg1 cmd:(id)arg2 resendSeq:(int)arg3 immediately:(_Bool)arg4;
- (_Bool)resendWupBuffer:(char *)arg1 cmd:(id)arg2 resendSeq:(int)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5;
- (_Bool)resendWupBuffer:(char *)arg1 cmd:(id)arg2 resendSeq:(int)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5 answerFlag:(BOOL)arg6;
- (_Bool)sendPacket:(id)arg1 seq:(int *)arg2;
- (_Bool)sendWupBuffer:(char *)arg1 cmd:(id)arg2 seq:(int *)arg3 immediately:(_Bool)arg4;
- (_Bool)sendWupBuffer:(char *)arg1 cmd:(id)arg2 seq:(int *)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5;
- (_Bool)sendWupBuffer:(char *)arg1 cmd:(id)arg2 seq:(int *)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5 answerFlag:(BOOL)arg6;
- (_Bool)sendWupBufferBase:(char *)arg1 cmd:(id)arg2 seq:(int *)arg3 resendSeq:(int)arg4 immediately:(_Bool)arg5 timeOut:(int)arg6 answerFlag:(BOOL)arg7 isControl:(_Bool)arg8;
- (_Bool)sendWupBufferWithDelegate:(char *)arg1 cmd:(id)arg2 seq:(int *)arg3 immediately:(_Bool)arg4 answerFlag:(BOOL)arg5 delegate:(id)arg6;
- (_Bool)sendWupBufferWithDelegate:(char *)arg1 cmd:(id)arg2 seq:(int *)arg3 immediately:(_Bool)arg4 delegate:(id)arg5;
- (_Bool)sendWupBufferWithoutControl:(char *)arg1 cmd:(id)arg2 seq:(int *)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5;
- (_Bool)sendWupBufferWithoutControl:(char *)arg1 cmd:(id)arg2 seq:(int *)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5 answerFlag:(BOOL)arg6;
- (void)setDefaultDispatchDelegete:(id)arg1;
- (void)syncPerformDispatchOnSerialQueue:(CDUnknownBlockType)arg1;
- (void)unregisterDispatchDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

