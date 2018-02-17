//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQStorySettingBaseViewController.h"

#import "QQSwitchViewCellDelegate.h"
#import "TBBizNetworkLogicDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UITableView;

@interface QQStoryGlobalSheildSettingViewController : QQStorySettingBaseViewController <UITableViewDelegate, UITableViewDataSource, QQSwitchViewCellDelegate, TBBizNetworkLogicDelegate>
{
    UITableView *_tableView;
    _Bool _selfConfigValue;
    _Bool _specialConfigValue;
    _Bool _strangerConfigValue;
    _Bool _strangerShowValue;
    unsigned int _allowStrangerDayNum;
    _Bool _autoPost2DiscoveryConfigValue;
    _Bool _autoPost2DiscoveryShowValue;
    _Bool _storyPublishFlagQualityConfigValue;
    _Bool _storyPublishFlagQualityShowValue;
    unsigned long long _entry;
}

- (void)QQSwitchViewCell:(id)arg1 switchBtnClicked:(id)arg2;
- (void)dealloc;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
@property(nonatomic) unsigned long long entry; // @synthesize entry=_entry;
- (void)handleError:(id)arg1;
- (void)handleSetConfig:(id)arg1;
- (id)headerView;
- (void)loadSettings;
- (_Bool)netAvailable;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)requestSetConfig:(unsigned int)arg1 key:(id)arg2;
- (void)requstGetSettingConfigs;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

