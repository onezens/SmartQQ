//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QQShareResultAlertViewDeleagte.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GroupPaymentRecordMemberSearch, NSMutableArray, NSString, QQActionSheet, QQCheckBoxDialog, QQTroopMemModel, UITableView;

@interface QQGroupPaymentRecordMemberViewController : QQViewController <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, QQShareResultAlertViewDeleagte>
{
    GroupPaymentRecordMemberSearch *_paymentRecordmemberSearchEngine;
    UITableView *_paymentRecordMemberTableView;
    NSMutableArray *_troopMemberArr;
    QQActionSheet *_actionSheet;
    QQTroopMemModel *_deletingMember;
    QQCheckBoxDialog *_dialog;
    int _actionSheetIndex;
    _Bool _isEditing;
    _Bool _firstAppear;
    _Bool _isFreshing;
    _Bool _hasDelMember;
    int _entranceType;
    unsigned long long _groupCode;
    NSString *_feeId;
    NSString *_callBack;
}

- (void).cxx_destruct;
- (void)QQShareResultAlertView:(id)arg1 clikedButtionAtIndex:(unsigned long long)arg2;
- (void)actionKickGroupMemberResponse:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) NSString *callBack; // @synthesize callBack=_callBack;
- (void)confirmEdit:(id)arg1;
- (void)dealloc;
@property(nonatomic) int entranceType; // @synthesize entranceType=_entranceType;
- (void)executeJSCallbackWithArgument:(id)arg1;
@property(retain, nonatomic) NSString *feeId; // @synthesize feeId=_feeId;
- (id)getTopWebViewController;
@property(nonatomic) unsigned long long groupCode; // @synthesize groupCode=_groupCode;
- (id)init;
- (_Bool)isSupportFullScreenLayout;
- (void)leftButtonClick:(id)arg1;
- (void)loadGroupMemberListData:(_Bool)arg1;
- (void)loadGroupMemberListDataRefresh;
- (void)loadView;
- (void)memberCellSelected:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onGroupFeeMemberListRspCallback:(id)arg1;
- (void)onRemoveUserFromGroupMemberCardSuccNotify:(id)arg1;
- (void)onRemoveUserFromGroupSuccNotify:(id)arg1;
- (void)reloadData;
- (void)rightButtonClick:(id)arg1;
- (void)showTips:(id)arg1 success:(_Bool)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
