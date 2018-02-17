//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QQMoreOptionTableViewCellScrollStateDelegate.h"
#import "QQPublicAccountServiceFolderCellDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, QQClusterMessageModel, UILongPressGestureRecognizer, UITableView, UIView;

@interface QQPublicAccountServiceFolderViewController : QQViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, QQMoreOptionTableViewCellScrollStateDelegate, QQPublicAccountServiceFolderCellDelegate>
{
    NSMutableArray *_leftSwipMsgKeyArray;
    UILongPressGestureRecognizer *_touchGestureRecognizer;
    QQClusterMessageModel *_msgModel;
    UITableView *_tableView;
    double _initTime;
    NSArray *_msgList;
    UIView *_emptyView;
}

- (void)PublicAccountUpdataMsgHandle:(id)arg1;
- (void)clearLeftSwipMsgKeyArray;
- (void)dealloc;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)getFolderCellModelKey:(id)arg1;
- (id)init;
- (void)initEmptyView;
@property(nonatomic) double initTime; // @synthesize initTime=_initTime;
- (id)initWithModel:(id)arg1;
- (_Bool)isFolderModelInLeftArray:(id)arg1;
- (_Bool)isMessageTabInLeftSwipState;
- (void)leftSwipTouchDown;
@property(retain, nonatomic) NSArray *msgList; // @synthesize msgList=_msgList;
@property(retain, nonatomic) QQClusterMessageModel *msgModel; // @synthesize msgModel=_msgModel;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onDeleteMessage:(id)arg1 report:(_Bool)arg2;
- (void)refreshTable;
- (void)refreshTableDelay;
- (struct CGRect)regionForSupportingRightDragToGoBack;
- (void)removeTouchGesture:(id)arg1;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 removeModelInRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 scrollBackToCenterStateInRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 scrollToLeftSwipStateInRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

