//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, QQAVAvatarView, UIButton, UIImageView, UILabel;

@interface QQAVMaskAddFriendView : UIView <UIGestureRecognizerDelegate>
{
    UIImageView *_bgView;
    QQAVAvatarView *_headImgView;
    UIButton *_addFriBtn;
    UIButton *_sendFlowerBtn;
    long long _nowStatus;
    long long _avType;
    UILabel *_labelTips;
    UIButton *_btnReport;
    UIButton *_kickOffBtn;
    UIButton *_btnReportGame;
    _Bool _isShowing;
    _Bool _selfIsMaster;
    struct CGRect _originalFrame;
    id _delegate;
}

- (void)_dismissWithAnimation;
- (void)_handleTapGesture:(id)arg1;
- (void)_showWithAnimation:(CDUnknownBlockType)arg1;
- (void)addFriendBtnPressed;
- (void)changeAddFriendButton:(long long)arg1;
- (void)countdown;
- (void)dealloc;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (struct CGRect)destHeadFrame;
- (void)dismiss;
- (void)dismissAnimation;
- (void)dismissWithAnimation;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)getModel;
- (id)initWithFrame:(struct CGRect)arg1 withModel:(id)arg2 withFromFrame:(struct CGRect)arg3 bgView:(id)arg4 showReport:(_Bool)arg5 avatarClass:(Class)arg6 status:(long long)arg7 AVRelationType:(long long)arg8 selfIsMaster:(_Bool)arg9;
- (void)kickOffBtnPressed;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reportBtnPressed;
- (id)screenImageWithSize:(struct CGSize)arg1 bgView:(id)arg2;
- (void)sendFlowerBtnPressed;
- (void)setBtnStatus:(int)arg1 ramaining:(long long)arg2;
- (void)setStatus:(long long)arg1;
- (void)show;
- (void)showWith:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

