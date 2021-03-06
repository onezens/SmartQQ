//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PreProxyManager : NSObject
{
    NSMutableDictionary *preHandlerDic;
    _Bool enablePreLoading_;
    _Bool preLoadTemp;
}

+ (id)Instance;
- (void).cxx_destruct;
- (void)IBSPreLoadSettingChanged:(id)arg1;
- (void)checkOutNetWorkThread;
- (void)doStopMainRequestAtID:(unsigned long long)arg1;
- (_Bool)handleProtocolStartLoading:(id)arg1;
- (_Bool)handleProtocolStopLoading:(id)arg1;
- (id)init;
- (_Bool)isEnablePreLoading;
- (void)performDestoryHandler:(id)arg1;
- (id)requestWithNewOptions:(id)arg1 withHeaders:(id)arg2;
- (_Bool)startMainRequest:(id)arg1 atID:(unsigned long long)arg2 withHeaders:(id)arg3;
- (void)stopMainRequestAtID:(unsigned long long)arg1;

@end

