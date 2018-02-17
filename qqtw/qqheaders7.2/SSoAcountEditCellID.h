//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableCellStepView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UIImageView, UILabel, UITextField;

@interface SSoAcountEditCellID : UITableCellStepView <UITextFieldDelegate>
{
    NSString *_userID;
    UITextField *_idEdit;
    UIImageView *_accountBtnImage;
    UIButton *_accountBtn;
    UILabel *_tipLabel;
    _Bool _showAccountBtn;
    id <SSoAcountEditCellIDDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *accountBtn; // @synthesize accountBtn=_accountBtn;
- (void)accountBtnHidden:(_Bool)arg1;
@property(retain, nonatomic) UIImageView *accountBtnImage; // @synthesize accountBtnImage=_accountBtnImage;
@property(nonatomic) id <SSoAcountEditCellIDDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawRect:(struct CGRect)arg1;
@property(retain, nonatomic, getter=getUserID, setter=setUserID:) NSString *userID; // @dynamic userID;
@property(readonly, nonatomic) UITextField *idEdit; // @synthesize idEdit=_idEdit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) _Bool showAccountBtn; // @synthesize showAccountBtn=_showAccountBtn;
- (void)showAccountsEdit;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
