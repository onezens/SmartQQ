//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QFTSBaseEngine.h"

@class QQCreateDiscussGroupFilter;

@interface QFTSCreateDiscussGroupEngine : QFTSBaseEngine
{
    QQCreateDiscussGroupFilter *createDiscussGroupFilter;
}

+ (id)GetInstance;
- (void).cxx_destruct;
- (void)endTimer;
- (void)ftsConstructFTSEngine;
- (void)ftsDestructFTSEngine;
- (void)ftsGetResultsWithSearchKeyword:(id)arg1;
- (void)searchRelationResultsHandle:(id)arg1 relationResults:(id)arg2 handledResults:(id)arg3;
- (void)startTimer;
- (void)timerMonitor:(id)arg1;

@end

