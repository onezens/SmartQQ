//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSNumber, NSTimer;

@interface QQPingOperation : NSObject
{
    NSData *_hostAddress;
    long long _nextSequenceNumber;
    long long _identifier;
    struct __CFHost *_host;
    struct __CFSocket *_currentWorkingSocket;
    NSNumber *_ttl;
    NSDate *_startDate;
    NSDate *_endDate;
    NSTimer *_socketSendTimer;
    id <QQPingOperationDelegate> _delegate;
}

+ (unsigned long long)_icmpHeaderOffsetInPacket:(id)arg1;
+ (struct IPHeader *)ipHeaderFromPacket:(id)arg1;
- (void)_didFailWithError:(id)arg1;
- (int)_isValidPingResponsePacket:(id)arg1;
- (void)_readDataFromSocket:(struct __CFSocket *)arg1;
- (void)_stopDataTransfer;
- (void)beginPingWithTtl:(id)arg1;
- (void)cancel;
- (void)dealloc;
@property(nonatomic) id <QQPingOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithHostAddress:(id)arg1;
- (id)initWithHostAddressString:(id)arg1;
- (void)resetNextSequenceNumberAndIdentifier;
- (void)sendPingWithData:(id)arg1;
- (void)socketRecvTimeout;
- (void)startPing;

@end

