//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "NIAttributedLabelDelegate.h"

@class NIAttributedLabel, NSArray, NSString, UIButton, UIView;

@interface QQBaseDeviceProtectTipsViewController : QQViewController <NIAttributedLabelDelegate>
{
    id _delegate;
    NSString *_navTitle;
    NSString *_mainText;
    NSString *_iconName;
    NSString *_buttonText;
    NSString *_linkText;
    _Bool _hasPhoneNum;
    NSString *_phoneNum;
    NSString *_guideTitle;
    NSArray *_guideDetail;
    _Bool _isLoginVerify;
    UIView *_ctrlView;
    UIButton *_startButton;
    NIAttributedLabel *_linkLabel;
}

- (void)addLinkTag:(id)arg1 withHighLightRangeInLinkText:(struct _NSRange)arg2;
- (void)dealloc;
- (id)getRightBtnText;
- (id)init;
@property(retain, nonatomic) NIAttributedLabel *linkLabel; // @synthesize linkLabel=_linkLabel;
- (void)loadView;
- (void)onRightButtonClicked:(id)arg1;
- (void)presentConfirmPhoneNumberViewController;
- (void)showMBMobileBeingAuditTips;
- (void)startButtonClicked;

// Remaining properties
@property(retain, nonatomic) NSString *buttonText; // @dynamic buttonText;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSArray *guideDetail; // @dynamic guideDetail;
@property(retain, nonatomic) NSString *guideTitle; // @dynamic guideTitle;
@property(nonatomic) _Bool hasPhoneNum; // @dynamic hasPhoneNum;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *iconName; // @dynamic iconName;
@property(retain, nonatomic) NSString *linkText; // @dynamic linkText;
@property(retain, nonatomic) NSString *mainText; // @dynamic mainText;
@property(retain, nonatomic) NSString *navTitle; // @dynamic navTitle;
@property(retain, nonatomic) NSString *phoneNum; // @dynamic phoneNum;
@property(readonly) Class superclass;

@end
