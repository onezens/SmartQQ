//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGrowingTextView.h"

@interface QQGTGrowingTextView : QQGrowingTextView
{
    _Bool _needAutoGrowing;
    id <QQGTGrowingTextViewProtocol> _scrollDelegate;
}

- (void)InternalSetFame:(struct CGRect)arg1;
- (void)commonInitialiser;
- (void)dealloc;
- (long long)getNumOfEnter:(id)arg1;
@property(nonatomic) _Bool needAutoGrowing; // @synthesize needAutoGrowing=_needAutoGrowing;
- (void)resizeTextView:(double)arg1;
@property(nonatomic) id <QQGTGrowingTextViewProtocol> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)updateInternalViewFrame;

@end

