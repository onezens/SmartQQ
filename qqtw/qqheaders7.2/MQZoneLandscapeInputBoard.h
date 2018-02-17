//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "UITextFieldDelegate.h"

@class NSString, UITextField;

@interface MQZoneLandscapeInputBoard : UIImageView <UITextFieldDelegate>
{
    UIImageView *_textFieldBg;
    UITextField *_textField;
    id <MQZoneLandscapeInputBoardDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)active;
- (void)deactive;
- (void)dealloc;
@property(nonatomic) __weak id <MQZoneLandscapeInputBoardDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didMoveToSuperview;
- (id)getText;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)onNotifyKeyboardHide:(id)arg1;
- (void)onNotifyKeyboradShow:(id)arg1;
- (void)setText:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

