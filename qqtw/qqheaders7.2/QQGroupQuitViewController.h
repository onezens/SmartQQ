//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupTableStyleViewController.h"

#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class GroupMemHeadView, NSMutableArray, NSString, QQGroupSettingModel, UIView, UIViewController;

@interface QQGroupQuitViewController : QQGroupTableStyleViewController <UIActionSheetDelegate, UIAlertViewDelegate>
{
    QQGroupSettingModel *_groupModel;
    _Bool _bSucGetTime;
    UIView *header;
    unsigned int _groupCreateTime;
    GroupMemHeadView *_memView;
    NSMutableArray *_memUinArray;
    NSMutableArray *_transferMemberUinArray;
    NSMutableArray *_transferMemberFlagArray;
    UIViewController *_parent;
}

- (void)ActionDismissGroupRespond:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)createInformationModels;
- (void)dealloc;
- (id)defaultStyleCellWithIdentifier:(id)arg1;
- (id)initWithGroupSettingModel:(id)arg1;
- (void)loadView;
- (void)onDismissGroupBtnClick:(id)arg1;
- (void)onGetSixGroupMemUinsNotify:(id)arg1;
- (void)onGetTransferGroupMemUinsNotify:(id)arg1;
- (void)onTransferGroupBtnClick:(id)arg1;
@property(nonatomic) UIViewController *parent; // @synthesize parent=_parent;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

