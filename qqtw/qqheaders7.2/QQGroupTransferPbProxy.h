//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQGroupTransferPbProxy : NSObject
{
}

+ (id)shareInstance;
- (id)getTransferGroupBuffer:(unsigned long long)arg1 oldOwner:(unsigned long long)arg2 newOwner:(unsigned long long)arg3;
- (_Bool)parseMemUinsBuffer:(char *)arg1 len:(int)arg2 errMsg:(basic_string_075b6133 *)arg3 groupMemArray:(id)arg4 groupMemFlagArray:(id)arg5 iFlag:(unsigned int *)arg6 startUin:(unsigned long long *)arg7;
- (_Bool)parseSixGroupMemUinsBuffer:(char *)arg1 len:(int)arg2 errMsg:(basic_string_075b6133 *)arg3 groupMemArray:(id)arg4;
- (_Bool)parseTransferGroupBuffer:(char *)arg1 len:(int)arg2 ret:(int *)arg3 errMsg:(basic_string_075b6133 *)arg4 result:(unsigned int *)arg5;
- (id)transferGroupOIDBSSOPKG:(unsigned long long)arg1 command:(long long)arg2 serviceType:(long long)arg3 oldOwner:(unsigned long long)arg4 newOwner:(unsigned long long)arg5;

@end

