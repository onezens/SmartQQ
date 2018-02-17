//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

@interface QzWnsChannelURLProtocol : NSURLProtocol
{
    long long _requestID;
}

+ (_Bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)webappCommandWithHost:(id)arg1 command:(id *)arg2 msfCommand:(id *)arg3;
- (void)dealloc;
- (void)didFailWithErrorCode:(long long)arg1 wnsCode:(long long)arg2 desc:(id)arg3;
- (void)handleHttpProxyMapResponse:(id)arg1;
- (long long)httpProxyMap:(id)arg1;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
@property(nonatomic) long long requestID; // @synthesize requestID=_requestID;
- (void)startLoading;
- (void)stopLoading;

@end

