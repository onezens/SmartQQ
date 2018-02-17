//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ITSearchReqItem, NSMutableArray, NSMutableDictionary;

@interface ITSearchEngine : NSObject
{
    NSMutableArray *_searchList;
    NSMutableDictionary *_firstReqDic;
    ITSearchReqItem *_searchReq;
    _Bool _isLastPage;
    _Bool _isFirstPage;
    int _xo;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)cancelAllReq;
- (void)configLastPageFlag:(id)arg1;
- (_Bool)getFirstPageFlag;
- (_Bool)getLastPageFlag;
- (id)getListArray;
- (id)init;
- (void)notifiUISuccess:(_Bool)arg1 isFirstList:(_Bool)arg2;
- (void)requestFirstListLoadMore:(_Bool)arg1 tagType:(unsigned int)arg2 getPersonalList:(_Bool)arg3;
- (void)requestSearchList:(id)arg1 tagType:(unsigned int)arg2 loadMore:(_Bool)arg3;
- (void)sendSearchList:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *firstReqDic; // @dynamic firstReqDic;
@property(nonatomic) _Bool isFirstPage; // @dynamic isFirstPage;
@property(nonatomic) _Bool isLastPage; // @dynamic isLastPage;
@property(retain, nonatomic) NSMutableArray *searchList; // @dynamic searchList;
@property(retain, nonatomic) ITSearchReqItem *searchReq; // @dynamic searchReq;

@end

