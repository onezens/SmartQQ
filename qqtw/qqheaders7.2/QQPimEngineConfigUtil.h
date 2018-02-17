//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQPimEngineConfigUtil : NSObject
{
    float _iosSystemVersion;
    NSString *_lc;
    long long _majorVersionCode;
    long long _minorVersionCode;
    long long _hotfixCode;
    long long _buildVersionCode;
    NSString *_udid;
    NSString *_PimWupServerURL;
    NSString *_imei;
}

+ (id)defaultConfigUtil;
@property(copy, nonatomic) NSString *PimWupServerURL; // @synthesize PimWupServerURL=_PimWupServerURL;
@property(nonatomic) long long buildVersionCode; // @synthesize buildVersionCode=_buildVersionCode;
- (void)dealloc;
@property(nonatomic) long long hotfixCode; // @synthesize hotfixCode=_hotfixCode;
@property(copy, nonatomic) NSString *imei; // @synthesize imei=_imei;
- (id)init;
@property(readonly, nonatomic) float iosSystemVersion; // @synthesize iosSystemVersion=_iosSystemVersion;
@property(copy, nonatomic) NSString *lc; // @synthesize lc=_lc;
- (void)loadInfo;
@property(nonatomic) long long majorVersionCode; // @synthesize majorVersionCode=_majorVersionCode;
@property(nonatomic) long long minorVersionCode; // @synthesize minorVersionCode=_minorVersionCode;
@property(readonly, copy, nonatomic) NSString *udid; // @synthesize udid=_udid;

@end

