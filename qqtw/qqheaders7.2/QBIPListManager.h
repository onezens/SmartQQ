//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, NSTimer;

@interface QBIPListManager : NSObject
{
    _Bool _hasGetIPList;
    _Bool _isDefaultUseProxy;
    _Bool _hadFetchedIplist;
    int _spdy_bProxy;
    NSMutableDictionary *_ssidToIpTypeDicts;
    long long _spdyEnableFlag;
    NSString *_currentSSID;
    NSString *_gettingIpListSSID;
    NSTimer *_getIpListTimer;
    NSTimer *_iplistFrequencyControlTimer;
    long long _iplistFrequencyControlCount;
    NSString *_spdyStartIp;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)clearFrequencyControlTimer;
@property(readonly, nonatomic) _Bool cloudAccelerateOn;
@property(retain, nonatomic) NSString *currentSSID; // @synthesize currentSSID=_currentSSID;
- (void)dealloc;
- (void)disableSpdy;
- (void)enableSpdy;
- (_Bool)failCurrentIpOfType:(int)arg1;
- (id)getCurrentIpOfType:(int)arg1;
- (void)getIPListWhenAPNChanged:(_Bool)arg1;
- (void)getIpListFrequencyControl;
- (void)getIpListFromServer:(id)arg1;
@property(retain, nonatomic) NSTimer *getIpListTimer; // @synthesize getIpListTimer=_getIpListTimer;
- (id)getMobileNetworkSSID;
@property(retain, nonatomic) NSString *gettingIpListSSID; // @synthesize gettingIpListSSID=_gettingIpListSSID;
@property(nonatomic) _Bool hadFetchedIplist; // @synthesize hadFetchedIplist=_hadFetchedIplist;
- (_Bool)haveToGetIpList;
- (id)init;
@property(nonatomic) long long iplistFrequencyControlCount; // @synthesize iplistFrequencyControlCount=_iplistFrequencyControlCount;
@property(retain, nonatomic) NSTimer *iplistFrequencyControlTimer; // @synthesize iplistFrequencyControlTimer=_iplistFrequencyControlTimer;
@property _Bool isDefaultUseProxy; // @synthesize isDefaultUseProxy=_isDefaultUseProxy;
- (void)resetCurrentIpIndexOfType:(int)arg1;
- (void)saveDataToFileAndClear;
- (void)saveIpLists:(id)arg1 apnType:(id)arg2 ipType:(long long)arg3 totalPollNum:(long long)arg4 lifePeriod:(long long)arg5;
@property(nonatomic) long long spdyEnableFlag; // @synthesize spdyEnableFlag=_spdyEnableFlag;
@property(retain, nonatomic) NSString *spdyStartIp; // @synthesize spdyStartIp=_spdyStartIp;
@property int spdy_bProxy; // @synthesize spdy_bProxy=_spdy_bProxy;
@property(retain, nonatomic) NSMutableDictionary *ssidToIpTypeDicts; // @synthesize ssidToIpTypeDicts=_ssidToIpTypeDicts;
@property(readonly, nonatomic) _Bool spdyAvailable;
- (void)statSpdyStartIp;

@end

