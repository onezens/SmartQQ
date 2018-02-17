//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBBizNetworkLogicDelegate.h"

@class NSString, TBGPSModel;

@interface TBStoryDiscoveryMgr : NSObject <TBBizNetworkLogicDelegate>
{
    TBGPSModel *_currentGPS;
    _Bool _hasReceivedCoordinate;
    id <TBStoryDiscoveryMgrDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)addLbsNotification;
- (void)dealloc;
@property(nonatomic) __weak id <TBStoryDiscoveryMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (id)getDiscoveryCardListCache;
- (id)getDiscoveryShareGroupInfoListFromCache;
- (id)getDiscoveryShareGroupListFromCache;
- (id)getGPSModelCache:(long long)arg1;
- (id)getSquareBannerItemsFromCache;
- (void)handleCoordinate:(id)arg1 withError:(id)arg2;
- (void)handleCoordinateWithDelay;
- (void)handleEndGetLocation:(id)arg1;
- (void)handleRspBannerList:(id)arg1 withRequestModel:(id)arg2 errorInfo:(id)arg3;
- (void)handleRspDiscoveryList:(id)arg1 withRequestModel:(id)arg2 withLocalErr:(id)arg3;
- (void)handleRspGroupUnionIDList:(id)arg1 withRequestModel:(id)arg2 errorInfo:(id)arg3;
- (void)handleRspShareGroupInfoList:(id)arg1 withRequestModel:(id)arg2 errorInfo:(id)arg3;
- (void)loadMoreDiscoveryCardList;
- (void)refreshDiscoveryCardList;
- (void)removeLbsNotification;
- (void)requestCurrentCoordinate;
- (void)requestDiscoveryCardList:(_Bool)arg1;
- (unsigned long long)requestDiscoveryShareGroupInfoList:(id)arg1;
- (unsigned long long)requestDiscoveryShareGroupList:(id)arg1;
- (unsigned long long)requestSquareBannerItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
