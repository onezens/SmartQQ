//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SAMRequestItem : NSObject
{
    NSString *_serviceCmd;
    int _seq;
    int _timeOut;
    int _retryTimes;
    _Bool _exclusive;
    _Bool _mainThread;
    int _xo;
    int _reqBufferSize;
    CDUnknownBlockType reqblock;
    CDUnknownBlockType failedBlock;
    unsigned long long _reqStartTime;
    unsigned long long _packStartTime;
    unsigned long long _unpackStartTime;
    unsigned long long _blockStartTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long blockStartTime; // @synthesize blockStartTime=_blockStartTime;
- (void)checkRDMReportBegin;
- (void)checkRDMReportBlockBegin;
- (void)checkRDMReportBlockEnd:(_Bool)arg1 respBufferSize:(int)arg2;
- (void)checkRDMReportEnd:(_Bool)arg1 param:(id)arg2 respBufferSize:(int)arg3;
- (void)checkRDMReportPackBegin;
- (void)checkRDMReportPackEnd:(char *)arg1;
- (void)checkRDMReportUnpackBegin;
- (void)checkRDMReportUnpackEnd:(int)arg1;
- (id)commonParameters;
- (id)description;
@property(nonatomic) _Bool exclusive; // @synthesize exclusive=_exclusive;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock;
- (char *)getRequestBuffer;
- (id)handleMSFSDKError:(id)arg1;
- (id)handleTicketError:(id)arg1;
- (id)init;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) _Bool mainThread; // @synthesize mainThread=_mainThread;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
@property(nonatomic) unsigned long long packStartTime; // @synthesize packStartTime=_packStartTime;
- (void)recordRequestBufferSize:(char *)arg1;
@property(nonatomic) int reqBufferSize; // @synthesize reqBufferSize=_reqBufferSize;
@property(nonatomic) unsigned long long reqStartTime; // @synthesize reqStartTime=_reqStartTime;
@property(copy, nonatomic) CDUnknownBlockType reqblock; // @synthesize reqblock;
@property(nonatomic) int retryTimes; // @synthesize retryTimes=_retryTimes;
@property(nonatomic) int seq; // @synthesize seq=_seq;
@property(retain, nonatomic) NSString *serviceCmd; // @synthesize serviceCmd=_serviceCmd;
@property(nonatomic) int timeOut; // @synthesize timeOut=_timeOut;
@property(nonatomic) unsigned long long unpackStartTime; // @synthesize unpackStartTime=_unpackStartTime;
- (void)willBeginSending;

@end
