//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQGroupAVInputViewDelegate.h"

@class NSDate, NSMutableDictionary, NSString, NSTimer, QQGroupVideoChatViewController;

@interface QQGroupAVMessageLogic : NSObject <QQGroupAVInputViewDelegate>
{
    NSMutableDictionary *_getInMemberMsgTime;
    NSTimer *_speakTimer;
    long long _canSpeakTime;
    _Bool _isJoinOpenGroup;
    NSDate *_enterTime;
    NSString *_joinGroupCode;
    QQGroupVideoChatViewController *_ownerVC;
}

- (void).cxx_destruct;
- (void)actionAioSendMsg:(id)arg1;
- (void)actionRecvSvrMsg:(id)arg1;
- (_Bool)checkIsGetInMsgTime:(id)arg1;
- (void)dealloc;
- (void)doLoadViewMsgInput;
- (id)initWithOwnerVC:(id)arg1;
- (void)onCloseAction;
- (void)onMemberGetIn:(int)arg1 withGroupID:(long long)arg2 inMemArray:(id)arg3;
- (void)onOpenGroupJoinOrExitEvent:(id)arg1;
- (void)onOpenGroupKickedPush:(id)arg1;
- (void)onOpenGroupSettingPush:(id)arg1;
- (void)onSendMessageButtonTouchUpInside;
- (void)onUISendMessage:(id)arg1;
@property(nonatomic) __weak QQGroupVideoChatViewController *ownerVC; // @synthesize ownerVC=_ownerVC;
- (void)requestOpenGroup:(_Bool)arg1;
- (void)speakTimer;
- (void)startSpeakTimer:(long long)arg1;
- (void)unInit;
- (void)willDealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

