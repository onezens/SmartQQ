//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQHotChatViewController.h"

#import "CAAnimationDelegate.h"
#import "QQGameAudioTouchDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class AudioHelper, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, QQAVWindow, QQGameAudioControlBtn, QQWordingPicker, UIColor, UIImage, UIImageView, UIView;

@interface QQHalfScreenHotChatViewController : QQHotChatViewController <QQGameAudioTouchDelegate, CAAnimationDelegate, UIGestureRecognizerDelegate>
{
    NSMutableArray *_speakingMember;
    QQGameAudioControlBtn *_speakBtn;
    _Bool _isGamePlaying;
    _Bool _isReturnAnimation;
    _Bool _isReturnInFloat;
    _Bool _isShowAnimation;
    QQAVWindow *_window;
    _Bool _isChatStoped;
    _Bool _isDarkStyle;
    _Bool _isDarkTime;
    NSMutableDictionary *_normalStyleInfos;
    NSDictionary *_customStyleInfos;
    QQWordingPicker *_gameInputWordingPicker;
    UIView *_speakBtnMask;
    UIImageView *_aioCoverView;
    UIImageView *_animatedImageView;
    UIImage *_voiceImage;
    UIImage *_textImage;
    UIImage *_emojiImage;
    UIImage *_emojiActiveImage;
    UIColor *_speakingWordingColor;
    UIColor *_speakingBarColor;
    UIColor *_inputBarColor;
    UIColor *_wordingColor;
    AudioHelper *_pAudioHelper;
    int reconnectCount;
    _Bool _isShowRoomFloat;
    unsigned long long _currentPlyaerState;
    UIView *_halfScreenView;
}

+ (id)loadImageWithPath:(id)arg1;
+ (id)loadImageWithPathNoResize:(id)arg1;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)autoMoveAnination;
- (void)autoScaleAnimation;
- (void)autoSwitchViewAnimation;
- (void)banMemAudio:(id)arg1 wordingColor:(id)arg2 inputBarColor:(id)arg3 voiceImage:(id)arg4 textImage:(id)arg5 emojiImage:(id)arg6 speakingWordingColor:(id)arg7 speakingBarColor:(id)arg8 emojiActiveImage:(id)arg9;
- (void)changeDefaultScrollViewContentInset:(double)arg1;
- (void)changeInputStatus:(id)arg1;
- (void)changeNavToDarkStyle;
- (void)changeNavToNormalStyle;
- (void)changeToDarkStyle;
- (void)changeToNormalStyle;
- (void)closeGameMic;
- (void)connectedToFloat;
@property(nonatomic) unsigned long long currentPlyaerState; // @synthesize currentPlyaerState=_currentPlyaerState;
- (void)dealloc;
- (void)destroyRoomController;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didPressLeftRButton:(id)arg1;
- (void)didPressRightLButton:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)enterGameAudioRoom;
- (struct CGRect)frameForMainView;
- (void)gameRoomAudioReconnection:(id)arg1;
- (id)getChatWindow;
- (void)goToAudioChat;
@property(readonly, nonatomic) UIView *halfScreenView; // @synthesize halfScreenView=_halfScreenView;
- (void)hiddenKeyBorad:(id)arg1;
@property(nonatomic) _Bool isShowRoomFloat; // @synthesize isShowRoomFloat=_isShowRoomFloat;
- (_Bool)isSupportRightDragToGoBack;
- (void)leftButtonClick:(id)arg1;
- (void)onAioDbClick:(id)arg1;
- (void)onEvtUnPluggingHeadset:(id)arg1;
- (void)onForceOffLine;
- (void)openGamerMic;
- (long long)preferredStatusBarStyle;
- (void)quitGameAudioRoom;
- (void)reSetLeftButtonTitle;
- (void)receiveAddMessageNotification:(id)arg1;
- (void)removeControllerFromWindow;
- (void)resetNavBtnTheme;
- (void)resetTitleColor;
- (void)resumeMemAudio:(id)arg1 wordingColor:(id)arg2 inputBarColor:(id)arg3 voiceImage:(id)arg4 textImage:(id)arg5 emojiImage:(id)arg6 speakingWordingColor:(id)arg7 speakingBarColor:(id)arg8 emojiActiveImage:(id)arg9;
- (void)saveTextInputCacheWithChatModelType:(int)arg1;
- (void)setCustomTitleView:(id)arg1;
- (void)setCustonStyleWithParams:(id)arg1;
- (void)setGamePlayerSpokeUI:(id)arg1;
- (void)setNavTextColor:(id)arg1;
@property(retain, nonatomic) NSMutableArray *speakingMember; // @synthesize speakingMember=_speakingMember;
- (void)show24HoursMessagesTipIfNeeded;
- (void)showKeyboard:(id)arg1;
- (void)startRecAudio;
- (void)startReturnAnimation;
- (void)startShowAnimation;
- (void)startSpeakAnimate;
- (void)stopRecAudio;
- (void)stopSpeakAnimate;
- (void)styleChangedNotification:(id)arg1;
- (id)styleFadeAnimation;
- (void)textInputState;
- (void)touchBegin:(id)arg1;
- (void)touchCancel:(id)arg1;
- (void)touchEnd:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewNavThemeReset;
- (void)viewTapd:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)voiceInputState;
- (void)willMoveToParentViewController:(id)arg1;
- (void)wordingPickerChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

