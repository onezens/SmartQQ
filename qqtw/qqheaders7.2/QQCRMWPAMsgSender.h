//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWPAMsgSender.h"

@class NSMutableDictionary, NSString;

@interface QQCRMWPAMsgSender : QQWPAMsgSender
{
    NSString *_sigT;
    NSMutableDictionary *_CrmWpaSendQueue;
}

+ (id)GetInstance;
@property(retain, nonatomic) NSMutableDictionary *CrmWpaSendQueue; // @synthesize CrmWpaSendQueue=_CrmWpaSendQueue;
- (struct BusinessWPATmp *)GenInitiativeSendCRMWPATmpToUin:(unsigned long long)arg1;
- (struct BusinessWPATmp *)GenPassiveReplyCRMWPATmpToUin:(unsigned long long)arg1 SeviceType:(unsigned int)arg2 Sig:(id)arg3;
- (_Bool)IsC2CTypeMsg:(struct RoutingHead *)arg1;
- (_Bool)OnReceiveSendMsgRespOfSendSeq:(unsigned int)arg1 ResultCode:(unsigned int)arg2 ErrMsg:(const basic_string_075b6133 *)arg3 ReqSendTimeFromServer:(unsigned int)arg4;
- (id)SendingModelToUin:(long long)arg1 TimeStamp:(int)arg2 MsgId:(int)arg3 pkgNum:(BOOL)arg4 divSeq:(short)arg5 DispContent:(id)arg6 MsgType:(int)arg7 BodyType:(int)arg8;
- (int)_sendPbMsgToUin:(unsigned long long)arg1 MsgBody:(MsgBody_ba4fc016 *)arg2 RoutingHead:(struct RoutingHead *)arg3 AppShareInfo:(struct AppShareInfo *)arg4 pkgNum:(BOOL)arg5 pkgIndex:(BOOL)arg6 divSeq:(short)arg7 SendingModel:(id)arg8 msgSeq:(unsigned int)arg9 msgRandom:(unsigned int)arg10;
- (void)dealloc;
- (struct RoutingHead *)genRoutingHead:(id)arg1;
- (int)getMsgSendType:(id)arg1;
- (id)init;
- (void)setBusinessWPATmpSigT:(struct BusinessWPATmp *)arg1 uin:(unsigned long long)arg2;
@property(retain, nonatomic) NSString *sigT; // @synthesize sigT=_sigT;

@end

