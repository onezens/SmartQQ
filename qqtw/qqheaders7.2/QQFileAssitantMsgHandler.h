//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseMsgHandler.h"

@class NSMutableDictionary;

@interface QQFileAssitantMsgHandler : QQBaseMsgHandler
{
    NSMutableDictionary *_msgDict;
}

+ (id)getInstance;
- (void)dealloc;
- (id)handle0x20cMsg:(const Msg_f948e9b8 *)arg1;
- (id)handle0x211Msg:(const Msg_f948e9b8 *)arg1;
- (id)handleMsg:(const Msg_f948e9b8 *)arg1;
- (id)init;
@property(retain, nonatomic) NSMutableDictionary *msgDict; // @synthesize msgDict=_msgDict;
- (void)parseMsgType0x20cOptype0x23:(const void *)arg1 DataLen:(int)arg2 ConfUin:(unsigned int)arg3;
- (void)parseMsgType0x210SubMsgType0xcb:(const void *)arg1 DataLen:(int)arg2 subMsgType:(unsigned int)arg3 subMsgSeq:(unsigned int)arg4 fromUin:(id)arg5;

@end
