//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface RPDynamicPathSyncer : NSObject
{
}

- (id)dynamicNumRedPotSyncerKey;
- (id)dynamicSyncerKey;
- (id)nowAppInfos;
- (id)nowNumRedPots;
@property(readonly, nonatomic) NSArray *previouslyAppInfos;
- (id)previouslyNumRedPots;
- (void)restoreNumRedPotBusiToCache:(id)arg1;
- (void)restorePathsToCache:(id)arg1;
- (void)storeNumRedPotToDisk:(id)arg1;
- (void)storeToDisk:(id)arg1;

@end

