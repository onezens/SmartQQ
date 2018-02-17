//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class QQYPC2BCameraPreview, UIButton, UIView;

@interface QQYPC2BCameraController : UIViewController
{
    QQYPC2BCameraPreview *_preview;
    UIButton *_cameraSwitchButton;
    UIView *_customNavibar;
    _Bool _isControllerShow;
    _Bool _hasControllerShowed;
}

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)appWillGoneInForeground:(id)arg1;
- (void)appWillGotoBackground:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)loadCustomNaviBar;
- (void)loadPreview;
- (void)loadView;
- (void)onAVChatFinish:(id)arg1;
- (void)onCameraSwitchButtonClick:(id)arg1;
- (void)onCancelBtnClick;
- (void)onTouchNavibar:(id)arg1;
- (void)showCustomNavibar:(_Bool)arg1;
- (void)startSwitchCameraAni;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

@end

