//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSearchBar.h"

@class NSString, NSTimer, UIButton, UIView;

@interface FTSCustomSearchBar : QQSearchBar
{
    UIButton *_returnButton;
    UIView *_shawdowLine;
    NSTimer *_changerTimer;
    NSString *_lastInputText;
    double _timeTmp;
}

- (void).cxx_destruct;
- (void)_ftsAIEndingNotifHandle:(id)arg1;
- (void)_ftsHandleKeyboardWillHide:(id)arg1;
- (id)_searchBarFindUIButtonDelete;
- (id)_searchBarFindUINavigationButton;
- (id)_searchBarFindUISearchBarTextField;
- (id)_searchBarFindUITextFieldBorderView;
- (void)actionReturn;
- (void)addReturnButton;
- (void)addShadowLine;
- (void)cancelInteractiveTransition;
- (void)dealloc;
- (void)finishInteractiveTransition;
- (void)ftsActiveSearchBarFirstResponder;
- (void)ftsAlwaysEnableCancelBtn;
- (void)ftsDismissSearchBarFirstResponder;
- (id)ftsGetHandledSearchText;
- (void)ftsKVORemoveObseserverForKeyPath;
- (void)hideReturnButton;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)showReturnButton;
- (void)startInteractiveTransition;
- (void)startTimeInputWithText:(id)arg1;
- (void)textChanger:(id)arg1;
- (void)tickCancelAnimation:(double)arg1;
- (void)updateInteractiveTransition:(double)arg1;

@end

