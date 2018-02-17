//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "PagingScrollViewDataSource.h"
#import "PagingScrollViewDelegate.h"
#import "QQActivateFriendsMemorialDayViewDelegate.h"
#import "QQFriendSelectedViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSMutableArray, NSString, PagingScrollView, QQActivateFriendsMemorialDaySharedView, QQActivateFriendsModel, QQFriendSelectedViewController, QQPageControl;

@interface QQActivateFriendsViewController : QQViewController <UIActionSheetDelegate, PagingScrollViewDataSource, PagingScrollViewDelegate, QQActivateFriendsMemorialDayViewDelegate, QQFriendSelectedViewControllerDelegate>
{
    PagingScrollView *_pagingScrollView;
    QQPageControl *_pageControl;
    QQActivateFriendsModel *_currentModel;
    NSMutableArray *_locationViewFriendList;
    NSMutableArray *_birthdayViewFriendList;
    NSMutableArray *_memorialViewFriendList;
    int _xo;
    _Bool _pushTag;
    QQActivateFriendsMemorialDaySharedView *_sharedView;
    QQFriendSelectedViewController *_fileSelectedViewController;
}

- (void)GetAccpetAFMsgSwitch:(id)arg1;
- (void)SetAccpetAFMsgSwitch:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)changeCollectionViewPage:(id)arg1;
- (void)clickCheckDetailButton:(id)arg1;
- (void)clickSharedFriendButton:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) QQFriendSelectedViewController *fileSelectedViewController; // @synthesize fileSelectedViewController=_fileSelectedViewController;
- (id)getCheckDetailUrl:(id)arg1;
- (void)handleSheetEvent;
- (id)handleTime:(id)arg1 isDay:(_Bool)arg2;
- (id)init;
- (_Bool)isSupportRightDragToGoBack;
- (void)loadBirthdayViewData;
- (void)loadData;
- (void)loadLocationViewData;
- (void)loadMemorialViewData;
- (void)loadPageControl;
- (void)loadPagingScrollView;
- (void)loadRightButton;
- (void)loadView;
- (long long)numberOfItemsInPagingScrollView:(id)arg1;
- (void)pagingScrollView:(id)arg1 didScrollToItemAtIndex:(long long)arg2;
- (id)pagingScrollView:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (void)receivedActivateFriendsRefreshNotification:(id)arg1;
- (void)receivedProfileChangedNotification:(id)arg1;
- (void)refreshAfterPushTimeOut;
- (void)reloadData;
- (void)shareToFriendCancelled;
- (void)shareToFriendSuccess;
- (void)showActionSheet;
- (void)sindGiftFinished:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(copy, nonatomic) NSMutableArray *birthdayViewFriendList; // @dynamic birthdayViewFriendList;
@property(retain, nonatomic) QQActivateFriendsModel *currentModel; // @dynamic currentModel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableArray *locationViewFriendList; // @dynamic locationViewFriendList;
@property(copy, nonatomic) NSMutableArray *memorialViewFriendList; // @dynamic memorialViewFriendList;
@property(retain, nonatomic) QQPageControl *pageControl; // @dynamic pageControl;
@property(retain, nonatomic) PagingScrollView *pagingScrollView; // @dynamic pagingScrollView;
@property(readonly) Class superclass;

@end

