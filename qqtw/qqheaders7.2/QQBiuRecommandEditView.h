//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class NSMutableDictionary, NSString, QQBiuTextView, ReadInJoyChannelArticle, UILabel;

@interface QQBiuRecommandEditView : UIView <UITextViewDelegate>
{
    _Bool _hasEdited;
    id <QQBiuRecommandEditViewDelegate> _delegate;
    QQBiuTextView *_biuTextView;
    ReadInJoyChannelArticle *_articleModel;
    UILabel *_placeHolderLabel;
    NSMutableDictionary *_nickRecordDict;
    struct _NSRange _preCursorRange;
}

+ (double)getBiuEditViewMinHeight;
- (void).cxx_destruct;
- (void)QQTextViewInternalBecomeFirstResponder:(id)arg1;
@property(retain, nonatomic) ReadInJoyChannelArticle *articleModel; // @synthesize articleModel=_articleModel;
@property(retain, nonatomic) QQBiuTextView *biuTextView; // @synthesize biuTextView=_biuTextView;
- (void)createBiuTextView;
- (void)dealloc;
@property(nonatomic) __weak id <QQBiuRecommandEditViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dissmisKeyBorad;
- (struct _NSRange)findAtMiddleLocation:(unsigned long long)arg1 textView:(id)arg2;
- (id)get16RadixFromContent:(id)arg1;
- (id)getFilterContent;
- (int)getModifyContentType;
- (unsigned long long)getNickCount;
- (id)getOriginItem:(id)arg1;
- (id)getOtherUserBiuDeliverContent;
- (id)getSelfBiuDeliverContent;
@property(nonatomic) _Bool hasEdited; // @synthesize hasEdited=_hasEdited;
- (id)initWithArticleModel:(struct CGRect)arg1 articleModel:(id)arg2;
- (void)layoutSubviews;
@property(retain, nonatomic) NSMutableDictionary *nickRecordDict; // @synthesize nickRecordDict=_nickRecordDict;
- (id)parseBiuEditContent:(id)arg1;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
- (void)popKeyBoard;
@property(nonatomic) struct _NSRange preCursorRange; // @synthesize preCursorRange=_preCursorRange;
- (void)refreshPlaceHoder;
- (void)refreshSelfHeight;
- (void)refreshSubviews;
- (void)setDefaultCommentContent;
- (void)setPlaceHolderText:(id)arg1;
- (void)textNotifyChanged:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeForAt:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChangeSelectionForAt:(id)arg1;
- (_Bool)textViewForAt:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldBeginEditing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
