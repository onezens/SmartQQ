//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface QQPBAlertContainerView : UIView
{
    UILabel *_loginTitleLabel;
    UILabel *_loginLabel;
    UILabel *_deviceLockTitleLabel;
    UILabel *_deviceLockLabel;
    UILabel *_bindingPhoneLabel;
    UIButton *_unifyButton;
    UIButton *_otherButton;
    UIButton *_cancelButton;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *bindingPhoneLabel; // @synthesize bindingPhoneLabel=_bindingPhoneLabel;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UILabel *deviceLockLabel; // @synthesize deviceLockLabel=_deviceLockLabel;
@property(nonatomic) __weak UILabel *deviceLockTitleLabel; // @synthesize deviceLockTitleLabel=_deviceLockTitleLabel;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) __weak UILabel *loginLabel; // @synthesize loginLabel=_loginLabel;
@property(nonatomic) __weak UILabel *loginTitleLabel; // @synthesize loginTitleLabel=_loginTitleLabel;
@property(nonatomic) __weak UIButton *otherButton; // @synthesize otherButton=_otherButton;
@property(nonatomic) __weak UIButton *unifyButton; // @synthesize unifyButton=_unifyButton;

@end

