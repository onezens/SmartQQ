//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewController.h"

@interface QZJsBridgeProxyController : QQWebViewController
{
    id <QzoneJSBridgeDelegate> _qzoneJsBridgeDelegate;
}

- (void).cxx_destruct;
- (void)executeJsScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getCurrentURL;
- (id)getPageURL;
- (id)getWebviewPerformanceData;
@property(nonatomic) __weak id <QzoneJSBridgeDelegate> qzoneJsBridgeDelegate; // @synthesize qzoneJsBridgeDelegate=_qzoneJsBridgeDelegate;

@end

