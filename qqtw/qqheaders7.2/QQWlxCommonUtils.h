//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQWlxCommonUtils : NSObject
{
}

+ (void)QLog_Event:(id)arg1 format:(id)arg2;
+ (struct __SecKey *)addPublicKey:(id)arg1;
+ (id)createTpWLXOpenProxy;
+ (void)desData:(unsigned char [8])arg1 key:(const char *)arg2 operation:(unsigned int)arg3;
+ (id)filterDecryptHeader:(id)arg1;
+ (id)genMac:(id)arg1 withKey:(id)arg2;
+ (id)getDicFromNormalClass:(id)arg1;
+ (id)getDictFromJsonStr:(id)arg1;
+ (id)getMD5Str:(id)arg1;
+ (id)getSHA1DataWithData:(id)arg1;
+ (id)getSHA1StrWidthData:(id)arg1;
+ (id)getSortedSignStr:(id)arg1 withSkipKeys:(id)arg2;
+ (id)hexStringToBytes:(id)arg1;
+ (id)intToBytes:(int)arg1;
+ (id)paddingData:(id)arg1;
+ (id)stripPublicKeyHeader:(id)arg1;
+ (id)urlDecodeStr:(id)arg1;
+ (id)urlEncodeStr:(id)arg1;
+ (_Bool)verifyData:(id)arg1 signautreData:(id)arg2 withKeyRef:(struct __SecKey *)arg3;
+ (_Bool)verifyOriginString:(id)arg1 signString:(id)arg2 publicKey:(id)arg3;

@end

