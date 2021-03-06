//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QQReadInJoyMessageViewDelegate.h"
#import "QQReadInJoySubsDelegate.h"
#import "ReadInJoyMessageDelegate.h"
#import "TabControllerDelegate.h"

@class NSDate, NSMutableArray, NSString, QQReadInJoySubsViewController;

@interface QQReadInJoyMessageViewController : QQViewController <QQReadInJoyMessageViewDelegate, TabControllerDelegate, QQReadInJoySubsDelegate, ReadInJoyMessageDelegate>
{
    NSMutableArray *_messageArticleLists;
    NSMutableArray *_messageStrategyLists;
    NSMutableArray *_messageAlgorithmLists;
    NSDate *_enterDate;
    NSMutableArray *_dates;
    NSMutableArray *_labelList;
    _Bool _firstTimeLoadData;
    _Bool _isFirstAppearFromMsgTab;
    _Bool _isFromSearch;
    _Bool _isForceRefresh;
    _Bool _isForPageVC;
    _Bool _firstAppearFromTab;
    QQReadInJoySubsViewController *_subViewController;
    double _enterTime;
    id <ReadInJoyScrollViewDelegate> _scrollViewDelegate;
}

+ (void)handleMsgUnreadCountCleanWithUin:(id)arg1;
+ (double)kdUseDuration;
- (void)TabController:(id)arg1 cleanup:(id)arg2;
- (void)TabController:(id)arg1 didSelect:(id)arg2 from:(id)arg3;
- (void)TabController:(id)arg1 didUnSelect:(id)arg2 to:(id)arg3;
- (void)TabController:(id)arg1 menuLongPress:(id)arg2;
- (void)accountChanged;
- (void)becomeActive;
- (_Bool)checkNeedRefreshNew;
- (void)dataReportForUseDuration;
- (void)dealloc;
@property(nonatomic) double enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) _Bool firstAppearFromTab; // @synthesize firstAppearFromTab=_firstAppearFromTab;
- (double)getUseDuration;
- (void)goInterestLabelSetting;
- (id)init;
- (void)interestSettingUpdated;
@property(nonatomic) _Bool isForPageVC; // @synthesize isForPageVC=_isForPageVC;
@property(nonatomic) _Bool isForceRefresh; // @synthesize isForceRefresh=_isForceRefresh;
@property(nonatomic) _Bool isFromSearch; // @synthesize isFromSearch=_isFromSearch;
- (void)leftButtonDidReset;
- (void)loadOldChannelData;
- (void)loadReadInJoyViewNew;
- (void)loadView;
- (void)onExitReadInJoy;
- (void)openOrCloseNightMode;
- (void)parentTabWillDisappear;
- (void)preloadWebResource;
- (void)readInJoyMessageTabClicked:(_Bool)arg1;
- (void)readInJoyTabUnSelected;
- (void)readInJoyViewWillAppear;
- (void)readInJoyViewWillDisappear;
- (void)recordDuration;
- (void)refreshChannelDataNew;
- (void)refreshChannelDataNewWithTips;
- (void)refreshRIJChangeMessage:(id)arg1;
- (void)reportDataExpose;
- (void)reportEnterFeeds;
- (void)reportExitFeeds;
- (void)resetDuration;
- (void)resignActive;
@property(nonatomic) id <ReadInJoyScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
- (void)setControllerApperant;
- (void)setRefreshTime:(double)arg1 channelId:(unsigned int)arg2;
@property(retain, nonatomic) QQReadInJoySubsViewController *subViewController; // @synthesize subViewController=_subViewController;
- (_Bool)shouldRefresh:(unsigned int)arg1;
- (_Bool)shouldShowRefreshTip;
- (void)updateGoRIJTime;
- (void)updateOutRIJTime;
- (void)updateReadInJoyBrief;
- (void)updateReadInJoyOperationBitmap:(unsigned int)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

