//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQRegisterAndLoginCommonViewController.h"

#import "CJTextFieldDeleteDelegate.h"
#import "IQSRegEngineObserver.h"
#import "NIAttributedLabelDelegate.h"
#import "QQEmotionLabelDelegate.h"
#import "QQSecurityConfigFetcherDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITextFieldDelegate.h"

@class NIAttributedLabel, NSMutableAttributedString, NSString, NSTimer, NoPasteTextField, UIButton, UILabel, UIView;

@interface QQRegisterFillVerifyCodeViewController : QQRegisterAndLoginCommonViewController <UITextFieldDelegate, IQSRegEngineObserver, UIActionSheetDelegate, QQSecurityConfigFetcherDelegate, QQEmotionLabelDelegate, CJTextFieldDeleteDelegate, NIAttributedLabelDelegate>
{
    UIButton *_resendButton;
    UILabel *_timerLabel;
    NoPasteTextField *_verifyCodeTextField;
    UILabel *_verifyCodePlaceHolder;
    int _remainSecond;
    NSTimer *_resendTimer;
    _Bool _isChecked;
    long long phoneNumber_state;
    NSString *_prevQQUin;
    _Bool _isRegWithDevLockCfgLoaded;
    _Bool _isRegWithDevLockChecked;
    UIButton *_regWithDevLockCheckBox;
    NIAttributedLabel *_devLockWordingLabel;
    NSString *_devlockIntroductionWording;
    NSString *_devLockIntroductionURL;
    UIButton *_okButton;
    NSMutableAttributedString *attrText;
    _Bool isremove;
    _Bool cansend;
    int currentTextField;
    UIView *inputView;
    UIButton *inputViewOn;
    NIAttributedLabel *_devlockLabel;
    int verfyCodeResponce;
}

- (void).cxx_destruct;
- (void)NextStepVerifyCode:(id)arg1;
- (void)TextFieldresignFirstResponder:(int)arg1;
- (void)attributedLabel:(id)arg1 didSelectTextCheckingResult:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)checkboxButtonPress:(id)arg1;
- (void)cjTextFieldDeleteBackward:(id)arg1;
- (void)dealloc;
- (void)didRecvCloudConfigData:(id)arg1 andMetaInfo:(id)arg2;
- (void)emotionLabelHandleSensContent:(id)arg1;
- (id)initWithPhoneNumberState:(long long)arg1 prevQQUin:(id)arg2;
- (void)inputFieldDidChange:(id)arg1;
- (void)inputViewOnClick;
- (_Bool)isSupportRightDragToGoBack;
- (void)loadView;
- (_Bool)neededRestoreLocal;
- (void)notifyCommitSmsCodeResponse:(id)arg1;
- (void)notifyRegReqFailed:(id)arg1;
- (void)notifyRegReqFailedJumpUrl:(id)arg1;
- (void)notifyRequestResendSMSCodeResponse:(id)arg1;
- (void)onResendTimer;
- (void)regWithDevLockCheckBoxPress:(id)arg1;
- (void)resendButtonPress:(id)arg1;
- (void)startResendTimer;
- (void)stopResendTimer;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateRegWithDevLockUI:(id)arg1;
- (void)updateResendBtnTitle:(int)arg1;
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

