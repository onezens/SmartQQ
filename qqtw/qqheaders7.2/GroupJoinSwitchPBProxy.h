//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GroupJoinSwitchPBProxy : NSObject
{
}

+ (id)getInstance;
- (id)getExportGroupReqBuf:(long long)arg1 command:(long long)arg2 serviceType:(long long)arg3;
- (id)getShareLocationReqBuf:(long long)arg1 command:(long long)arg2 serviceType:(short)arg3;
- (id)getUserExportGroupReqBuf:(unsigned long long)arg1 start:(unsigned int)arg2 count:(unsigned int)arg3 command:(unsigned long long)arg4 serviceType:(unsigned long long)arg5 dataTag:(id)arg6;
- (id)parseGroupJoinSwitchRspBuf:(CDStruct_7895f40e)arg1;
- (id)setExportGroupReqBuf:(long long)arg1 isExport:(_Bool)arg2 command:(long long)arg3 serviceType:(long long)arg4;
- (id)setShareLocationReqBuf:(long long)arg1 isShare:(_Bool)arg2 command:(long long)arg3 serviceType:(long long)arg4;

@end

