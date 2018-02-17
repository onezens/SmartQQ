//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBBizNetworkLogicDelegate.h"

@class NSString;

@interface TBStoryActivityMgr : NSObject <TBBizNetworkLogicDelegate>
{
    unsigned long long _topicId;
    id <TBStoryActivityMgrDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TBStoryActivityMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (id)getActivityCardListCache;
- (id)getActivityInfoCache;
- (void)handleRspActivityInfo:(id)arg1 withRequestModel:(id)arg2 withLocalErr:(id)arg3;
- (void)handleRspActivityList:(id)arg1 withRequestModel:(id)arg2 withLocalErr:(id)arg3;
- (id)initWithTopicId:(unsigned long long)arg1;
- (void)loadMoreActivityCardList;
- (void)refreshActivityCardList;
- (void)requestActivityCardList:(_Bool)arg1;
- (void)requestActivityInfo:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
