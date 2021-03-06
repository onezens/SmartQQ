//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSmsVerifyViewController.h"

#import "CJTextFieldDeleteDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, UIButton, UIView;

@interface QQSmsLoginFillVerifyViewController : QQBaseSmsVerifyViewController <UITextFieldDelegate, CJTextFieldDeleteDelegate>
{
    int _sessionId;
    id <QQSmsLoginFillVerifyViewDelegate> _viewDelegate;
    float belowIphone5Rate;
    _Bool isremove;
    _Bool cansend;
    int currentTextField;
    UIButton *_inputViewOn;
    UIView *_inputView;
    UIView *_tittleView;
}

- (void)NextStepVerifyCode:(id)arg1;
- (void)TextFieldresignFirstResponder:(int)arg1;
- (void)cjTextFieldDeleteBackward:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 phoneNum:(id)arg2 resendRemainSecond:(int)arg3;
- (void)inputFieldDidChange:(id)arg1;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UIButton *inputViewOn; // @synthesize inputViewOn=_inputViewOn;
- (void)inputViewOnClick;
- (void)leftButtonClick:(id)arg1;
- (void)loadView;
- (void)onApplicationWillEnterForeground:(id)arg1;
- (void)resendButtonPress:(id)arg1;
@property(nonatomic) int sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) UIView *tittleView; // @synthesize tittleView=_tittleView;
@property(nonatomic) id <QQSmsLoginFillVerifyViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)verifyCodeBecomeFirstResponder;
- (void)verifyCodeResignFirstResponder;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

