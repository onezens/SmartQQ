//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SDKBaseURLConnectionDelegate.h"

@class NSData, NSString, SDKBaseURLConnection;

@interface OpenSDKRequest : NSObject <SDKBaseURLConnectionDelegate>
{
    SDKBaseURLConnection *_httpRequest;
    id <SDKBaseURLConnectionDelegate> _requestDelegate;
    NSData *_buf;
}

- (void).cxx_destruct;
- (void)Cancle;
- (void)RequestGet:(id)arg1 url:(id)arg2 RequestDelegate:(id)arg3 andCookie:(id)arg4;
- (void)RequestPost:(id)arg1 url:(id)arg2 RequestDelegate:(id)arg3;
@property(retain, nonatomic) NSData *buf; // @synthesize buf=_buf;
- (void)dealloc;
- (void)didConnectionFailed:(id)arg1;
- (void)didConnectionFinished;
- (id)generatePostBody:(id)arg1;
@property(retain, nonatomic) SDKBaseURLConnection *httpRequest; // @synthesize httpRequest=_httpRequest;
@property(nonatomic) id <SDKBaseURLConnectionDelegate> requestDelegate; // @synthesize requestDelegate=_requestDelegate;
- (id)stringByEncodeUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

