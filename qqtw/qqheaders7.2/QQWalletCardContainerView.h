//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QQWalletCardViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSString, UIPageControl, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface QQWalletCardContainerView : UIView <UIGestureRecognizerDelegate, QQWalletCardViewDelegate>
{
    UIView *_cardContainerView;
    UIPageControl *_pageControl;
    NSArray *_cards;
    int _frontCardIndex;
    struct CGRect _frontFrame;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_panGesture;
    _Bool _isCardMoved;
    id <QQWalletCardContainerViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)accessibilityScroll:(long long)arg1;
- (unsigned long long)accessibilityTraits;
- (void)backToFrontFrame;
- (void)commonInit;
- (void)dealloc;
@property(nonatomic) __weak id <QQWalletCardContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didAddCardBtnClicked;
- (void)didFrontCardTapped;
- (id)frontView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)nextCardAnimation;
- (void)reloadCards:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)touchAnimation;
- (void)viewDidPanned:(id)arg1;
- (void)viewDidTapped:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

