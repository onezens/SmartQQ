//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabase, NSMutableArray, NSMutableDictionary, NSString;

@interface QQReadInJoySubscribeMigrator : NSObject
{
    FMDatabase *_db;
    id <IQQReadInJoySubscribeMigratorProtocol> _delegate;
    NSString *_accountUin;
    NSMutableDictionary *_subId2RealUin;
    NSMutableArray *_readInJoySubList;
    NSMutableArray *_readInJoyRecentMsg;
    unsigned short _msgSeqBase;
}

- (id)convertSubXmlMsgToPA:(id)arg1;
- (void)createC2CTableForUin:(id)arg1 inDb:(id)arg2;
- (void)createPublicAccountTableInDB:(id)arg1;
- (void)dealloc;
- (_Bool)doMigration;
- (unsigned int)getMsgRandom;
- (unsigned short)getMsgSeq;
- (void)getOldReadInJoyData:(id)arg1;
- (id)getRealUinFromBindUin:(id)arg1;
- (id)getRealUinFromSubId:(id)arg1;
- (id)getRecentSubFrom:(id)arg1;
- (id)getSubFrom:(id)arg1;
- (unsigned long long)getUidFromRandom:(unsigned int)arg1;
- (id)initWithDb:(id)arg1 delegate:(id)arg2;
- (void)init_subId2RealUin;
- (void)insertToC2CTable:(id)arg1 inDb:(id)arg2;
- (void)insertToRecentC2CTable:(id)arg1 inDb:(id)arg2;
- (id)loadC2CMsgListInDB:(id)arg1 ForUin:(id)arg2 Count:(int)arg3;
- (void)loadRecentSubscribeListinDB:(id)arg1;
- (void)loadSubscribeListInDB:(id)arg1;
- (void)migrateFollowList;
- (void)migrateMsgRecordForBindUin:(id)arg1 SubId:(id)arg2 RealUin:(id)arg3 HasUnRead:(_Bool)arg4 DB:(id)arg5;
- (void)migrateUnReadCount;
- (void)setTableVersion:(unsigned short)arg1 forTableSign:(unsigned long long)arg2 inDb:(id)arg3;

@end

