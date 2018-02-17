//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "CAAnimationDelegate.h"
#import "EGORefreshTableHeaderDelegate.h"
#import "NearbyFriendTableViewDelegate.h"
#import "QQZanTopViewDelegate.h"

@class CAAnimationGroup, CUserData, NSArray, NSMutableArray, NSString, NearbyFriendTableView, NearbyZanLimitInfoModel, ODRefreshControlWithSectionHeaderFixed, QQNobodyView, UIImageView, UIView;

@interface QQConcernViewController : QQViewController <QQZanTopViewDelegate, CAAnimationDelegate, EGORefreshTableHeaderDelegate, NearbyFriendTableViewDelegate>
{
    NearbyFriendTableView *_tableView[2];
    ODRefreshControlWithSectionHeaderFixed *_refreshControl[2];
    _Bool _getFullContent[2];
    CUserData *_userData[2];
    NSMutableArray *_userList[2];
    QQNobodyView *_nobodyView[2];
    _Bool _reloading[2];
    long long _viewCellMaxNum[2];
    UIView *_marketEntranceView;
    struct CGRect _marketInitFrame;
    NSMutableArray *_recommendList;
    NSArray *_recommendUrlList;
    CAAnimationGroup *_agZoomOut;
    CAAnimationGroup *_agZoomIn;
    _Bool _showedWaveAnimation;
    UIView *_nightModeMaskView;
    float _titleLabelAlpha;
    float _actViewCenterX;
    _Bool _isShowZanBanner;
    int _currentNearbyZanLimitSeq;
    long long _tabIndex;
    NearbyZanLimitInfoModel *_nearbyZanLimitModel;
    UIImageView *_customVoteRecommend;
}

- (void).cxx_destruct;
- (void)ActionClickSetting;
- (void)_segmentValueChanged:(id)arg1;
- (void)adjustForNightMode;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)checkAnimationShow;
- (void)clickZanTopView;
- (void)convertGroupListData:(int)arg1 list:(id)arg2;
@property(retain, nonatomic) UIImageView *customVoteRecommend; // @synthesize customVoteRecommend=_customVoteRecommend;
- (void)dealloc;
- (void)delayEndRefreshing:(_Bool)arg1 tag:(int)arg2;
- (void)deleteData:(id)arg1 index:(id)arg2;
- (void)dropViewDidBeginRefreshing:(id)arg1;
- (void)getFavoriteListCallback:(id)arg1;
- (_Bool)getMoreData:(id)arg1;
- (void)getVotersListCallback:(id)arg1;
- (void)hideMarketEntranceAnimation;
- (id)init;
- (void)initNotification;
- (_Bool)isInShowRankingTime;
- (void)jumpToCustomVoteMarket:(id)arg1;
- (void)layoutViewsIfNeeds:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (void)loadView;
@property(retain, nonatomic) NearbyZanLimitInfoModel *nearbyZanLimitModel; // @synthesize nearbyZanLimitModel=_nearbyZanLimitModel;
- (void)onGetNearbyZanLimitInfoRspCallback:(id)arg1;
- (void)onGetRecommendUrls:(id)arg1;
- (void)onGetUrlImage:(id)arg1;
- (void)p_refreshZanBannerState;
- (void)refreshFriendListFailed:(int)arg1;
- (void)refreshFriendListSuccess:(int)arg1;
- (void)refreshMarketEntranceUI;
- (_Bool)refreshTableList:(id)arg1;
- (void)releaseAllViews;
- (void)reportClickCell;
- (void)scrollViewDidScroll:(id)arg1;
@property(nonatomic) long long tabIndex; // @synthesize tabIndex=_tabIndex;
- (void)showMarketEntranceAnimation;
- (void)showNobodyView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)zanListPageHandleJoinZanRankingSwitch:(id)arg1;
- (void)zangAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
