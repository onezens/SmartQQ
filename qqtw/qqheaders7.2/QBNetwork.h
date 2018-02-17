//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ArkHTTPSessionDataDelegate.h"
#import "ArkHTTPSessionTaskDelegate.h"
#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"
#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class ArkHTTPSessionTask, NSHTTPURLResponse, NSString, NSThread, NSURLConnection, NSURLSessionTask;

@interface QBNetwork : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, ArkHTTPSessionTaskDelegate, ArkHTTPSessionDataDelegate>
{
    NSURLSessionTask *_nsurlSessionTask;
    NSURLConnection *_nsurlConnection;
    _Bool _iscancel;
    NSThread *_currentThread;
    NSHTTPURLResponse *_arkResponse;
    ArkHTTPSessionTask *_task;
    _Bool _isRedirected;
    _Bool _recvData;
    id <QBNetworkDelegate> _delegate;
}

+ (id)NSErrorForURL:(id)arg1 error:(id)arg2;
+ (_Bool)canSessionON;
+ (_Bool)defaultSessionSON;
+ (void)handleRequest:(id)arg1;
+ (void)handleResponse:(id)arg1;
+ (id)sendSynchronousRequest:(id)arg1 needSession:(_Bool)arg2 returningResponse:(id *)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 totalBytesReceived:(long long)arg4 totalBytesExpectedToReceive:(long long)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 redirectedURL:(id)arg3 refererURL:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)cancel;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (_Bool)connectionShouldUseCredentialStorage:(id)arg1;
@property(nonatomic) __weak id <QBNetworkDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 isProtocol:(_Bool)arg3 needSession:(_Bool)arg4;
- (void)postError:(id)arg1;
- (void)postFinish;
- (void)postReceiveData:(id)arg1;
- (void)postReceiveResp:(id)arg1;
- (void)postRedict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

