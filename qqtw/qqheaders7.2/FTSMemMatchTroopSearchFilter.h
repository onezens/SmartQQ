//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQRelationSearchFilter.h"

@class NSDictionary;

@interface FTSMemMatchTroopSearchFilter : QQRelationSearchFilter
{
    NSDictionary *_currTroopList;
}

- (void).cxx_destruct;
- (void)_filterHasMatchedTroop:(id)arg1;
- (id)_handleKeyword:(id)arg1;
- (id)_handleSearchResults:(id)arg1;
- (void)_initCurrTroopList;
- (void)_sortTroopMemResults:(id)arg1;
- (unsigned long long)_statisticKindNum:(id)arg1;
- (id)copyAllSearchResults:(id)arg1 excludeUinList:(id)arg2;
- (id)init;

@end
