//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "UITableViewDelegate.h"

@class NSString, QQClusterMessageModel, QQMessageView;

@interface QQBaseClusterMessageViewController : QQViewController <UITableViewDelegate>
{
    QQClusterMessageModel *_model;
    QQMessageView *_messageView;
    NSString *_topTipsString;
    _Bool _objAvailable;
}

- (void)ActionGetQQMessage:(id)arg1;
- (void)dealloc;
- (void)delayActionGetQQMessage;
- (void)enableReloadTableView:(id)arg1;
- (id)initWithModel:(id)arg1 topString:(id)arg2;
- (_Bool)isSupportRightDragToGoBack;
- (void)onForceOffLineNotify;
- (void)readLoadMessageView;
- (void)refreshMessageViewData;
- (void)showTopTipsView;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) QQMessageView *messageView; // @dynamic messageView;
@property(retain, nonatomic) QQClusterMessageModel *model; // @dynamic model;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *topTipsString; // @dynamic topTipsString;

@end
