//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HLSKeyUtilDelegate.h"

@class NSData, NSMutableDictionary, NSString;

@interface TVKLiteSDKManager : NSObject <HLSKeyUtilDelegate>
{
    _Bool _isVipUser;
    _Bool _isEnableIPV6Mode;
    _Bool _initProxy;
    int _productChannelID;
    NSString *_productAppKey;
    NSString *_productPlatform;
    NSString *_productSdtfrom;
    NSString *_productPrivateKey;
    NSString *_cookieForRequest;
    NSString *_uaForRequest;
    NSString *_loginQQ;
    NSString *_loginQQAPPID;
    NSData *_loginQQSKEY;
    NSData *_loginQQLSKEY;
    NSData *_loginQQST;
    NSString *_guid;
    NSMutableDictionary *_proxyDic;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) int authStatus;
@property(retain, nonatomic) NSString *cookieForRequest; // @synthesize cookieForRequest=_cookieForRequest;
- (id)getAppVersionForCKey;
- (id)getPlatformForCKey;
- (id)getPrivateKeyForCKey;
- (id)getSdtfromForCKey;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (id)init;
@property _Bool initProxy; // @synthesize initProxy=_initProxy;
@property(nonatomic) _Bool isEnableIPV6Mode; // @synthesize isEnableIPV6Mode=_isEnableIPV6Mode;
- (_Bool)isInitProxyForServiceType:(int)arg1;
@property(nonatomic) _Bool isVipUser; // @synthesize isVipUser=_isVipUser;
@property(retain, nonatomic) NSString *loginQQ; // @synthesize loginQQ=_loginQQ;
@property(retain, nonatomic) NSString *loginQQAPPID; // @synthesize loginQQAPPID=_loginQQAPPID;
@property(retain, nonatomic) NSData *loginQQLSKEY; // @synthesize loginQQLSKEY=_loginQQLSKEY;
@property(retain, nonatomic) NSData *loginQQSKEY; // @synthesize loginQQSKEY=_loginQQSKEY;
@property(retain, nonatomic) NSData *loginQQST; // @synthesize loginQQST=_loginQQST;
@property(readonly, nonatomic) NSString *productAppKey; // @synthesize productAppKey=_productAppKey;
@property(nonatomic) int productChannelID; // @synthesize productChannelID=_productChannelID;
@property(retain, nonatomic) NSString *productPlatform; // @synthesize productPlatform=_productPlatform;
@property(retain, nonatomic) NSString *productPrivateKey; // @synthesize productPrivateKey=_productPrivateKey;
@property(retain, nonatomic) NSString *productSdtfrom; // @synthesize productSdtfrom=_productSdtfrom;
@property(retain) NSMutableDictionary *proxyDic; // @synthesize proxyDic=_proxyDic;
- (_Bool)registerWithAppKey:(id)arg1;
- (void)setInitProxyForServiceType:(int)arg1 Init:(_Bool)arg2;
@property(retain, nonatomic) NSString *uaForRequest; // @synthesize uaForRequest=_uaForRequest;
@property(readonly, nonatomic) NSString *version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
