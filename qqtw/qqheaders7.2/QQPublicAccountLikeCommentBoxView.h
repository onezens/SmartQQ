//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITextViewDelegate.h"

@class NSString, UIButton, UILabel, UITapGestureRecognizer, UITextView;

@interface QQPublicAccountLikeCommentBoxView : UIView <UITextViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _isBoxCheck;
    UITextView *_inPutTextView;
    int _inPutMax;
    UILabel *_placeHolder;
    UIButton *_sendBtn;
    UIButton *_checkBox;
    UILabel *_anonyMousLabel;
    UITapGestureRecognizer *_inputTapGesture;
    struct CGRect _keyboardRect;
    struct CGRect _oldFrame;
    id <QQPbCommentDelegate> _pbCommentDelegate;
}

- (void)addKeyBoardEvent;
- (void)cleanInputText;
- (void)dealloc;
- (void)didPanTextView:(id)arg1;
- (void)dismissKeyboard:(_Bool)arg1;
- (void)hiddenCheckBox:(_Bool)arg1;
- (void)hiddenTextViewPlaceHolder;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onCheckboxButtonClick:(id)arg1;
- (void)onSendBtnClick:(id)arg1;
@property(nonatomic) id <QQPbCommentDelegate> pbCommentDelegate; // @synthesize pbCommentDelegate=_pbCommentDelegate;
- (void)presentKeyboard:(_Bool)arg1;
- (void)removeKeyBoardEvent;
- (double)screenScale;
- (void)setupPlaceHolder:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
