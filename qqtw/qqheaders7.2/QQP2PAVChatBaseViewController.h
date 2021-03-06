//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAVChatBaseController.h"

@interface QQP2PAVChatBaseViewController : QQAVChatBaseController
{
    _Bool _isCrmVoipIvrStyle;
}

- (void)closedBySwitchToGroup;
- (void)forceSuspend;
- (id)getChatModel;
- (unsigned long long)getFriUin;
- (int)getShowPanelMode;
- (void)initInterface;
- (void)initNotification;
- (id)initWithChatModel:(id)arg1;
@property(nonatomic) _Bool isCrmVoipIvrStyle; // @synthesize isCrmVoipIvrStyle=_isCrmVoipIvrStyle;
- (_Bool)isFloatVideoChatting;
- (_Bool)isRecvRequestShowing;
- (void)onFloatChatWindowHid;
- (void)onFloatChatWindowShow;
- (void)reportAddMemberResult:(int)arg1;
- (void)setStateForGroup;
- (void)switchToGroupAV;
- (void)unInitInterface;
- (void)unInitNofification;
- (void)videoInterruptEnd;
- (void)videoInterruptEndShowAlertView;
- (void)videoInterruptStart;
- (void)videoInterruptTeleDailing;

@end

