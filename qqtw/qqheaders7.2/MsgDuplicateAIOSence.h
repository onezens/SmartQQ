//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AIOMsgSence.h"

@interface MsgDuplicateAIOSence : AIOMsgSence
{
}

- (_Bool)findDuplicate:(id)arg1;
- (_Bool)msgTypeNeedCheck:(int)arg1;
- (void)onGetMsgs:(id)arg1 chatUin:(id)arg2 sessionType:(unsigned long long)arg3;
- (void)onPushMsgs:(id)arg1 chatUin:(id)arg2 sessionType:(unsigned long long)arg3;
- (void)onQuitAIO:(id)arg1 sessionType:(unsigned long long)arg2;

@end

