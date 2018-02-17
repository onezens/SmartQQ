//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class NSString, QQUGCUploadTitleTextView, UILabel;

@interface QQUGCUploadVideoTitleView : UIView <UITextViewDelegate>
{
    QQUGCUploadTitleTextView *_textView;
    CDUnknownBlockType _textChangeAction;
    UILabel *_placeHolderLabel;
}

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)getTextCount;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
- (void)refreshView;
@property(copy, nonatomic) CDUnknownBlockType textChangeAction; // @synthesize textChangeAction=_textChangeAction;
@property(retain, nonatomic) QQUGCUploadTitleTextView *textView; // @synthesize textView=_textView;
- (void)textNotifyChanged:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
