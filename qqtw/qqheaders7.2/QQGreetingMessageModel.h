//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQClusterMessageModel.h"

@class NSMutableArray, NSMutableDictionary;

@interface QQGreetingMessageModel : QQClusterMessageModel
{
    NSMutableArray *_clearingMsgArr;
    NSMutableDictionary *_clearingMsgDic;
}

- (_Bool)addDraftMsg:(id)arg1;
- (void)addMsg:(id)arg1;
- (long long)calcUnreadCount;
- (void)clearGreetingUnreadCount;
- (void)dealloc;
- (id)getMsgArr;
- (id)getMsgAtIndex:(unsigned long long)arg1;
- (unsigned long long)getMsgCount;
- (id)getMsgUinList;
- (id)init;
- (void)insertMsg:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)refreshGreetingUnreadCount;
- (void)removeMsg:(id)arg1;

@end

