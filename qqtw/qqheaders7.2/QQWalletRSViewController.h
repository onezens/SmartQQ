//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWalletBaseViewController.h"

#import "CAAnimationDelegate.h"
#import "QQWalletCardContainerViewDelegate.h"
#import "QQWalletCardViewDelegate.h"
#import "QQWalletRSCellClickedDelegate.h"

@class NSMutableArray, NSString, QQWalletCardContainerView, QQWalletDatas, QQWalletEntry, UIButton, UILabel, UIView;

@interface QQWalletRSViewController : QQWalletBaseViewController <QQWalletRSCellClickedDelegate, QQWalletCardContainerViewDelegate, QQWalletCardViewDelegate, CAAnimationDelegate>
{
    QQWalletDatas *_walletData;
    long long _walletPoint;
    NSMutableArray *_externalEntries;
    QQWalletEntry *_walletPointEntry;
    QQWalletEntry *_addCardEntry;
    QQWalletEntry *_creditCardEntry;
    NSString *_transactionRecordUrl;
    NSString *_extralEntryName;
    NSString *_extralEntryUrl;
    UILabel *_balanceLabel0;
    UILabel *_balanceLabel1;
    UILabel *_qcoinLabel0;
    UILabel *_qcoinLabel1;
    UIButton *_button0;
    UIButton *_button1;
    UIButton *_button2;
    UIView *_leftBtnView;
    QQWalletCardContainerView *_cardContainerView;
    UIView *_extralEntryView;
    UIView *_tableHeaderView;
    UIView *_tableFooterView;
    _Bool _enterFromWallet;
    _Bool _showQBButton;
}

- (id)RSCellForTableView:(id)arg1 forCellType:(int)arg2;
- (void)adjustHeaderViewLayout;
- (void)balanceButtonDidTap:(id)arg1;
- (void)bindCard;
- (id)buttonWithImage:(id)arg1 title:(id)arg2;
- (void)checkQQCoinBalance;
- (void)checkTenpayData;
- (void)commonInit;
- (id)createLabelWithText:(id)arg1;
- (id)createSectionFooterView;
- (id)createTableFooterView;
- (id)createTableHeaderView;
- (void)dealloc;
- (void)didCardTapped:(int)arg1 withRectInWindow:(struct CGRect)arg2;
- (void)didClickedCell:(id)arg1;
- (void)extralEntryButtonDidTap:(id)arg1;
- (void)handleRequestError:(id)arg1;
- (double)heightForCardContainerView;
- (double)heightForEntryCell;
- (double)heightForSectionFooterView;
- (id)init;
- (_Bool)isExtralEntryAvailable;
- (_Bool)isSupportRightDragToGoBack;
- (void)loadView;
- (double)maxValue1:(double)arg1 value2:(double)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)parseQQWalletAccountConfig:(id)arg1;
- (void)qcoinButtonDidTap:(id)arg1;
- (void)rechargeDidTap;
- (void)rechargeQBDidTap;
- (void)requestAccountServicesUseCache:(_Bool)arg1;
- (void)requestCreditPoint;
- (void)securityTips;
- (void)setFakeRedPointShow:(_Bool)arg1 path:(id)arg2;
- (void)showBankCard:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)showFrontCardView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tapTableHeaderView:(id)arg1;
- (void)tenpayRecords;
- (void)updateQQCoinBalance;
- (void)updateTenpayBalance;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)withdrawDidTap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

