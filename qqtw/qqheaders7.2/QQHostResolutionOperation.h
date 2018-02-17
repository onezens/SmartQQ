//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDate, QQHostInfo;

@interface QQHostResolutionOperation : NSObject
{
    _Bool _isResolved;
    QQHostInfo *_hostInformation;
    NSData *_sockaddrBytes;
    NSArray *_ipStrings;
    NSArray *_hostNames;
    int _xo;
    struct __CFHost *_cfHostName;
    NSDate *_startDate;
    NSDate *_endDate;
    CDUnknownBlockType _callback;
}

- (void)_failedResolvingHostWithStreamError:(CDStruct_87dc826d)arg1;
- (void)_startResolving;
- (void)cleanUp;
- (void)completeOperationForType:(int)arg1;
- (void)dealloc;
- (id)extractHostAddresses:(id)arg1;
- (id)extractHostNames:(id)arg1;
- (id)init;
- (id)initWithHostName:(id)arg1;
- (void)startWithCallback:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, nonatomic) QQHostInfo *hostInformation; // @dynamic hostInformation;
@property(readonly, nonatomic) NSArray *hostNames; // @dynamic hostNames;
@property(readonly, nonatomic) NSArray *ipStrings; // @dynamic ipStrings;
@property(readonly, nonatomic) _Bool isResolved; // @dynamic isResolved;
@property(readonly, nonatomic) NSData *sockaddrBytes; // @dynamic sockaddrBytes;

@end

