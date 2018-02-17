//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "APMidasImgVerifyCodeViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class APMidasBizManager, APMidasUIChannelOrderView, NSString, UITableView, UIView;

@interface APMidasCardInputViewController : QQViewController <UITableViewDataSource, UITableViewDelegate, APMidasImgVerifyCodeViewControllerDelegate>
{
    NSString *_inputWrongPromptString;
    APMidasUIChannelOrderView *_orderView;
    NSString *_cardNoInputTitle;
    NSString *_pswInputTitle;
    NSString *_placeHolder;
    UIView *_btn;
    NSString *_amount;
    NSString *_price;
    unsigned long long _cardNoMaxLen;
    unsigned long long _cardNoGroupSize;
    unsigned long long _cardNoMinLen;
    unsigned long long _pswMaxLen;
    unsigned long long _pswMinLen;
    unsigned long long _pswGroupSize;
    UITableView *_tableView;
    _Bool _frameShifted;
    APMidasBizManager *bizManager;
}

+ (id)cardInputVcWithTitle:(id)arg1 cardNoInputTitle:(id)arg2 cardPswTitle:(id)arg3;
- (id)GetCurrentTitle;
@property(nonatomic) APMidasBizManager *bizManager; // @synthesize bizManager;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTitle:(id)arg1 cardNoInputTitle:(id)arg2 cardPswTitle:(id)arg3;
- (void)leftButtonClick:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onBackToUiError:(long long)arg1 innerError:(id)arg2 msg:(id)arg3;
- (void)onBackToUiSuccess;
- (void)onKeyBoardHide:(id)arg1;
- (void)onKeyBoardShow:(id)arg1;
- (void)onNetworkError:(long long)arg1;
- (void)onPayImmediately;
- (void)onVcInputViewControllerClose:(id)arg1;
- (void)onVcInputViewControllerConfirm:(id)arg1;
- (void)reSetLeftButtonTitle;
- (void)resetData;
- (void)save;
- (void)setCardNoGroupSize:(unsigned long long)arg1;
- (void)setCardNoInputPlaceHolder:(id)arg1;
- (void)setCardNoMaxLen:(unsigned long long)arg1;
- (void)setCardNoMinLen:(unsigned long long)arg1;
- (void)setPswGroupSize:(unsigned long long)arg1;
- (void)setPswMaxLen:(unsigned long long)arg1;
- (void)setPswMinLen:(unsigned long long)arg1;
- (void)setSaveAmount:(id)arg1 price:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)showWrongCardNoOrPswAlert;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)validateCardNo:(id)arg1 psw:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *inputWrongPromptString; // @dynamic inputWrongPromptString;
@property(readonly) Class superclass;

@end

