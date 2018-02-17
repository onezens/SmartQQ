//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GAGrowingTextViewDelegate.h"

@class CustomFaceAttr, NSData, NSString, QQGrowingTextView, QQTextField, UITextView;

@protocol QQGrowingTextViewDelegate <GAGrowingTextViewDelegate>

@optional
- (_Bool)QQGrowingTextView:(QQGrowingTextView *)arg1 exceedMaxLength:(long long)arg2;
- (_Bool)QQTextField:(QQTextField *)arg1 didSendText:(NSData *)arg2 showText:(NSString *)arg3;
- (void)faceManageAction;
- (void)growingTextViewDidSendEmptyContent:(QQGrowingTextView *)arg1;
- (_Bool)growingTextViewInputReturnKey:(QQGrowingTextView *)arg1;
- (long long)maxInputLenghtInQQGrowingTextView:(QQGrowingTextView *)arg1;
- (void)qutuSectionAction;
- (void)sendImageCustomFace:(NSString *)arg1 data:(NSData *)arg2 attr:(CustomFaceAttr *)arg3;
- (_Bool)textView:(UITextView *)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
@end

