//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, QQLockDictionary;

@interface TBStoryVideoMarkReadMgr : NSObject
{
    _Bool _failListDidLoad;
    QQLockDictionary *_failList;
    NSMutableArray *_reqSeqArray;
}

+ (id)NTMarkReadStoryVideoFaileList;
+ (id)sharedInstance;
- (void)addBatchSeq:(unsigned long long)arg1;
- (id)allFailItems;
- (unsigned long long)batchSeqCount;
- (void)changeAccount;
- (void)clearBatchSeq;
- (void)clearFailList;
- (_Bool)containSeq:(unsigned long long)arg1;
- (void)dealloc;
- (void)doSaveFailMarReadListAction;
- (unsigned long long)failListCount;
- (id)failListFilePath;
- (id)init;
- (void)loadFailMarkReadList;
- (void)onMarkedBatchVideo:(id)arg1;
- (void)onMarkedSingleVideo:(id)arg1;
- (void)removeBatchSeq:(unsigned long long)arg1;
- (void)removeFailItemForBatchKeys:(id)arg1;
- (_Bool)requestBatchFailMarkReadStroy;
- (unsigned long long)requestMarkReadStoryVideo:(id)arg1 withUnionID:(id)arg2 withVid:(id)arg3 source:(unsigned int)arg4 createTime:(unsigned long long)arg5 vidType:(unsigned int)arg6;
- (void)saveFailMarkReadListImmidaly:(_Bool)arg1;
- (void)setFaileItem:(id)arg1 forKey:(id)arg2;
- (_Bool)shouldWaitForRequestFailMarkReadStory;

@end
