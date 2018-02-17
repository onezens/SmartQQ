//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QShareImageApi : NSObject
{
}

+ (id)filterUrlRequestParamsFromString:(id)arg1;
+ (id)generateSimpleNonce;
+ (id)generateUrlParamsFromDictionary:(id)arg1;
+ (id)shareInstance;
- (_Bool)canHandleOpenUrl:(id)arg1 sourceApplication:(id)arg2;
- (_Bool)canOpenUrl:(id)arg1;
- (_Bool)handleOpenUrl:(id)arg1 sourceApplication:(id)arg2 delegate:(id)arg3;
- (_Bool)isOpenPituInstalled;
- (id)parseSendParamsByPasteboard:(id)arg1 type:(id)arg2;
- (id)receiveSendParamsFromPasteboard:(id)arg1;
- (_Bool)sendParams:(id)arg1;
- (_Bool)sendRequestParamsScheme:(id)arg1 callback:(id)arg2;
- (_Bool)sendRequestParamsScheme:(id)arg1 callback:(id)arg2 image:(id)arg3;

@end

