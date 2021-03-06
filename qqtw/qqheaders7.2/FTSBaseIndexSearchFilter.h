//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FTSIndexDBServerProtocol.h"
#import "IQQDBOperationBase.h"

@class NSArray, NSLock, NSMutableDictionary, NSString;

@interface FTSBaseIndexSearchFilter : NSObject <IQQDBOperationBase, FTSIndexDBServerProtocol>
{
    NSMutableDictionary *_allSearchIdAndNameDict;
    NSLock *_allSearchIdAndNameDictLock;
    _Bool _isNewDB;
    _Bool _containMyselfInResult;
    NSArray *_IndexSearchResultArry;
    NSArray *_keyWords;
    unsigned long long _rdmTimeConsumeMsgAndMsg;
    unsigned long long _rdmTimeConsumePersonAndMsg;
    unsigned long long _rdmTimeConsumePerson;
    unsigned long long _rdmCountMsgAndMsg;
    unsigned long long _rdmCountPersonAndMsg;
    unsigned long long _rdmCountPerson;
    long long _type;
}

+ (id)ConvertFMResultSetToIndexSearchResultModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *IndexSearchResultArry; // @synthesize IndexSearchResultArry=_IndexSearchResultArry;
- (void)calcMatchScore:(id)arg1 keywords:(id)arg2;
@property(nonatomic) _Bool containMyselfInResult; // @synthesize containMyselfInResult=_containMyselfInResult;
- (id)filterMsgResults:(id)arg1 keywords:(id)arg2;
- (id)getObjectAllSearchIdAndNameDictWith:(id)arg1;
- (id)getSearchResults:(id)arg1 InDB:(id)arg2;
- (id)getSearchResults:(id)arg1 keyWord:(id)arg2;
- (id)getSearchResultsList:(id)arg1 InDB:(id)arg2;
- (id)getSearchResultsList:(id)arg1 isNeedExtSearch:(_Bool)arg2;
- (unsigned long long)getTableSign;
- (id)init;
@property(nonatomic) _Bool isNewDB; // @synthesize isNewDB=_isNewDB;
- (_Bool)isSearchC2C;
@property(retain, nonatomic) NSArray *keyWords; // @synthesize keyWords=_keyWords;
@property(nonatomic) unsigned long long rdmCountMsgAndMsg; // @synthesize rdmCountMsgAndMsg=_rdmCountMsgAndMsg;
@property(nonatomic) unsigned long long rdmCountPerson; // @synthesize rdmCountPerson=_rdmCountPerson;
@property(nonatomic) unsigned long long rdmCountPersonAndMsg; // @synthesize rdmCountPersonAndMsg=_rdmCountPersonAndMsg;
@property(nonatomic) unsigned long long rdmTimeConsumeMsgAndMsg; // @synthesize rdmTimeConsumeMsgAndMsg=_rdmTimeConsumeMsgAndMsg;
@property(nonatomic) unsigned long long rdmTimeConsumePerson; // @synthesize rdmTimeConsumePerson=_rdmTimeConsumePerson;
@property(nonatomic) unsigned long long rdmTimeConsumePersonAndMsg; // @synthesize rdmTimeConsumePersonAndMsg=_rdmTimeConsumePersonAndMsg;
- (void)setAllSearchIdAndNameDictObject:(id)arg1 forKey:(id)arg2;
@property(nonatomic) long long type; // @synthesize type=_type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

