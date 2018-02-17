//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class CFT_UIPayresultAdCardView, CFT_UIPayresultAdverEngine, NSMutableArray, NSString, UINavigationController;

@interface CFT_UIPayresultAdvertiseView : UIView <CAAnimationDelegate>
{
    CFT_UIPayresultAdCardView *_tempCardView;
    struct CGPoint _startPoint;
    _Bool _isMove;
    int _cardViewNotifiIndex;
    int _linkUrlTouchStatus;
    struct CGRect _tempviewStartRect;
    double _startTimerstamp;
    NSMutableArray *_cardviewRects;
    struct CGPoint lastPoint;
    _Bool _isStartAnimationComplete;
    NSMutableArray *_cardViews;
    CFT_UIPayresultAdverEngine *_adEngine;
    NSMutableArray *_effectiveDataArry;
    UINavigationController *_currentNav;
    NSMutableArray *_panGestureArry;
    NSMutableArray *_tapGestureArry;
    NSMutableArray *_swipeGestureArry;
    NSMutableArray *_longGestureArry;
}

@property(retain, nonatomic) CFT_UIPayresultAdverEngine *adEngine; // @synthesize adEngine=_adEngine;
@property(retain, nonatomic) NSMutableArray *cardViews; // @synthesize cardViews=_cardViews;
@property(retain, nonatomic) UINavigationController *currentNav; // @synthesize currentNav=_currentNav;
- (void)dealloc;
@property(retain, nonatomic) NSMutableArray *effectiveDataArry; // @synthesize effectiveDataArry=_effectiveDataArry;
@property(nonatomic) _Bool isStartAnimationComplete; // @synthesize isStartAnimationComplete=_isStartAnimationComplete;
@property(retain, nonatomic) NSMutableArray *longGestureArry; // @synthesize longGestureArry=_longGestureArry;
@property(retain, nonatomic) NSMutableArray *panGestureArry; // @synthesize panGestureArry=_panGestureArry;
@property(retain, nonatomic) NSMutableArray *swipeGestureArry; // @synthesize swipeGestureArry=_swipeGestureArry;
@property(retain, nonatomic) NSMutableArray *tapGestureArry; // @synthesize tapGestureArry=_tapGestureArry;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

