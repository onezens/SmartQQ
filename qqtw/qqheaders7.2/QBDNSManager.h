//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSObject<OS_dispatch_queue>, QBDNSCache, QBDNSHTTPDESResolver, QBDNSUDPResolver;

@interface QBDNSManager : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _dnsEnabled;
    long long actualErrorDNSCount;
    NSDate *actualErrorDNSDate;
    NSDate *_detectServerDate;
    _Bool _dnsServerEnabled;
    QBDNSCache *_cache;
    QBDNSUDPResolver *_defaultResolver;
    QBDNSHTTPDESResolver *_httpDNSResolver;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)IBSDNSSettingChanged:(id)arg1;
- (long long)badDateInterVal;
@property(retain) QBDNSCache *cache; // @synthesize cache=_cache;
- (void)clearCache;
- (id)currentSystemDNSAddress:(id)arg1 err:(id *)arg2;
- (id)currentSystemDNSServer;
@property(retain) QBDNSUDPResolver *defaultResolver; // @synthesize defaultResolver=_defaultResolver;
- (void)detectDNSStatus;
- (void)handleActualErrorDNS:(long long)arg1;
- (void)handleBadRequest:(id)arg1 status:(long long)arg2;
- (void)handleResponse:(id)arg1;
@property(retain) QBDNSHTTPDESResolver *httpDNSResolver; // @synthesize httpDNSResolver=_httpDNSResolver;
- (id)init;
- (_Bool)isHTTPDNSEnabled;
- (long long)isNetworkChanged:(_Bool)arg1;
- (void)loadData;
- (void)preProcessDomains:(id)arg1;
- (id)qbDNSAddress:(id)arg1 err:(id *)arg2;
- (id)qbDNSRequest:(id)arg1 cached:(_Bool)arg2;
- (id)query:(id)arg1 status:(long long)arg2;
- (id)queryInternalWithDomain:(id)arg1 resolver:(id)arg2 detect:(_Bool)arg3;
- (void)storeCache;
- (id)systemDNSAddress:(id)arg1 err:(id *)arg2;
- (double)testDNSTime:(id)arg1;

@end

