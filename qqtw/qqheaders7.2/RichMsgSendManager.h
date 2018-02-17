//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface RichMsgSendManager : NSObject
{
    NSMutableArray *_richMsgSendArrary;
}

+ (id)getInstance;
- (id)addRichMsgSendItem:(int)arg1 msgSendType:(int)arg2 msgType:(int)arg3 bodyType:(int)arg4 time:(int)arg5 toUin:(long long)arg6 uuid:(id)arg7 localUuid:(id)arg8 duration:(unsigned int)arg9 appShareID:(unsigned int)arg10 msgId:(int)arg11;
- (id)addRichMsgSendItem:(int)arg1 msgSendType:(int)arg2 msgType:(int)arg3 bodyType:(int)arg4 time:(int)arg5 toUin:(long long)arg6 uuid:(id)arg7 localUuid:(id)arg8 duration:(unsigned int)arg9 appShareID:(unsigned int)arg10 msgId:(int)arg11 uuidPrefix:(id)arg12;
- (id)addRichMsgSendItem:(int)arg1 msgSendType:(int)arg2 msgType:(int)arg3 bodyType:(int)arg4 time:(int)arg5 toUin:(long long)arg6 uuid:(id)arg7 localUuid:(id)arg8 duration:(unsigned int)arg9 appShareID:(unsigned int)arg10 msgId:(int)arg11 uuidPrefix:(id)arg12 xmlContent:(id)arg13;
- (void)changeAccount:(id)arg1;
- (_Bool)copyVoiceFile:(id)arg1 newFileKey:(id)arg2;
- (void)delSendVoiceFile:(id)arg1;
- (id)init;
- (void)onRichMsgSendingResult:(id)arg1;
@property(retain, nonatomic) NSMutableArray *richMsgSendArrary; // @synthesize richMsgSendArrary=_richMsgSendArrary;
- (void)sendSuccessFinishNotify:(id)arg1 msgId:(int)arg2;
- (void)switchRichMsgUuid:(id)arg1;

@end
