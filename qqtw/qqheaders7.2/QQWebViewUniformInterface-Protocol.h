//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, NSURLRequest, UIScrollView, WKWebViewConfiguration;

@protocol QQWebViewUniformInterface <NSObject>
@property(readonly, copy, nonatomic) NSURL *URL;
@property(nonatomic) _Bool allowsInlineMediaPlayback;
@property(readonly, nonatomic) _Bool canGoBack;
@property(readonly, nonatomic) _Bool canGoForward;
@property(readonly, copy, nonatomic) WKWebViewConfiguration *configuration;
@property(copy, nonatomic) NSString *customUserAgent;
@property(nonatomic) unsigned long long dataDetectorTypes;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(nonatomic) _Bool keyboardDisplayRequiresUserAction;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction;
@property(readonly, nonatomic) NSURLRequest *request;
@property(nonatomic) _Bool scalesPageToFit;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly, copy, nonatomic) NSString *title;

@optional
- (void)evaluateJavaScript:(NSString *)arg1 completionHandler:(void (^)(id, NSError *))arg2;
- (void)goBack;
- (void)goForward;
- (void)loadHTMLString:(NSString *)arg1 baseURL:(NSURL *)arg2;
- (void)loadRequest:(NSURLRequest *)arg1;
- (void)reload;
- (void)stopLoading;
- (NSString *)stringByEvaluatingJavaScriptFromString:(NSString *)arg1;
@end
