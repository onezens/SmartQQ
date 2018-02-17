//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebViewDelegate.h"

@class NSString, NSURL, QBPerformanceItem, QBProtocolCallback;

@interface QBUIWebViewProxy : NSObject <UIWebViewDelegate>
{
    QBProtocolCallback *_callback;
    NSURL *_currentURL;
    NSURL *_currentMainURL;
    NSURL *_currentMutableMainURL;
    _Bool _isNewPageRequest;
    QBPerformanceItem *_performanceItem;
    id <UIWebViewDelegate> _delegate;
    NSString *_webviewUA;
    NSString *_currentMainURLString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentMainURLString; // @synthesize currentMainURLString=_currentMainURLString;
@property(nonatomic) __weak id <UIWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)getCallBackHashId;
- (id)init;
- (_Bool)isMainRequest:(id)arg1 navigationType:(long long)arg2;
- (_Bool)respondsToSelector:(SEL)arg1;
@property(retain, nonatomic) NSString *webviewUA; // @synthesize webviewUA=_webviewUA;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webview:(id)arg1 beginLoadRequest:(id)arg2;
- (void)webview:(id)arg1 beginReloadWithURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
