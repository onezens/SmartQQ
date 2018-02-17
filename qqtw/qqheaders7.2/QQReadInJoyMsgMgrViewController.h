//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, QQReadINJoyPushButtonFunc, UITableView;

@interface QQReadInJoyMsgMgrViewController : QQViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate>
{
    UITableView *_tableView;
    QQReadINJoyPushButtonFunc *_kdPushButtonFuncs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QQReadINJoyPushButtonFunc *kdPushButtonFuncs; // @synthesize kdPushButtonFuncs=_kdPushButtonFuncs;
- (void)layoutSubviews;
- (id)newKdPushCell;
- (id)newPaMgrCell;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGRect)regionForSupportingRightDragToGoBack;
- (void)reportPaMgrCellTouched;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
