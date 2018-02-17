//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UIBaseRichViewController.h"

#import "TenpaySecureCtrlDelegate.h"
#import "UIAlertViewDelegate.h"

@class CFT_TenpayPswCtrl, CFT_UIGroupStyleView, NSDictionary, NSString, UIButton, UIImageView, UILabel, UIView;

@interface CFT_UIBaseSetPswRichViewController : CFT_UIBaseRichViewController <UIAlertViewDelegate, TenpaySecureCtrlDelegate>
{
    CFT_TenpayPswCtrl *p6Psw1;
    CFT_TenpayPswCtrl *p6Psw2;
    UILabel *pLabWarn;
    UILabel *pLabWarn2;
    UILabel *pLabTips;
    UIButton *finishButton;
    NSString *title1;
    NSString *title2;
    UIView *_dialogTitleView;
    UIImageView *_dialogTitleIcon;
    UILabel *_dialogTitleLabel;
    UIButton *_dialogSkipBtn;
    CFT_UIGroupStyleView *_group;
    NSString *sceneType;
    NSDictionary *attachInfoDic;
}

@property(retain, nonatomic) NSDictionary *attachInfoDic; // @synthesize attachInfoDic;
- (void)changeToNextPage;
- (_Bool)checkInput;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)layoutSubviewsOnView;
- (void)leftButtonClick:(id)arg1;
- (void)pageChanged:(_Bool)arg1;
- (void)resetDialogTitle:(id)arg1 icon:(id)arg2;
- (void)resetFirstTipLabel:(id)arg1;
- (void)resetPswInput;
- (void)resetSecondTipLabel:(id)arg1;
@property(retain, nonatomic) NSString *sceneType; // @synthesize sceneType;
- (void)skipButtonClick:(id)arg1;
- (void)tenpayCtrlShouldChange:(id)arg1;
- (void)textFiledReturnEditing:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

