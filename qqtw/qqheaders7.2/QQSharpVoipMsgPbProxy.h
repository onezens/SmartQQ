//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQSharpVoipMsgPbProxy : NSObject
{
}

+ (id)genCancelVoipCallBackReq:(id)arg1 peerPhoneInfo:(id)arg2 callBackID:(id)arg3 fromUin:(id)arg4 freeTrail:(_Bool)arg5;
+ (id)genVoipTypeReqAVCSInfoModel:(unsigned long long)arg1 callPolicy:(long long)arg2 fromPhoneInfo:(id)arg3 formUin:(id)arg4 toPhoneInfo:(id)arg5 toUin:(id)arg6 freeTrail:(_Bool)arg7;
+ (id)parseCancelVoipCallBackRsp:(id)arg1;
+ (id)parseVoipTypeRsp:(id)arg1;

@end
