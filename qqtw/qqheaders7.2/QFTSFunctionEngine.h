//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QFTSBaseEngine.h"

#import "IFTSFunctionEngine.h"

@class NSMutableArray, NSString;

@interface QFTSFunctionEngine : QFTSBaseEngine <IFTSFunctionEngine>
{
    NSMutableArray *_filters;
}

+ (id)GetInstance;
- (void).cxx_destruct;
- (void)continueSearchWithKeyword:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ftsConstructFTSEngine;
- (void)ftsDestructFTSEngine;
- (void)ftsGetResultsWithSearchKeyword:(id)arg1;
- (id)getFeedResultsForKeyword:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

