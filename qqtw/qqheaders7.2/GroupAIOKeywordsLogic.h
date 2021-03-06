//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQAIOEventDispatcherProtocol.h"

@class NSString, QQGroupChatViewController, QQLockDictionary;

@interface GroupAIOKeywordsLogic : NSObject <QQAIOEventDispatcherProtocol>
{
    QQGroupChatViewController *_chatController;
    _Bool _canCheck;
    _Bool _isScolling;
    QQLockDictionary *_selfShowedRuleIds;
}

- (void).cxx_destruct;
- (void)beginScroll;
@property(nonatomic) __weak QQGroupChatViewController *chatController; // @synthesize chatController=_chatController;
- (void)chatViewNotifyClicked:(id)arg1;
- (void)checkAIOKeywordsRemind;
- (void)checkAIOKeywordsRemindDelay;
- (_Bool)controller:(id)arg1 BeginDraggingInTableView:(id)arg2;
- (_Bool)controller:(id)arg1 BeginScrollInTableView:(id)arg2;
- (_Bool)controller:(id)arg1 EndDraggingInTableView:(id)arg2 speed:(double)arg3 byUser:(_Bool)arg4;
- (_Bool)controller:(id)arg1 EndScrollBySetContenOffset:(id)arg2;
- (_Bool)controller:(id)arg1 EndScrollInTableView:(id)arg2;
- (_Bool)controller:(id)arg1 OnDraggingInTableView:(id)arg2;
- (_Bool)controller:(id)arg1 didEndScroll:(id)arg2;
- (_Bool)controller:(id)arg1 endDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 byUser:(_Bool)arg4;
- (_Bool)controller:(id)arg1 remindNotifyControlClicked:(id)arg2;
- (_Bool)controller:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 byUser:(_Bool)arg4;
- (_Bool)controllerCheckNotifyMsg:(id)arg1;
- (_Bool)controllerRemindNotifyCheckDone:(id)arg1;
- (void)dealloc;
- (void)endDisplayCell:(id)arg1;
- (void)endScroll;
- (id)init;
- (_Bool)isSameShowing:(id)arg1 msgModel:(id)arg2;
- (void)remindNotifyCheckDone;
- (void)removeRuleIdForOutMsg:(id)arg1 ruleId:(id)arg2;
- (void)ruleDetailInfoUpdated:(id)arg1;
- (void)showChatViewNotify:(id)arg1 keyword:(id)arg2 msg:(id)arg3 showingRuleId:(int)arg4;
- (void)showRuleIdForOutMsg:(id)arg1 ruleId:(id)arg2;
- (id)showedRuleIdsForOutMsg:(id)arg1;
- (int)showingKeywordRuleId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

