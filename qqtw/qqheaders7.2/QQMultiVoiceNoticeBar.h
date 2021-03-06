//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class NSMutableArray, UIImageView, UILabel, UIPanGestureRecognizer, UIViewController;

@interface QQMultiVoiceNoticeBar : UIWindow
{
    _Bool _isAinmateing;
    int _currIndex;
    UILabel *_labels[2];
    _Bool _needRefreshAnimation;
    int _chattingType;
    UIImageView *_container;
    UIImageView *_volume1;
    UIImageView *_volume2;
    UIImageView *_volume3;
    UIPanGestureRecognizer *_moveGesture;
    NSMutableArray *_msgArray;
    int _curY;
    int _startY;
    int _tmpDisY;
    int _curX;
    int _startX;
    int _tmpDisX;
    _Bool _selfSwip;
    _Bool _isFloatConceal;
    _Bool _animationStopped;
    _Bool _isNeedToShowAnimation;
    _Bool _isKeyBoardShow;
    UIViewController *_showViewController;
}

+ (id)getInstance;
- (void)addMessage:(id)arg1 color:(id)arg2 animated:(_Bool)arg3;
- (void)addVolume;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)beginAnimation;
- (void)dealloc;
- (void)doOpacityWithView:(id)arg1 fromValue:(float)arg2 toValue:(float)arg3 animationTime:(float)arg4 forKeyValue:(id)arg5;
- (void)endAnimation;
- (void)flashWindow:(double)arg1 count:(int)arg2 withObject:(id)arg3 withSelector:(SEL)arg4;
- (double)getYWhenKayBoard;
- (void)goToAudioChat;
- (void)handleUIApplicationWillChangeStatusBarFrameNotification:(id)arg1;
- (void)hideNoticeBar;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isFloatConcealed;
- (_Bool)isKeyBoardShowing;
- (_Bool)isNogticeBarShow;
- (_Bool)isNoticeBarShowAnimating;
- (void)keyBoardDidHide:(id)arg1;
- (void)keyBoardDidShow:(id)arg1;
- (void)moveEnd:(int)arg1 andY:(int)arg2;
- (void)moveTo:(int)arg1 andY:(int)arg2;
- (void)onMultiVoiceTouchDone;
- (void)playMessage:(_Bool)arg1;
- (void)resetAndShowMessage:(id)arg1 color:(id)arg2;
- (void)resetNoticeState;
- (void)setFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIViewController *showViewController; // @synthesize showViewController=_showViewController;
- (void)showNoticeBar;
- (void)startAVChatting:(int)arg1;
- (void)startAnimation;
- (void)stopAVChatting;
- (void)stopAnimation;
- (void)swipHandle:(id)arg1;
- (id)switchString:(id)arg1;
- (void)validConcealNoticeBar;
- (void)validRemainNoticeBar;

@end

