//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QSEngineBase.h"

#import "IEngineDispatchDelegate.h"
#import "IQGroupRecommendEngine.h"

@class GroupActivityModel, NSMutableArray, NSString;

@interface QSGroupRecommendEngine : QSEngineBase <IQGroupRecommendEngine, IEngineDispatchDelegate>
{
    int _nextRecvRecommendGroup;
    NSMutableArray *_groupsInfo;
    GroupActivityModel *_groupActivityInfo;
    int _notifiRecomendFreq;
    int _notifiRecomendSeq;
    int _nearbyRecomendSeq;
    NSMutableArray *_nearbyGroupsInfo;
    _Bool _nearbyShouldMergeData;
}

- (void)dealloc;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)getGroupActivityInfo;
- (int)getGroupActivityInfoIndex;
- (id)getGroupRecommends;
- (int)getUnreadRecommendGroupCount;
- (void)handleRecommendGroupResult:(id)arg1;
- (id)init;
- (_Bool)isInNearbyRecommendGroupList:(id)arg1;
- (void)loadGroupRecommends;
- (void)loadNearbyGroupRecommends;
- (void)notifyError:(id)arg1;
- (void)onAccountLogout:(id)arg1;
- (void)registerDispatchDelegate;
- (void)reload;
- (void)removeAllRecommendGroupInfo;
- (void)removeRecommendGroupActivityInfo;
- (void)removeRecommendGroupInfo:(id)arg1;
- (void)requestNewRecommendGroupV2:(unsigned int)arg1 lastGroupCode:(id)arg2 opSource:(int)arg3;
- (void)requestRecommendGroupHateGroup:(unsigned int)arg1 groupCode:(id)arg2;
- (void)reset;
- (void)saveNearbyRecommendGroupInfo;
- (void)saveRecommendGroupInfo;
- (void)setRecommendGroupRead;
- (void)unregisterDispatchDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

