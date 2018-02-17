//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSearchBaseViewController.h"

#import "FriendListHeaderViewDelegate.h"
#import "QQSearchResultClickResponding.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSDictionary, NSMutableArray, NSString, UITableView;

@interface QQFriendSelectedFriendViewController : QQSearchBaseViewController <QQSearchResultClickResponding, UITableViewDelegate, UITableViewDataSource, FriendListHeaderViewDelegate>
{
    NSMutableArray *_friendList;
    UITableView *_tableView;
    _Bool _isShowOnline;
    _Bool _isFromSpecialRemind;
    _Bool _shouldFilterBizAccount;
    int _ctrlType;
    id <FriendSelectedChildViewDeletage> _delegate;
    id <QQThirdAppShareCancelDelegate> _delegateThirdAppShareCanel;
    NSDictionary *_otherParams;
}

- (void).cxx_destruct;
- (void)_handleAccessibilityPrompt:(id)arg1;
- (void)actionClosedViewController;
@property(nonatomic) int ctrlType; // @synthesize ctrlType=_ctrlType;
- (void)dealloc;
@property(nonatomic) __weak id <FriendSelectedChildViewDeletage> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <QQThirdAppShareCancelDelegate> delegateThirdAppShareCanel; // @synthesize delegateThirdAppShareCanel=_delegateThirdAppShareCanel;
- (void)friendListHeaderViewDidTouch:(id)arg1;
- (void)initCellForFriend:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithSearchFilter:(int)arg1;
@property(nonatomic) _Bool isFromSpecialRemind; // @synthesize isFromSpecialRemind=_isFromSpecialRemind;
@property(nonatomic) _Bool isShowOnline; // @synthesize isShowOnline=_isShowOnline;
- (_Bool)isSupportFullScreenLayout;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onResultCellClick:(id)arg1;
@property(retain, nonatomic) NSDictionary *otherParams; // @synthesize otherParams=_otherParams;
- (void)reloadFriend;
- (id)removeBizAccount:(id)arg1;
- (id)removeBizAccountFromFriendList:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
@property(nonatomic) _Bool shouldFilterBizAccount; // @synthesize shouldFilterBizAccount=_shouldFilterBizAccount;
- (id)sortByNetworkstateAndNick:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

