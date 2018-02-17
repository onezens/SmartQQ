//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QQReadInJoyChannelManagerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class MeControlHeaderTableViewCell, NSArray, NSString, UITableView, UIView;

@interface QQReadinjoyMeController : QQViewController <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, UITextFieldDelegate, QQReadInJoyChannelManagerDelegate>
{
    _Bool _formIndependentTab;
    _Bool _isNightMode;
    unsigned int _followedCount;
    unsigned int _fansCount;
    unsigned int _isforbidden;
    UITableView *_setupTableview;
    NSArray *_tableSettingDatasource;
    UIView *_bubble;
    MeControlHeaderTableViewCell *_headerTableCellView;
}

+ (void)changeNavigationBarApperance:(id)arg1;
+ (_Bool)hasNewMsg;
+ (void)preDownloadCgi;
+ (void)preload;
- (id)CreateSetupSourceItemWidthSelectedSEL:(id)arg1 swtichButtonSEL:(id)arg2 itemText:(id)arg3 buttonType:(long long)arg4;
- (id)CreateUItableCell:(id)arg1;
- (void)SetNightModeLayer;
- (void)SetSectionCommonTableviewCell:(id)arg1 NSIndexPath:(id)arg2;
- (void)SetSubViews;
- (void)TabController:(id)arg1 TipsShow:(id)arg2 Data:(id)arg3;
- (void)TableviewDataSourceOpen;
- (void)addFeedBack:(id)arg1;
@property(retain, nonatomic) UIView *bubble; // @synthesize bubble=_bubble;
- (void)bubbleTap:(id)arg1;
- (void)clickTopSwitch:(id)arg1;
- (void)closeBubbleView;
- (void)configSetupTableview;
- (void)createBubble:(id)arg1 rect:(struct CGRect)arg2;
- (id)createBubbleView;
- (void)dealloc;
@property(nonatomic) unsigned int fansCount; // @synthesize fansCount=_fansCount;
@property(nonatomic) unsigned int followedCount; // @synthesize followedCount=_followedCount;
@property(nonatomic) _Bool formIndependentTab; // @synthesize formIndependentTab=_formIndependentTab;
- (id)getTableItemModeByIndexPath:(id)arg1;
- (void)gotoDebug:(id)arg1;
- (void)gotoMyBiu:(id)arg1;
- (void)gotoMyConcern;
- (void)gotoMyHistory;
- (void)gotoMyMessage:(id)arg1;
- (void)gotoSettingSelector:(id)arg1;
- (void)gotoWebView:(id)arg1;
@property(retain, nonatomic) MeControlHeaderTableViewCell *headerTableCellView; // @synthesize headerTableCellView=_headerTableCellView;
- (id)init;
@property(nonatomic) _Bool isNightMode; // @synthesize isNightMode=_isNightMode;
@property(nonatomic) unsigned int isforbidden; // @synthesize isforbidden=_isforbidden;
- (void)leftButtonDidReset;
- (void)newMsgForRead:(int)arg1;
- (void)newMsgReceived:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onFansCountBtnClick:(id)arg1;
- (void)onFollowdCountBtnClick:(id)arg1;
- (void)openFeedBackUrl;
- (struct CGRect)regionForSupportingRightDragToGoBack;
- (void)releaseArray:(id)arg1;
- (void)setControllerApperant:(id)arg1;
@property(retain, nonatomic) UITableView *setupTableview; // @synthesize setupTableview=_setupTableview;
@property(retain, nonatomic) NSArray *tableSettingDatasource; // @synthesize tableSettingDatasource=_tableSettingDatasource;
- (void)setTopReadinJoySwitchWidthTablecell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)unreadCountChange:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

