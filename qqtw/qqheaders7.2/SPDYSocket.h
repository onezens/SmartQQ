//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableData, NSString, NSTimer, SPDYOriginEndpoint, SPDYOriginEndpointManager, SPDYSocketReadOp, SPDYSocketWriteOp;

@interface SPDYSocket : NSObject
{
    unsigned short _connectedPort;
    NSString *_connectedHost;
    int _socket4FD;
    int _socket6FD;
    struct __CFSocket *_socket4;
    struct __CFSocket *_socket6;
    struct __CFReadStream *_readStream;
    struct __CFWriteStream *_writeStream;
    struct __CFRunLoopSource *_source4;
    struct __CFRunLoopSource *_source6;
    struct __CFRunLoop *_runLoop;
    CDStruct_4210025a _context;
    NSArray *_runLoopModes;
    NSTimer *_connectTimer;
    NSMutableArray *_readQueue;
    SPDYSocketReadOp *_currentReadOp;
    NSTimer *_readTimer;
    NSMutableData *_unreadData;
    NSMutableArray *_writeQueue;
    SPDYSocketWriteOp *_currentWriteOp;
    NSTimer *_writeTimer;
    id <SPDYSocketDelegate> _delegate;
    unsigned short _flags;
    SPDYOriginEndpointManager *_endpointManager;
    SPDYOriginEndpoint *_endpoint;
    _Bool _isCellular;
}

- (void).cxx_destruct;
- (void)_addSource:(struct __CFRunLoopSource *)arg1;
- (void)_addSource:(struct __CFRunLoopSource *)arg1 mode:(id)arg2;
- (void)_addTimer:(id)arg1;
- (void)_addTimer:(id)arg1 mode:(id)arg2;
- (void)_captureUnreadData;
- (void)_close;
- (void)_closeWithError:(id)arg1;
- (_Bool)_configureStreams:(id *)arg1;
- (_Bool)_connectToNextEndpointWithError:(id *)arg1;
- (_Bool)_createStreamsToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;
- (void)_dequeueRead;
- (void)_dequeueWrite;
- (void)_emptyQueues;
- (void)_endConnectTimeout;
- (void)_endRead;
- (void)_endWrite;
- (void)_finishRead;
- (void)_finishWrite;
- (_Bool)_fullyDisconnected;
- (void)_handleError:(id)arg1;
- (void)_onProxyResponse;
- (void)_onStreamOpened;
- (void)_onTLSHandshakeSuccess;
- (_Bool)_openStreams:(id *)arg1;
- (void)_read;
- (_Bool)_readStreamReady;
- (void)_removeSource:(struct __CFRunLoopSource *)arg1;
- (void)_removeSource:(struct __CFRunLoopSource *)arg1 mode:(id)arg2;
- (void)_removeTimer:(id)arg1;
- (void)_removeTimer:(id)arg1 mode:(id)arg2;
- (void)_resetStreamsAndSockets;
- (void)_scheduleDisconnect;
- (void)_scheduleRead;
- (_Bool)_scheduleStreamsOnRunLoop:(id)arg1 error:(id *)arg2;
- (void)_scheduleWrite;
- (void)_setConnectionProperties;
- (_Bool)_setSocketViaStreams:(id *)arg1;
- (void)_startConnectTimeout:(double)arg1;
- (void)_timeoutConnect:(id)arg1;
- (void)_timeoutRead:(id)arg1;
- (void)_timeoutWrite:(id)arg1;
- (void)_tryTLSHandshake;
- (void)_unscheduleReadStream;
- (void)_unscheduleWriteStream;
- (void)_write;
- (_Bool)_writeStreamReady;
- (id)abortError;
- (_Bool)addRunLoopMode:(id)arg1;
- (struct __CFReadStream *)cfReadStream;
- (struct __CFSocket *)cfSocket;
- (struct __CFWriteStream *)cfWriteStream;
- (_Bool)closed;
- (id)connectTimeoutError;
- (_Bool)connectToOrigin:(id)arg1 withTimeout:(double)arg2 error:(id *)arg3;
- (_Bool)connected;
- (id)connectedHost;
- (unsigned short)connectedPort;
- (_Bool)connectedToProxy;
- (void)dealloc;
@property(retain, nonatomic) id <SPDYSocketDelegate> delegate;
- (void)disconnect;
- (void)disconnectAfterWrites;
- (void)handleCFReadStreamEvent:(unsigned long long)arg1 forStream:(struct __CFReadStream *)arg2;
- (void)handleCFWriteStreamEvent:(unsigned long long)arg1 forStream:(struct __CFWriteStream *)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;
@property(readonly, nonatomic) _Bool isCellular; // @synthesize isCellular=_isCellular;
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 maxLength:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 tag:(long long)arg4;
- (id)readTimeoutError;
- (void)secureWithTLS:(id)arg1;
- (_Bool)setRunLoopModes:(id)arg1;
- (id)socketError;
- (id)streamError;
- (void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (id)writeTimeoutError;

@end

