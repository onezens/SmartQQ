//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSubViewVideoChatViewController.h"

#import "MemberListViewControllerDelegate.h"

@class NSString, NSTimer, QQGroupVideoMemberListViewController, UIViewController;

@interface QQGroupAudioChatViewController : QQSubViewVideoChatViewController <MemberListViewControllerDelegate>
{
    UIViewController *_userSummaryController;
    NSTimer *_checkMemberNameTimer;
    _Bool _isSelfManager;
    _Bool _isSelfRoomCreator;
    QQGroupVideoMemberListViewController *_memberListController;
}

- (void)OnStartRemoteVideoFail;
- (void)checkAutoRequestAllView;
- (void)checkMemberName:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)dealloc;
- (_Bool)handleNetState;
- (void)initControlPanel;
- (void)initMemberCollectionView;
- (void)initNotification;
- (void)initShowPanel;
- (id)initWithRelationType:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (long long)numberOfItemInCollectionView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onCameraAction;
- (void)onCloseAction;
- (void)onDisableCameraAction;
- (void)onEnterBackGround;
- (void)onManageRoom;
- (void)onMemberGetIn:(int)arg1 withGroupID:(long long)arg2 inMemArray:(id)arg3;
- (void)onMicOffByAdminFailNotify;
- (void)onMuteAction;
- (void)onRecvAllVideo;
- (void)onReturnAction;
- (void)onSelfManagerChange:(id)arg1;
- (void)onSelfManagerUpdate:(id)arg1;
- (void)onSmallViewTouch:(id)arg1 withType:(int)arg2;
- (void)onSpeakerAction;
- (void)onToggleCameraAction;
- (void)onUpStageFail:(id)arg1;
- (void)onUpStageSuccess:(id)arg1;
- (void)requestRemoteVideo;
- (void)setupMultiMemberCell:(id)arg1 forUin:(unsigned long long)arg2;
- (void)startCheckMemberNameTimer;
- (void)unInitNofification;
- (void)updateButtonState;
- (void)viewController:(id)arg1 memberSelected:(unsigned long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

