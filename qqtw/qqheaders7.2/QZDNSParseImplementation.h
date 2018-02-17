//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneModel.h"

@class NSArray, NSTimer, QZHostInfo;

@interface QZDNSParseImplementation : QZoneModel
{
    NSTimer *_DNSParseSendTimer;
    struct __CFHost *_cfHostName;
    _Bool _isPrasing;
    QZHostInfo *_hostInfo;
    NSArray *_ipStrings;
    CDUnknownBlockType _finishBlock;
}

+ (id)DNSPareseRequestThread;
+ (void)DNSRequestThreadFun;
+ (void)QZStartDNSParseRunLoop;
+ (id)pareseDNSOperationWithHostInfo:(id)arg1 parseDNSFinishBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)DNSParseRecvTimeout;
- (void)DNScompleteOperationType:(int)arg1;
- (void)dealloc;
- (void)didFailWithError:(id)arg1;
- (void)didFailWithHostStreamError:(int)arg1;
- (id)extractHostAddresses:(id)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
- (long long)getDNSIPParseTimeOut;
@property(retain, nonatomic) QZHostInfo *hostInfo; // @synthesize hostInfo=_hostInfo;
- (id)initWithHostInfo:(id)arg1 parseDNSFinishBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSArray *ipStrings; // @synthesize ipStrings=_ipStrings;
@property(nonatomic) _Bool isPrasing; // @synthesize isPrasing=_isPrasing;
- (void)start;
- (void)startResolving;
- (void)stopHostParsing;

@end

