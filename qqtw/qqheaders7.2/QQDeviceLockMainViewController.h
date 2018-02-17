//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QQDeviceLockDevicesReqDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UISwitch, UITableView;

@interface QQDeviceLockMainViewController : QQViewController <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, QQDeviceLockDevicesReqDelegate>
{
    UITableView *_tableView;
    UISwitch *_deviceLockSwitch;
    NSMutableArray *_dataSource;
    _Bool _wechatOptStatusLoaded;
    _Bool _authedDevicesLoaded;
    NSMutableArray *_authedDevices;
    _Bool _neededKickoff;
    NSArray *_orderedDataSource;
    _Bool _neededReload;
    _Bool _showOpenTips;
    _Bool _isRecommend;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)addAuthedSection;
- (void)addMobileSection;
- (void)addSwitchSection;
- (void)addWeChatSection;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)cellForAuthedAtRow:(long long)arg1;
- (id)cellForMobileAtRow:(id)arg1;
- (id)cellForSwitch;
- (id)cellForWeChatAtIndexPath:(id)arg1;
- (void)dealloc;
- (void)didClickAuthedRow:(long long)arg1;
- (void)didClickMobileRow:(id)arg1;
- (void)finishDelete:(_Bool)arg1 Device:(id)arg2;
- (void)finishQuery:(_Bool)arg1 Devices:(id)arg2;
- (double)heightForMobileFooter;
- (double)heightForSwitchFooter;
- (double)heightForWeChatFooter;
- (id)indexOfSection:(long long)arg1;
- (id)init;
@property(nonatomic) _Bool isRecommend; // @synthesize isRecommend=_isRecommend;
- (void)leftButtonClick:(id)arg1;
- (void)loadView;
- (_Bool)needShowBakMobile;
- (_Bool)needShowWeChatOpt;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onCloseDevLockResult:(id)arg1;
- (void)onFinishRenameDevice:(id)arg1;
- (void)onIntroductionClick;
- (void)onOpenDevLockResult:(id)arg1;
- (void)onSwitchClick:(id)arg1;
- (void)onWechatMsgOptResult:(id)arg1;
- (void)refreshTableViewData;
- (void)removeSection:(id)arg1;
- (id)rowsOfSection:(long long)arg1;
- (long long)sectionExisted:(id)arg1;
- (void)setLeftButtonTitle:(id)arg1;
@property(nonatomic) _Bool showOpenTips; // @synthesize showOpenTips=_showOpenTips;
- (void)sortSections;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)viewForAuthedHeader;
- (id)viewForMobileFooter;
- (id)viewForSwitchFooter;
- (id)viewForWeChatFooter;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

