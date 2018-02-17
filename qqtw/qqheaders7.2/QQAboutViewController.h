//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QQActionLabelDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer, UIImage, UITableView;

@interface QQAboutViewController : QQViewController <UIAlertViewDelegate, QQActionLabelDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSTimer *_reqTimeOutTimer;
    NSMutableArray *_dataSources;
    UITableView *_tableView;
    NSMutableDictionary *_pluginDic;
    UIImage *_QQLogoImage;
}

- (void)OnDeselectRowAtIndexPath:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)callTelNum:(id)arg1;
- (void)dealloc;
- (id)footView;
- (id)getJumpToURL:(id)arg1;
- (void)gotoWap;
- (void)gotoWapView:(id)arg1 webTitle:(id)arg2;
- (id)init;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)restoreData;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)touchActionWithType:(int)arg1 actionUrl:(id)arg2 title:(id)arg3;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

