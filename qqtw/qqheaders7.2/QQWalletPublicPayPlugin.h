//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewPluginQQBizBase.h"

@class NSDictionary;

@interface QQWalletPublicPayPlugin : QQWebViewPluginQQBizBase
{
    NSDictionary *_contextQuery;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *contextQuery; // @synthesize contextQuery=_contextQuery;
- (void)handleJsBridgeRequest_wallet_publicPay:(id)arg1;
- (void)returnToJs:(id)arg1;

@end
