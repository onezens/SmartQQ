//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBAccountChangedProtocol.h"
#import "IQQDBOperationBase.h"

@class NSString;

@interface QQTroopMemberNickTable : NSObject <IQQDBOperationBase, DBAccountChangedProtocol>
{
}

- (void)createTable:(id)arg1;
- (void)dealloc;
- (id)getNickByGroupcode:(id)arg1 uin:(id)arg2;
- (id)getNickByGroupcode:(id)arg1 uin:(id)arg2 inDb:(id)arg3;
- (unsigned long long)getTableSign;
- (id)init;
- (void)insertNick:(id)arg1 forGroup:(id)arg2 uin:(id)arg3;
- (void)insertNick:(id)arg1 forGroup:(id)arg2 uin:(id)arg3 inDb:(id)arg4;
- (void)onDBChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

