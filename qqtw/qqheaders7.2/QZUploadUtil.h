//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QZUploadUtil : NSObject
{
}

+ (id)DocPath;
+ (id)addressForHostname:(id)arg1;
+ (id)addressesForHostname:(id)arg1;
+ (long long)batchControlCount;
+ (id)carrierName;
+ (int)carrierType;
+ (long long)concurrentFileCount;
+ (id)data_md5:(id)arg1;
+ (id)data_sha:(id)arg1;
+ (id)fetchWifiBSSID;
+ (id)file_md5:(id)arg1;
+ (id)file_sha:(id)arg1;
+ (id)getDeviceName;
+ (int)getFileSize:(id)arg1;
+ (id)getPathFileName:(id)arg1;
+ (_Bool)isFileExist:(id)arg1;
+ (_Bool)isIpadDevice;
+ (_Bool)isNetReachable;
+ (_Bool)isValidIp:(id)arg1;
+ (_Bool)isWifiNetwork;
+ (long long)multiSocketCount;
+ (_Bool)readBackupIpWithClientInfo;
+ (long long)uploadV2ConnRetryMaxCount;
+ (long long)uploadV2ConnectTimeout;
+ (long long)uploadV2NetTimeout;
+ (long long)uploadV2PacketRetryMaxCount;
+ (long long)uploadV2SocketTimeout;

@end

