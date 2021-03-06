//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MsgLabelModelQueue, NSString, NSTimer, __queue;

@interface VideoShowMsgView : UIView
{
    _Bool _doingAnimation;
    _Bool _showMsg;
    __queue *_msgQueue;
    MsgLabelModelQueue *_msgLabelQueue;
    NSString *_groupUin;
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (void)actionRecieveTroopMsg:(id)arg1;
- (id)createMsgWithNickName:(id)arg1 nickName:(id)arg2;
- (id)createShowMsgLabelWithMsgContent:(id)arg1 nickNameLength:(int)arg2;
- (void)dealloc;
- (void)doAnimation:(int)arg1;
- (void)doInsertMsgLabelWithAnimation;
- (struct CGRect)getLabelRectWithIndex:(int)arg1;
- (id)initWithGroupUin:(id)arg1;
- (void)removeMsgLabelWithAnimation;
- (void)startShowMsg;
- (void)stopShowMsg;
- (void)updateRemoveMsgLabelTimer:(id)arg1;

@end

