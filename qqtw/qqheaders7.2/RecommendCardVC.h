//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "CardsContainerViewDataDelegate.h"
#import "CardsContainerViewDelegate.h"

@class AddFriendSendMessageViewController, CardsContainerView, NSArray, NSMutableArray, NSString, RecommendServerConfig, UIViewController;

@interface RecommendCardVC : QQViewController <CardsContainerViewDataDelegate, CardsContainerViewDelegate>
{
    AddFriendSendMessageViewController *_addFriendSendMessageViewController;
    CardsContainerView *_cardsContainer;
    RecommendServerConfig *_config;
    NSArray *_dataRecommendShow;
    NSMutableArray *_dataRecommendFriends;
    NSMutableArray *_dataHiddenFriends;
    long long _indexTopCard;
    _Bool _didViewAppear;
    _Bool _needRefresh;
    UIViewController *_hostViewController;
    UIViewController *_entranceViewController;
}

- (void).cxx_destruct;
- (void)LoadData;
- (void)LoadHiddenData;
- (void)WriteHiddenData:(id)arg1;
- (void)WriteHiddenTime;
- (void)WriteIgnoreTotalTimes:(unsigned long long)arg1;
- (void)btnAddedFriend:(id)arg1;
- (void)btnHeadImg:(id)arg1;
- (void)cacheDataDidUpdated:(id)arg1;
- (id)cardsContainerView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2;
- (id)convertToLocalDate:(id)arg1;
- (void)dealloc;
- (void)didReceivedAddFriendResponse:(id)arg1;
- (void)didReceivedNewFriendAcceptAddNotification:(id)arg1;
@property(nonatomic) __weak UIViewController *entranceViewController; // @synthesize entranceViewController=_entranceViewController;
- (id)findFriendWithUin:(id)arg1;
- (void)hiddenView:(_Bool)arg1;
@property(nonatomic) __weak UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
- (id)init;
- (_Bool)isNeedShowCard;
- (void)loopToFirstCard;
- (void)notifyRemovedFriend:(id)arg1;
- (_Bool)refreshTopCard;
- (void)reloadAppearance;
- (void)reloadData;
- (void)reloadDataAfterDelay;
- (void)removeFriendDB:(id)arg1;
- (void)removeTopCard:(long long)arg1 view:(id)arg2;
- (void)removedCardData:(id)arg1;
- (void)removedFriend:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)showTopCard:(long long)arg1 view:(id)arg2;
- (void)updateCardFirstDisplayTime:(id)arg1;
- (void)updateCardsContainer;
- (void)updateFriendDB:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

