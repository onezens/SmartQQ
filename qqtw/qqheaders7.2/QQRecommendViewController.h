//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "DynamicButtonClickDelegate.h"
#import "QQDynamicMoreDidChangeDelegate.h"
#import "SimpleAlertViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIDocumentInteractionControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HeadButtonLongPress, NSMutableArray, NSString, NSTimer, QQAvatarView, QQReportLogModel, QQUnreadTagCountManager, UIImageView, UISearchBar, UITableView;

@interface QQRecommendViewController : QQViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, UIActionSheetDelegate, SimpleAlertViewDelegate, DynamicButtonClickDelegate, UIDocumentInteractionControllerDelegate, QQDynamicMoreDidChangeDelegate>
{
    NSMutableArray *_dataSources;
    _Bool _showNew;
    UIImageView *_rightButtonFlagView;
    NSTimer *_CallPluginTimer;
    _Bool _hasPushNotifiction;
    _Bool _needReloadData;
    _Bool _bHasChangedPluginData;
    NSMutableArray *_pluginIDArray;
    QQUnreadTagCountManager *_unreadTagCountManager;
    _Bool _isDisplayFormClickTab;
    UISearchBar *_dynamicSearchBar;
    UITableView *_tableView;
    QQReportLogModel *_logModel;
    HeadButtonLongPress *_headButton;
    _Bool _is6Plus;
    QQAvatarView *_qzoneHeadView;
    _Bool _viewDidShown;
    _Bool _fromGuiderView;
}

- (void)ArrangeCell:(id)arg1;
- (void)actionCampusCircleClicked:(id)arg1;
- (void)actionCell:(id)arg1;
- (void)actionMoreCell:(id)arg1;
- (void)activeFTSEntrance:(_Bool)arg1;
- (void)checkForPluginShowTabBarHint;
- (void)checkIfNew:(id)arg1;
- (void)checkRedPointForNearby:(id)arg1;
- (void)checkRedPointUnreadCount;
- (void)checkShowHintInCell:(id)arg1 item:(id)arg2;
- (void)checkShowTabBarHint;
- (void)clearReadInjoyItem:(id)arg1;
- (void)clickBottomTab;
- (void)dataSourceInit;
- (void)dealloc;
- (void)drawSubView;
- (void)dynamicMoreDidChangePluginData;
- (void)dynamicMoreDidChangePluginDataChange:(id)arg1;
@property(nonatomic) _Bool fromGuiderView; // @synthesize fromGuiderView=_fromGuiderView;
- (id)getPluginPicUrl:(id)arg1;
- (unsigned int)getStoryID;
- (id)getWapUrl:(id)arg1;
- (void)groupActivityOnLoad;
- (void)handleDynamicTopItems:(long long)arg1;
- (id)init;
- (_Bool)isGameIDWeb:(id)arg1;
- (_Bool)isPluginEnabled:(unsigned long long)arg1;
- (_Bool)isSupportFullScreenLayout;
- (void)layouRightButtonRedPoint:(id)arg1 subViews:(id)arg2;
- (void)loadExternalWap:(id)arg1;
- (void)loadPersonalTheme;
- (void)loadView;
- (int)nearbyUnreadCount;
- (void)notifyNearbyUnreadCountUpdate;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAccountLogout;
- (void)onCleanStoryNumberRedPoint:(id)arg1;
- (void)onFeedUnreadNumberUpdate:(id)arg1;
- (void)onGroupCleanNumberRedPoint:(id)arg1;
- (void)onGroupReddotUpdated:(id)arg1;
- (void)onHeadButtonClick;
- (void)onPluginDataRefresh;
- (void)onQZoneDidShow:(id)arg1;
- (void)onReadInJoyPushUpdate:(id)arg1;
- (void)onStoryCommonConfigUpdate:(id)arg1;
- (void)onWillEnterForeground;
- (void)popViewControllerWithAccountChange;
- (void)printPluginDataSource;
- (void)qqDynamicSearchRecommendedWordUpdateNotification:(id)arg1;
- (void)readInjoyInit:(id)arg1;
- (void)readinjoyReportWithItem:(id)arg1;
- (id)redPointTableView;
- (void)reloadAppearance;
- (void)reloadData;
- (void)reportExposure;
- (void)reportMoreButton:(long long)arg1;
- (void)reportQZoneFeedHint:(_Bool)arg1;
- (void)requestGetIsCompleteNearbyUserSummary;
- (void)resetStoryRedNum:(id)arg1;
- (void)searchBarBookmarkButtonClicked:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)setReadInJoyNew:(id)arg1;
- (void)setReadInJoyNumber:(id)arg1 unreadCount:(unsigned long long)arg2;
- (void)setReadInJoyRedPoint:(id)arg1 tips:(id)arg2;
- (void)setReadInJoySendFailed:(id)arg1;
- (void)setThemeBackground;
- (void)showDynamicMore;
- (void)showNearbyEntrance;
- (void)showNearbyGroupViewController;
- (void)showNewIcon;
- (void)showView;
- (void)storyClickUpload;
- (void)storyShowUpload;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 redPointPathForIndex:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tribeEntryExposion;
- (void)updateCampusCircleRedPointInfoForItem:(id)arg1;
- (void)updateRedPointDynamicTabForCampusCircle;
- (void)updateToNewDynamicVC;
- (void)updateUnreadTagCountManagerFilter;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (int)viewTag;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) HeadButtonLongPress *headButton; // @dynamic headButton;
@property(retain, nonatomic) QQReportLogModel *logModel; // @dynamic logModel;
@property(readonly) Class superclass;
@property(retain, nonatomic) UITableView *tableView; // @dynamic tableView;

@end
