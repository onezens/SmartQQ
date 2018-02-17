//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GroupOnlineMemberListViewDelegate.h"
#import "QQAIOEventDispatcherProtocol.h"

@class GroupOnlineMemberListView, NSArray, NSString, OnlineTitleView, QQWeakContainer;

@interface GroupOnlineMemberAioProcesser : NSObject <GroupOnlineMemberListViewDelegate, QQAIOEventDispatcherProtocol>
{
    GroupOnlineMemberListView *_onlineMemberListView;
    _Bool _isShowingList;
    _Bool _isListAnimating;
    _Bool _isTitleAnimating;
    _Bool _isIconAnimating;
    QQWeakContainer *_container;
    NSString *_groupCode;
    OnlineTitleView *_titleView;
    NSArray *_onlineList;
}

- (void)_jumpAnimation;
@property(retain, nonatomic) QQWeakContainer *container; // @synthesize container=_container;
- (_Bool)controller:(id)arg1 EndDraggingInTableView:(id)arg2 speed:(double)arg3 byUser:(_Bool)arg4;
- (_Bool)controller:(id)arg1 EndScrollBySetContenOffset:(id)arg2;
- (_Bool)controller:(id)arg1 EndScrollToTopTableView:(id)arg2;
- (_Bool)controllerViewDidAppear:(id)arg1;
- (_Bool)controllerViewDidLoad:(id)arg1;
- (_Bool)controllerViewWillAppear:(id)arg1;
- (_Bool)controllerViewWillDisappear:(id)arg1;
- (id)createOnlineTitleView:(id)arg1;
- (void)dealloc;
- (void)didDismiss;
- (void)didPressAvatar;
- (void)didShowKeyBoard:(id)arg1;
- (id)groupChatViewController;
@property(retain, nonatomic) NSString *groupCode; // @synthesize groupCode=_groupCode;
- (void)hideOnlienNavigationTitle;
- (void)hideOnlineList;
@property(nonatomic) _Bool isIconAnimating; // @synthesize isIconAnimating=_isIconAnimating;
@property(nonatomic) _Bool isTitleAnimating; // @synthesize isTitleAnimating=_isTitleAnimating;
- (void)jumpAnimation;
- (void)onBannerTipViewShow:(id)arg1;
- (void)onExitAnonymousMode:(id)arg1;
- (void)onGetAioOnlineGroupMember:(id)arg1;
@property(retain, nonatomic) NSArray *onlineList; // @synthesize onlineList=_onlineList;
- (void)setOnlineWording:(id)arg1;
@property(retain, nonatomic) OnlineTitleView *titleView; // @synthesize titleView=_titleView;
- (void)setupListView;
- (void)showGuideView;
- (void)showOnlineList:(id)arg1;
- (void)showOnlineNavigationTitle:(id)arg1;
- (void)stopJumpAnimation;
- (void)tapSubTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
