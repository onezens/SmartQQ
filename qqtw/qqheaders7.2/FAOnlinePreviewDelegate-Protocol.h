//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FAWebView, NSString;

@protocol FAOnlinePreviewDelegate <NSObject>
- (FAWebView *)getWebview;
- (void)onFinish:(_Bool)arg1 msg:(NSString *)arg2 stage:(int)arg3;
- (void)onPage:(int)arg1 totalPage:(int)arg2;

@optional
- (void)onOpenFile:(NSString *)arg1 path:(NSString *)arg2 folder:(_Bool)arg3 size:(unsigned long long)arg4;
@end

