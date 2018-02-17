//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IAccountChangedObsever.h"

@class FMDatabaseQueue, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSString;

@interface MQZoneFeedCacheBase : NSObject <IAccountChangedObsever>
{
    NSMutableDictionary *_feeds;
    NSMutableDictionary *_feedParams;
    NSRecursiveLock *_feedParamsLock;
    long long _currentUin;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_mainQueue;
    NSRecursiveLock *_lock;
    NSString *_file;
    FMDatabaseQueue *_databaseQueue;
}

- (void).cxx_destruct;
- (void)appWillEnterBackgroudNotification:(id)arg1;
- (id)cacheFileName;
- (_Bool)checkList:(id)arg1;
- (void)clear;
- (void)cpFeedModelFrom:(id)arg1 to:(id)arg2;
- (void)createFeedTable:(long long)arg1 inDatabase:(id)arg2;
- (void)createInfoTableInDatabase:(id)arg1;
- (void)createParamTableInDatabase:(id)arg1;
@property(retain, nonatomic) FMDatabaseQueue *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
- (long long)dbVersionInDatabase:(id)arg1;
- (void)dealloc;
- (void)deleteFeedTableLimitWithDBCmd:(id)arg1 inDatabase:(id)arg2;
- (void)deleteFeedTableWithDBCmd:(id)arg1 inDatabase:(id)arg2;
- (void)dropFeedTable:(long long)arg1 inDatabase:(id)arg2;
- (void)dropParamTableInDatabase:(id)arg1;
@property(retain, nonatomic) NSString *file; // @synthesize file=_file;
- (id)getCreateFeedTableString;
- (id)getCreateInfoTableString;
- (id)getCreateParamTableString;
- (id)getDropFeedTableString;
- (id)getDropParamTableString;
- (id)getInternalFeedList:(id)arg1;
- (id)getQueryInfoTableString;
- (id)getUpdateInfoTableString;
- (id)init;
- (void)initTables;
- (void)logoutAccountNotification:(id)arg1;
- (void)onAccountLogin;
- (void)onAccountLogout;
- (id)queryFeedTable:(_Bool)arg1 DBCmd:(id)arg2 inDatabase:(id)arg3;
- (id)queryParamTableWithDBCmd:(id)arg1 inDatabase:(id)arg2;
- (void)removeDBFile;
- (void)reset;
- (void)setDbVersion:(long long)arg1 inDatabase:(id)arg2;
- (void)setInternalFeedList:(id)arg1 value:(id)arg2;
- (void)testThread;
- (_Bool)updateFeedTableWithParam:(id)arg1 DBCmd:(id)arg2 inDatabase:(id)arg3;
- (_Bool)updateParamTableWithParam:(id)arg1 dbCmd:(id)arg2 inDatabase:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

