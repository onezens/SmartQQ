//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MQzoneFollowTipView, UIButton, UIImageView;

@interface MQZMoodEditInputAccessoryView : UIView
{
    UIButton *_keyboardButton;
    UIButton *_emotionButton;
    UIButton *_mentionButton;
    UIButton *_fontButton;
    UIButton *_gifRecommendButton;
    UIButton *_voiceButton;
    UIButton *_packUpkeyboardButton;
    UIView *_line;
    UIView *_inputAccessoryView;
    UIView *_floatingPictureCell;
    _Bool _isShowAddView;
    double _addViewHeight;
    double _buttonPadding;
    _Bool _isFistTimeActivate;
    MQzoneFollowTipView *_tipView;
    UIView *_tipViewForVoiceBtn;
    _Bool _canRemoveTipViewForVoiceBtn;
    _Bool _atBtnHiddened;
    _Bool _isShowFont;
    id <MQZMoodEditInputAccessoryViewDelegate> _delegate;
    UIImageView *_fontButtonRedDot;
}

- (void).cxx_destruct;
- (void)activateEmotionKeyboard;
- (void)activateFontKeyboard;
- (void)activateTextKeyboard;
- (void)adjustKeyboardIcon;
@property(nonatomic) _Bool atBtnHiddened; // @synthesize atBtnHiddened=_atBtnHiddened;
- (void)canRemoveTipViewForVoiceBtn;
- (id)createRedDotImageView;
- (void)dealloc;
@property(nonatomic) __weak id <MQZMoodEditInputAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)emotionButtonClickImage;
- (id)emotionButtonImage;
- (id)fontButtonClickImage;
- (id)fontButtonImage;
@property(readonly, nonatomic) UIImageView *fontButtonRedDot; // @synthesize fontButtonRedDot=_fontButtonRedDot;
- (void)freshViewWithFloatingEasterEgg;
- (void)freshWithFrame:(struct CGRect)arg1;
- (id)gifRecommendClickImage;
- (id)gifRecommendImage;
- (void)hiddenFloatingEasterEgg;
- (void)hideFontButton;
- (void)hideGifRecommendButton;
- (void)hideMentionButton;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isShowFont; // @synthesize isShowFont=_isShowFont;
- (id)keyboardButtonImage;
- (void)keyboardDidHide;
- (void)keyboardDidShow;
- (void)layoutSubviews;
- (id)mentionButtonClickImage;
- (id)mentionButtonImage;
- (void)onClickTipViewForVoiceBtn:(id)arg1;
- (id)packUpkeyboardButtonClickImage;
- (id)packUpkeyboardButtonImage;
- (id)pictureButtonImage;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)pressEmotionButton:(id)arg1;
- (void)pressFontButtom:(id)arg1;
- (void)pressGifRecommendButton:(id)arg1;
- (void)pressKeyboardButton:(id)arg1;
- (void)pressPackUpkeyboardButton:(id)arg1;
- (void)pressPictureButtom:(id)arg1;
- (void)pressVoiceButton;
- (void)pressedMentionButton:(id)arg1;
- (double)screenWidth;
- (void)setupButtons;
- (void)showFloatingEasterEgg:(id)arg1;
- (void)showGIFButtonAnimation;
- (void)showGifRecommendButton;
- (void)showPackUpkeyboardButton;
- (void)showVoiceButton;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)voiceButtonImage;
- (id)voiceClickButtonImage;

@end

