//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "CFFootViewDelegate.h"
#import "IAsynDownloadImageObserver.h"
#import "NearbyFriendDynamicAvatarDelegate.h"
#import "NearbyInterestTagFooterViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CFFootView, EGORefreshTableHeaderView, ITInterestPickerViewController, NSMutableArray, NSMutableDictionary, NSString, NearbyBannerTipView, NearbyInterestTagFooterView, QQTabWithInPageControl, QQViewController, QQZanTopView;

@interface NearbyFriendTableView : UITableView <NearbyInterestTagFooterViewDelegate, UITableViewDelegate, UITableViewDataSource, CFFootViewDelegate, IAsynDownloadImageObserver, NearbyFriendDynamicAvatarDelegate>
{
    unsigned long long _requestState;
    int _accType;
    _Bool _editRow;
    id <NearbyFriendTableViewDelegate> _tableDelegate;
    NSMutableArray *_dataList;
    EGORefreshTableHeaderView *_refreshHeaderView;
    CFFootView *_footerView;
    long long _listStyleType;
    QQZanTopView *_zanTopView;
    QQTabWithInPageControl *_segmentControl;
    int _xo;
    NearbyInterestTagFooterView *_editInterestTagFooterView;
    ITInterestPickerViewController *_interestPickerVC;
    NSMutableArray *_groupList;
    _Bool _showAds;
    long long _maxScanNumberForReport;
    NSMutableDictionary *_dynamicAvatarPlayedList;
    _Bool noBottomBar;
    _Bool _isHaveInterestTagOfSelf;
    _Bool _isPlayingVoteAnimation;
    QQViewController *_fatherVc;
    long long _filterInterestTagStyle;
    NearbyBannerTipView *_bannerTipView;
}

- (void).cxx_destruct;
- (void)actionDelNewGuidBanner:(id)arg1;
@property(retain, nonatomic) NearbyBannerTipView *bannerTipView; // @synthesize bannerTipView=_bannerTipView;
- (void)configCellSeparator:(id)arg1 cell:(id)arg2 indexPath:(id)arg3;
- (void)dealloc;
- (void)didEditInterestDone:(id)arg1;
- (void)enterEditInterestPage;
- (void)enterEditInterestPageWithType:(long long)arg1;
@property(nonatomic) __weak QQViewController *fatherVc; // @synthesize fatherVc=_fatherVc;
@property(nonatomic, setter=setFilterInterestTagStyle:) long long filterInterestTagStyle; // @synthesize filterInterestTagStyle=_filterInterestTagStyle;
- (id)getInterestTagSelectorViewControllerWithTag:(long long)arg1;
- (void)initListStyleCellView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)initNearbyFriendView:(id)arg1 withEncounterInfo:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, setter=setIsHaveInterestTagOfSelf:) _Bool isHaveInterestTagOfSelf; // @synthesize isHaveInterestTagOfSelf=_isHaveInterestTagOfSelf;
- (_Bool)isHaveInterestTagOfSelfWithTagType:(long long)arg1;
@property(nonatomic) _Bool isPlayingVoteAnimation; // @synthesize isPlayingVoteAnimation=_isPlayingVoteAnimation;
- (_Bool)isShouldShowEditInterestTagFooter;
- (id)nearbySummaryModelForEncounterInfo:(id)arg1;
@property(nonatomic, setter=setNoBottomBar:) _Bool noBottomBar; // @synthesize noBottomBar;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onDynamicAvatarReadyToPlayOnce:(id)arg1 cell:(id)arg2;
- (void)reLoadAdBanner;
- (void)reloadAppearance;
- (void)reportAdInfoClick:(id)arg1 withIndexPath:(id)arg2;
- (void)reportAdInfoExposure:(id)arg1 withIndexPath:(id)arg2;
- (void)reportNearbyRule;
@property(nonatomic, setter=setRequestState:) unsigned long long requestState; // @synthesize requestState=_requestState;
- (long long)scanMaxNumberForReport;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(retain, nonatomic) QQTabWithInPageControl *segmentControl; // @synthesize segmentControl=_segmentControl;
- (void)setEditInterestTagFooterViewWithTag:(long long)arg1;
@property(retain, nonatomic) QQZanTopView *zanTopView; // @synthesize zanTopView=_zanTopView;
- (_Bool)shouldPlayOnceDynamicAvatar:(id)arg1 cell:(id)arg2;
- (void)startRefresh:(id)arg1;
- (void)stopLoadMore;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableViewDidSelectAdInfo:(id)arg1 withIndexPath:(id)arg2;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;

// Remaining properties
@property(nonatomic) int accType; // @dynamic accType;
@property(retain, nonatomic) NSMutableArray *dataList; // @dynamic dataList;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool editRow; // @dynamic editRow;
@property(retain, nonatomic) CFFootView *footerView; // @dynamic footerView;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long listStyleType; // @dynamic listStyleType;
@property(retain, nonatomic) EGORefreshTableHeaderView *refreshHeaderView; // @dynamic refreshHeaderView;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <NearbyFriendTableViewDelegate> tableDelegate; // @dynamic tableDelegate;

@end
