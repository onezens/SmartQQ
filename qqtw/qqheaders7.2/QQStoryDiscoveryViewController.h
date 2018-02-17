//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQStoryBaseViewController.h"

#import "TBShareGroupDiscoverViewDelegate.h"
#import "TBStoryDiscoveryMgrDelegate.h"
#import "TBWaterfallCollectionViewDelegate.h"
#import "UserSummaryNavBarItemDelagate.h"

@class NSString, ODRefreshControl, TBShareGroupDiscoverView, TBStoryCardInfoModel, TBStoryDiscoveryMgr, TBStoryPlayerDiscoveryDataEngine, TBWaterfallCollectionView, UserSummaryNavigationBar;

@interface QQStoryDiscoveryViewController : QQStoryBaseViewController <TBStoryDiscoveryMgrDelegate, TBWaterfallCollectionViewDelegate, TBShareGroupDiscoverViewDelegate, UserSummaryNavBarItemDelagate>
{
    TBWaterfallCollectionView *_mainView;
    ODRefreshControl *_refreshControl;
    TBStoryDiscoveryMgr *_dataMgr;
    TBStoryPlayerDiscoveryDataEngine *_discoveryDataEngine;
    TBShareGroupDiscoverView *_shareGroupDiscoverView;
    _Bool _dragToBack;
    _Bool _navigationContentHidden;
    TBStoryCardInfoModel *_selfShareFakeCardInfoModel;
    unsigned long long _source;
    unsigned long long _style;
    NSString *_squareTitle;
    UserSummaryNavigationBar *_userNavigationBar;
}

- (void)addCardList:(id)arg1 isRefresh:(_Bool)arg2;
- (void)addCustomNavigationBar;
- (void)autoRefresh;
- (id)backItemTitle;
- (void)configNavgationBar;
- (void)createUIFeedsWaterfall;
- (void)createUIShareGroup720;
- (void)dealloc;
- (void)didSelectVideoCardAtIndex:(unsigned long long)arg1 cardList:(id)arg2 feedIDList:(id)arg3;
- (void)doInitData;
- (void)doInitNotification;
- (void)dropViewDidBeginRefreshing:(id)arg1;
- (void)handleNavBarItemClick:(_Bool)arg1;
- (id)init;
- (id)initWithTitle:(id)arg1 style:(unsigned long long)arg2;
@property(nonatomic, getter=isDragToBack) _Bool dragToBack; // @synthesize dragToBack=_dragToBack;
@property(nonatomic, getter=isNavigationContentHidden) _Bool navigationContentHidden; // @synthesize navigationContentHidden=_navigationContentHidden;
- (_Bool)isSelfFeedCard:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)loadMoreData;
- (void)onCompleteDiscoveryCardList:(id)arg1 isRefresh:(_Bool)arg2 isEnd:(_Bool)arg3 withError:(id)arg4;
- (void)onDeleteVideo:(id)arg1;
- (void)onDragToGoBackEnable:(id)arg1;
- (void)onSendResult:(id)arg1;
- (void)onSending:(id)arg1;
- (void)onShareToDiscover:(id)arg1;
- (void)openVideoCaptureDataReport;
- (void)removeCustomNavigationBar;
- (void)requestRefreshData;
@property(retain, nonatomic) TBStoryCardInfoModel *selfShareFakeCardInfoModel; // @synthesize selfShareFakeCardInfoModel=_selfShareFakeCardInfoModel;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(nonatomic) NSString *squareTitle; // @synthesize squareTitle=_squareTitle;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) UserSummaryNavigationBar *userNavigationBar; // @synthesize userNavigationBar=_userNavigationBar;
- (void)shareGroupDiscoverViewDidScroll:(id)arg1;
- (void)showCaptureButton;
- (void)showCompressFailedAlert;
- (void)showDeleteAlert;
- (void)showFailedToast;
- (void)showResoreFailedAlert;
- (void)showShareToDiscoverSuccessAlert;
- (void)stopRefresh;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

