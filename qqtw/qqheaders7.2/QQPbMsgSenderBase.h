//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMsgSvcSendMsgRespHandler.h"
#import "IPacketSendResultHandler.h"

@class NSString;

@interface QQPbMsgSenderBase : NSObject <IPacketSendResultHandler, IMsgSvcSendMsgRespHandler>
{
    NSString *_licence;
}

+ (void)addEmojiStickerMsg:(id)arg1 toRichText:(struct RichText *)arg2;
- (void)DefaultGenC2CTypeMsgRemoveDupMark:(struct _C2C_DUPLICATE_RELATEMARK *)arg1 ToUin:(unsigned long long)arg2;
- (struct AppShareInfo *)GenAppShareInfo:(id)arg1;
- (MsgBody_ba4fc016 *)GenC2CPttMsgBodyOfSendMsgReq:(id)arg1 messageModel:(id)arg2;
- (struct ContentHead *)GenContentHeadOfSendMsgReq:(unsigned int)arg1 PkgIndex:(unsigned int)arg2 DivSeq:(unsigned int)arg3;
- (MsgBody_ba4fc016 *)GenCustomFaceImgOfSendMsgReq:(id)arg1 shareAppInfo:(id)arg2 withXMLContent:(id)arg3;
- (MsgBody_ba4fc016 *)GenCustomFaceImgOfSendMsgReq:(id)arg1 shareAppInfo:(id)arg2 withXMLContent:(id)arg3 SendingModel:(id)arg4;
- (MsgBody_ba4fc016 *)GenDoodleMsgBodyOfSendMsgReq:(id)arg1;
- (MsgBody_ba4fc016 *)GenGroupStoryVideoMsgBodyOfSendMsgReq:(id)arg1 messageModel:(id)arg2;
- (MsgBody_ba4fc016 *)GenNotOnLineImgTextMsgBodyOfSendMsgReq:(id)arg1 shareAppInfo:(id)arg2 withSender:(id)arg3;
- (MsgBody_ba4fc016 *)GenNotOnLineImgTextMsgBodyOfSendMsgReq:(id)arg1 shareAppInfo:(id)arg2 withXMLContent:(id)arg3;
- (MsgBody_ba4fc016 *)GenPictureBodyOfSendMsgReq:(id)arg1 shareAppInfo:(id)arg2 withXMLContent:(id)arg3 picType:(int)arg4;
- (MsgBody_ba4fc016 *)GenPttMsgBodyOfSendMsgReq:(id)arg1 messageModel:(id)arg2;
- (MsgBody_ba4fc016 *)GenSVideoMsgBodyOfSendMsgReq:(id)arg1 messageModel:(id)arg2;
- (MsgBody_ba4fc016 *)GenTextMsgBodyOfSendMsgReq:(id)arg1;
- (MsgBody_ba4fc016 *)GenTextMsgBodyOfSendMsgReq:(id)arg1 message:(id)arg2;
- (MsgBody_ba4fc016 *)GenTransMsgBodyOfSendMsgReq:(id)arg1;
- (MsgBody_ba4fc016 *)GetMarketFaceMsg:(id)arg1;
- (MsgBody_ba4fc016 *)GetPokeMsg:(id)arg1;
- (MsgBody_ba4fc016 *)GetShakeWindowMsg;
- (MsgBody_ba4fc016 *)GetSpriteActionMsg:(id)arg1;
- (_Bool)IsC2CTypeMsg:(struct RoutingHead *)arg1;
- (id)LicenceNeedForSend;
- (_Bool)OnReceiveSendMsgRespOfSendSeq:(unsigned int)arg1 ResultCode:(unsigned int)arg2 ErrMsg:(const basic_string_075b6133 *)arg3 ReqSendTimeFromServer:(unsigned int)arg4;
- (int)SendPbCustomFaceImgMsgToUin:(unsigned long long)arg1 customFaceImgInfo:(id)arg2 RoutingHead:(struct RoutingHead *)arg3 pkgNum:(BOOL)arg4 pkgIndex:(BOOL)arg5 divSeq:(short)arg6 msgSeq:(unsigned int)arg7 msgRandom:(unsigned int)arg8 shareAppInfo:(id)arg9 SendingModel:(id)arg10;
- (int)SendPbImgMessage:(id)arg1 offlineImgInfo:(id)arg2 shareAppInfo:(id)arg3;
- (int)SendPbImgStructuredMessage:(id)arg1 offlineImgInfo:(id)arg2 shareAppInfo:(id)arg3;
- (int)SendPbMarketFaceMsgToUin:(unsigned long long)arg1 marketfaceInfo:(id)arg2 RoutingHead:(struct RoutingHead *)arg3 pkgNum:(BOOL)arg4 pkgIndex:(BOOL)arg5 divSeq:(short)arg6 msgSeq:(unsigned int)arg7 msgRandom:(unsigned int)arg8 shareAppInfo:(id)arg9 SendingModel:(id)arg10;
- (int)SendPbMarketMessage:(id)arg1 marketFaceInfo:(id)arg2;
- (int)SendPbMsgToUin:(unsigned long long)arg1 MsgBody:(MsgBody_ba4fc016 *)arg2 RoutingHead:(struct RoutingHead *)arg3 AppShareInfo:(struct AppShareInfo *)arg4 pkgNum:(BOOL)arg5 pkgIndex:(BOOL)arg6 divSeq:(short)arg7 SendingModel:(id)arg8;
- (int)SendPbNotOnLineImgTextMsgToUin:(unsigned long long)arg1 InfoOfOffLineImg:(id)arg2 RoutingHead:(struct RoutingHead *)arg3 pkgNum:(BOOL)arg4 pkgIndex:(BOOL)arg5 divSeq:(short)arg6 msgSeq:(unsigned int)arg7 msgRandom:(unsigned int)arg8 shareAppInfo:(id)arg9 SendingModel:(id)arg10;
- (int)SendPbPokeMessage:(id)arg1;
- (int)SendPbPokeMsgToUin:(unsigned long long)arg1 RoutingHead:(struct RoutingHead *)arg2 pkgNum:(BOOL)arg3 pkgIndex:(BOOL)arg4 divSeq:(short)arg5 msgSeq:(unsigned int)arg6 msgRandom:(unsigned int)arg7 shareAppInfo:(id)arg8 SendingModel:(id)arg9;
- (int)SendPbShakeWindowMessage:(id)arg1;
- (int)SendPbShakeWindowMsgToUin:(unsigned long long)arg1 RoutingHead:(struct RoutingHead *)arg2 pkgNum:(BOOL)arg3 pkgIndex:(BOOL)arg4 divSeq:(short)arg5 msgSeq:(unsigned int)arg6 msgRandom:(unsigned int)arg7 shareAppInfo:(id)arg8 SendingModel:(id)arg9;
- (int)SendPbSpriteActionMessage:(id)arg1 SpriteInfo:(id)arg2;
- (int)SendPbSpriteActionMsgToUin:(unsigned long long)arg1 SpriteInfo:(id)arg2 RoutingHead:(struct RoutingHead *)arg3 pkgNum:(BOOL)arg4 pkgIndex:(BOOL)arg5 divSeq:(short)arg6 msgSeq:(unsigned int)arg7 msgRandom:(unsigned int)arg8 shareAppInfo:(id)arg9 SendingModel:(id)arg10;
- (int)SendPbTextMsgToUin:(unsigned long long)arg1 Msg:(id)arg2 RoutingHead:(struct RoutingHead *)arg3 pkgNum:(BOOL)arg4 pkgIndex:(BOOL)arg5 divSeq:(short)arg6 msgSeq:(unsigned int)arg7 msgRandom:(unsigned int)arg8 shareAppInfo:(id)arg9 SendingModel:(id)arg10;
- (int)SendPbTextMsgToUin:(unsigned long long)arg1 Msg:(id)arg2 RoutingHead:(struct RoutingHead *)arg3 pkgNum:(BOOL)arg4 pkgIndex:(BOOL)arg5 divSeq:(short)arg6 msgSeq:(unsigned int)arg7 msgRandom:(unsigned int)arg8 shareAppInfo:(id)arg9 SendingModel:(id)arg10 emojiStickerinfo:(id)arg11;
- (int)SendPbTextMsgToUin:(unsigned long long)arg1 Msg:(id)arg2 RoutingHead:(struct RoutingHead *)arg3 pkgNum:(BOOL)arg4 pkgIndex:(BOOL)arg5 divSeq:(short)arg6 msgSeq:(unsigned int)arg7 msgRandom:(unsigned int)arg8 shareAppInfo:(id)arg9 SendingModel:(id)arg10 message:(id)arg11;
- (int)SendPbTransMsgToUin:(unsigned long long)arg1 Msg:(id)arg2 RoutingHead:(struct RoutingHead *)arg3 pkgNum:(BOOL)arg4 pkgIndex:(BOOL)arg5 divSeq:(short)arg6 msgSeq:(unsigned int)arg7 msgRandom:(unsigned int)arg8 shareAppInfo:(id)arg9 SendingModel:(id)arg10;
- (id)SendingModelToUin:(long long)arg1 TimeStamp:(int)arg2 MsgId:(int)arg3 pkgNum:(BOOL)arg4 divSeq:(short)arg5 DispContent:(id)arg6 MsgSendType:(int)arg7 MsgType:(int)arg8 BodyType:(int)arg9;
- (void)SetC2CTypeRelatedInfoToPbSendMsgReq:(struct PbSendMsgReq *)arg1 ToUin:(unsigned long long)arg2 msgSeq:(unsigned int)arg3 msgRandom:(unsigned int)arg4;
- (void)SetC2CTypeRelatedInfoToUserInfoOfSendingModel:(id)arg1 FromPbSendMsgReq:(struct PbSendMsgReq *)arg2;
- (int)_sendPbMsgToUin:(unsigned long long)arg1 MsgBody:(MsgBody_ba4fc016 *)arg2 RoutingHead:(struct RoutingHead *)arg3 AppShareInfo:(struct AppShareInfo *)arg4 pkgNum:(BOOL)arg5 pkgIndex:(BOOL)arg6 divSeq:(short)arg7 SendingModel:(id)arg8 msgSeq:(unsigned int)arg9 msgRandom:(unsigned int)arg10;
- (void)add18BirthdayAvatarInfo:(struct RichText *)arg1;
- (void)addGoldMsgInfoWithMsgBody:(MsgBody_ba4fc016 *)arg1 sendingModel:(id)arg2;
- (void)addSmobaMsgInfo:(MsgBody_ba4fc016 *)arg1 sendingModel:(id)arg2;
- (void)dealloc;
- (struct RoutingHead *)genRoutingHead:(id)arg1;
- (int)getC2CReceiptMsgState:(id)arg1;
- (struct Elem *)getGeneralFlagsElem:(MsgBody_ba4fc016 *)arg1;
- (struct Elem *)getGeneralFlagsElemWithRichText:(struct RichText *)arg1;
- (int)getMsgSendType:(id)arg1;
- (long long)getSendUin:(id)arg1;
- (_Bool)handleRecivedPacket:(char *)arg1 bufferLength:(int)arg2 sendingModel:(id)arg3;
- (id)init;
- (void)notifyMsgSentResult:(id)arg1 result:(int)arg2;
- (int)sendBabyQGuideMessage:(id)arg1;
- (int)sendC2CReceiptMsgReadReport:(id)arg1;
- (int)sendC2CReceiptMsgStateReq:(int)arg1 model:(id)arg2;
- (int)sendGroupStoryVideoMsg:(id)arg1 videoMsgInfo:(id)arg2;
- (int)sendLargeOpimizeMsg:(id)arg1 xmlMsg:(id)arg2 shareInfo:(id)arg3;
- (int)sendLargeOpimizeMsgImpl:(long long)arg1 msgBody:(MsgBody_ba4fc016 *)arg2 routingHead:(struct RoutingHead *)arg3 appShareInfo:(struct AppShareInfo *)arg4 sendingModel:(id)arg5 message:(id)arg6;
- (int)sendMixedMessage:(id)arg1 andText:(id)arg2;
- (int)sendPbArkAppMessage:(id)arg1 shareAppInfo:(id)arg2;
- (int)sendPbC2CPttMsg:(id)arg1 pttMsgInfo:(id)arg2;
- (int)sendPbCustomFaceImgMsg:(id)arg1 customFaceImgInfo:(id)arg2 shareAppInfo:(id)arg3;
- (int)sendPbCustomFaceStructuredImgMsg:(id)arg1 customFaceImgInfo:(id)arg2 shareAppInfo:(id)arg3 xmlContent:(id)arg4;
- (int)sendPbDoodleMsg:(id)arg1;
- (int)sendPbFlashChatMessage:(id)arg1 shareAppInfo:(id)arg2;
- (int)sendPbHighBoomMessage:(id)arg1;
- (int)sendPbPttMsg:(id)arg1 pttMsgInfo:(id)arg2;
- (int)sendPbSVideoMsg:(id)arg1 videoMsgInfo:(id)arg2;
- (int)sendPbTextMessage:(id)arg1 shareAppInfo:(id)arg2;
- (int)sendPbTransMessage:(id)arg1 shareAppInfo:(id)arg2;
- (int)sendStructuredXmlMessage:(id)arg1;
- (void)setMsgVia:(id)arg1 byMsg:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

