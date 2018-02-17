//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBAccountChangedProtocol.h"

@class NSString, QQTroopMsgSeqTableOperation;

@interface QQTroopMsgSeqTable : NSObject <DBAccountChangedProtocol>
{
    QQTroopMsgSeqTableOperation *_dbOperation;
}

- (void).cxx_destruct;
- (void)cleanTable;
- (void)dealloc;
- (id)getTroopMsgMaxSeq;
- (id)init;
- (void)insertTroop:(id)arg1 maxLocalSeq:(long long)arg2 maxSvrSeq:(long long)arg3;
- (void)onDBChanged:(id)arg1;
- (void)setServerMaxSeq:(id)arg1 seq:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
