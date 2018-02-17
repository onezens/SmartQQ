//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "BCardDetailBottomViewDelegate.h"
#import "BCardDetailTableCellAddButtonDelegate.h"
#import "BCardDetailTableCellHeaderViewDelegate.h"
#import "BCardDetailTableCellMultiLineInputDelegate.h"
#import "BCardDetailTableCellNormalDelegate.h"
#import "MulMemSelBusiProcessDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class BCardDetailBottomView, BCardDetailHandler, BCardDetailHeaderView, BCardDetailTableView, BCardDetailViewModel, NSString, UITapGestureRecognizer;

@interface BCardDetailBaseController : QQViewController <UITableViewDelegate, UITableViewDataSource, BCardDetailBottomViewDelegate, BCardDetailTableCellAddButtonDelegate, BCardDetailTableCellHeaderViewDelegate, BCardDetailTableCellNormalDelegate, MulMemSelBusiProcessDelegate, BCardDetailTableCellMultiLineInputDelegate>
{
    BCardDetailTableView *_cardDetailTableView;
    BCardDetailBottomView *_cardDetailBottomView;
    BCardDetailHeaderView *_cardHeaderTableView;
    BCardDetailViewModel *_cardViewModel;
    BCardDetailHandler *_cardDetailHandler;
    UITapGestureRecognizer *_tableRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BCardDetailBottomView *cardDetailBottomView; // @synthesize cardDetailBottomView=_cardDetailBottomView;
@property(retain, nonatomic) BCardDetailHandler *cardDetailHandler; // @synthesize cardDetailHandler=_cardDetailHandler;
@property(retain, nonatomic) BCardDetailTableView *cardDetailTableView; // @synthesize cardDetailTableView=_cardDetailTableView;
@property(retain, nonatomic) BCardDetailHeaderView *cardHeaderTableView; // @synthesize cardHeaderTableView=_cardHeaderTableView;
@property(retain, nonatomic) BCardDetailViewModel *cardViewModel; // @synthesize cardViewModel=_cardViewModel;
- (void)changeNewCardStatus:(id)arg1;
- (void)createRightButton;
- (void)dealloc;
- (void)hideKeyboard;
- (id)init;
- (_Bool)isSupportFullScreenLayout;
- (_Bool)isSupportRightDragToGoBack;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)loadView;
- (void)refreshCardInfoView:(id)arg1;
- (void)refreshView;
- (void)registerNotifications;
- (void)resetData:(_Bool)arg1;
- (void)setNavRightButtonEnabled:(_Bool)arg1;
@property(retain, nonatomic) UITapGestureRecognizer *tableRecognizer; // @synthesize tableRecognizer=_tableRecognizer;
- (void)setVCTitle;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

