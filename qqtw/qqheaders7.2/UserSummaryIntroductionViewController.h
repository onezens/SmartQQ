//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "UITextViewDelegate.h"

@class NSString, UIImageView, UILabel, UITextView;

@interface UserSummaryIntroductionViewController : QQViewController <UITextViewDelegate>
{
    NSString *_intro;
    UITextView *_contentTextView;
    UILabel *_countTipsLabel;
    UILabel *_placeholderLabel;
    NSString *_placeHolder;
    UIImageView *_editBgView;
    NSString *_prevIntro;
    long long _maxInputLength;
    id <UserSummaryIntroductionViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <UserSummaryIntroductionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finishedButtonClicked:(id)arg1;
- (id)initWitIntro:(id)arg1 placeHolder:(id)arg2 delegate:(id)arg3;
- (_Bool)isSupportRightDragToGoBack;
- (void)leftButtonClick:(id)arg1;
- (void)loadView;
@property(nonatomic) long long maxInputLength; // @synthesize maxInputLength=_maxInputLength;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)updateCountTipsLabel:(int)arg1;
- (void)updateCountTipsLabelFrame;
- (void)updateTextViewPlaceholder;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

