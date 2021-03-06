//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMultiMemberSelectorBaseViewController.h"

#import "IQSContactsEngineObserver.h"
#import "MulMemSelSearchResultTableViewDelegate.h"
#import "MulMemSelSubPageTableViewDelegate.h"

@class MulMemSelSearchResultTableView, MulMemSelSubPageTableView, NSArray, NSMutableArray, NSString, QQGroupMemLoadingView, QQRelationSearchEngine;

@interface QQMultiMemberSelectorSubPageViewController : QQMultiMemberSelectorBaseViewController <MulMemSelSubPageTableViewDelegate, MulMemSelSearchResultTableViewDelegate, IQSContactsEngineObserver>
{
    int _currRlType;
    NSString *_listID;
    NSMutableArray *_subPageDataList;
    MulMemSelSubPageTableView *_mulMemSelSubPageTableView;
    MulMemSelSearchResultTableView *_mulMemSelSearchResultTableView;
    QQRelationSearchEngine *_searchEngine;
    int _selectType;
    NSArray *orgSelectedMemUins;
    _Bool _needShowMyself;
    _Bool _isOnlyShowAdmi;
    _Bool _hideRobot;
    NSArray *_filterMembers;
    QQGroupMemLoadingView *_loadingView;
    NSArray *_troopModleCacheArray;
}

- (void).cxx_destruct;
- (_Bool)CheckOverSelectLimit:(unsigned long long)arg1;
- (void)actionBusiHandle:(id)arg1;
- (void)actionGetTroopMember:(id)arg1 result:(_Bool)arg2;
- (void)dealloc;
- (id)filter:(id)arg1 withMembers:(id)arg2;
@property(retain, nonatomic) NSArray *filterMembers; // @synthesize filterMembers=_filterMembers;
- (void)getTroopMemberProgress:(id)arg1;
- (void)getTroopMemberResult:(id)arg1;
- (void)handleSelectAllSubPageMember:(_Bool)arg1;
- (void)handleSelectSubPageMember:(id)arg1 needDeleteAction:(_Bool)arg2 noAnimation:(_Bool)arg3;
- (void)handleSelectSubPageMemberCallback:(id)arg1;
@property(nonatomic) _Bool hideRobot; // @synthesize hideRobot=_hideRobot;
- (void)initDataSource;
- (id)initWithMulMemSelUserInfo:(id)arg1 memCustomSearchBar:(id)arg2 withDelegate:(id)arg3 withListID:(id)arg4;
@property(nonatomic) _Bool isOnlyShowAdmi; // @synthesize isOnlyShowAdmi=_isOnlyShowAdmi;
- (void)loadSearchSource;
- (void)loadView;
@property(retain, nonatomic) QQGroupMemLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool needShowMyself; // @synthesize needShowMyself=_needShowMyself;
- (void)notifyUpdateBindingInfo:(id)arg1;
- (void)onDidScrollSearchResultView;
- (void)onDidScrollSubPageMemView;
- (_Bool)onDidSelectAll:(_Bool)arg1;
- (void)onDidSelectSubPageMemCallback:(id)arg1 forSelAll:(_Bool)arg2;
- (void)onDidSelectedSearchResultCallback:(id)arg1;
- (void)onHandleMemberListStateUpdateCallback;
- (void)onHandleSearchResultShowCallback:(id)arg1;
- (void)onHandleSearchSourceLoad;
- (void)sendSelectedMemInfo;
- (void)setLoadingProgress:(double)arg1 text:(id)arg2;
- (void)setTopView:(id)arg1 withFrame:(struct CGRect)arg2;
@property(retain, nonatomic) NSArray *troopModleCacheArray; // @synthesize troopModleCacheArray=_troopModleCacheArray;
- (void)showLoadingView:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(nonatomic) int currRlType; // @dynamic currRlType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *listID; // @dynamic listID;
@property(retain, nonatomic) MulMemSelSearchResultTableView *mulMemSelSearchResultTableView; // @dynamic mulMemSelSearchResultTableView;
@property(retain, nonatomic) MulMemSelSubPageTableView *mulMemSelSubPageTableView; // @dynamic mulMemSelSubPageTableView;
@property(retain, nonatomic) QQRelationSearchEngine *searchEngine; // @dynamic searchEngine;
@property(retain, nonatomic) NSMutableArray *subPageDataList; // @dynamic subPageDataList;
@property(readonly) Class superclass;

@end

