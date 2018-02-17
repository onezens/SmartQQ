//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IContentUpdateDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, QQUrlParse;

@interface VASUrlInterceptManager : NSObject <IContentUpdateDelegate>
{
    NSMutableArray *_urlInterceptList;
    QQUrlParse *_parser;
    NSObject<OS_dispatch_queue> *urlInterceptQueue;
}

+ (id)shareManager;
- (_Bool)createSourcePathIfNoExist:(id)arg1;
- (void)dealloc;
- (void)downloadUrlInterceptJson;
- (id)init;
- (void)initUrlInterceptInfo;
- (_Bool)isUrlInterceptConfigExist;
- (void)onRequestContentUpdateSuccess;
- (_Bool)processIntercept:(id)arg1;
- (id)processQzoneUrl:(id)arg1;
- (_Bool)processVCIntercept:(id)arg1 showByPush:(_Bool)arg2;
- (void)requestContentUpdate12;
- (void)syncUrlInterceptInfoToLocal;
- (id)urlInterceptConfigPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
