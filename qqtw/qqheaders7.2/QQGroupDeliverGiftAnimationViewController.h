//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMagicFaceViewController.h"

@class CADisplayLink, NSMutableArray, NSString, QQAvatarView, QQVideoAnimationView, UIButton, UIImageView, UISwipeGestureRecognizer, UIView;

@interface QQGroupDeliverGiftAnimationViewController : QQMagicFaceViewController
{
    NSString *_senderUin;
    NSString *_receiverUin;
    unsigned long long _giftID;
    unsigned long long _giftCount;
    NSString *_animationBrief;
    NSString *_tipBackImagePath;
    UIView *_animationView;
    QQAvatarView *_senderView;
    QQAvatarView *_receiverView;
    UIButton *_briefLabel;
    _Bool _needHideAnimation;
    UIImageView *_HDPlayer;
    _Bool _isHDPlaying;
    UISwipeGestureRecognizer *_swipeGestureRecognizerRight;
    CADisplayLink *_playerTimer;
    long long _animationStep;
    double _animationDuration;
    long long _animationNumFrames;
    long long _animationRepeatCount;
    NSMutableArray *_animationPNGsPath;
    QQVideoAnimationView *_animationVideoView;
    _Bool _isVideoAnimation;
    _Bool _isShowResult;
    _Bool _isFlowerBtnTouched;
    int _senderAnonymousPortraitIdx;
    unsigned int _groupGiftState;
    unsigned int _addVideoTime;
    NSString *_senderNick;
    NSString *_sendToAllGiftID;
    NSString *_groupCode;
    NSString *_buttonImagePath;
    NSString *_faceBackGroundPath;
    unsigned long long _businessType;
    NSString *_senderAvatarURL;
    NSString *_receiverAvatarURL;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int addVideoTime; // @synthesize addVideoTime=_addVideoTime;
- (void)animationShowFrame:(long long)arg1;
- (void)animationTimerCallback:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)beforeClose;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(copy, nonatomic) NSString *buttonImagePath; // @synthesize buttonImagePath=_buttonImagePath;
- (id)createAvatarViewWithUin:(id)arg1 url:(id)arg2 isSender:(_Bool)arg3;
- (id)createBriefLabelAndAnimation;
- (void)createImageViewForAnimationAtIndex:(id)arg1;
@property(copy, nonatomic) NSString *faceBackGroundPath; // @synthesize faceBackGroundPath=_faceBackGroundPath;
- (struct CGRect)getWindowFrame;
@property(copy, nonatomic) NSString *groupCode; // @synthesize groupCode=_groupCode;
@property(nonatomic) unsigned int groupGiftState; // @synthesize groupGiftState=_groupGiftState;
- (void)hiddenCloseButton;
- (void)hideAvatarViewAnimation;
- (_Bool)isAnimating;
@property _Bool isFlowerBtnTouched; // @synthesize isFlowerBtnTouched=_isFlowerBtnTouched;
@property _Bool isShowResult; // @synthesize isShowResult=_isShowResult;
@property(nonatomic) _Bool isVideoAnimation; // @synthesize isVideoAnimation=_isVideoAnimation;
- (void)onCloseButton;
- (void)onGetBntTouched:(id)arg1;
@property(retain, nonatomic) NSString *receiverAvatarURL; // @synthesize receiverAvatarURL=_receiverAvatarURL;
- (void)removeResultView;
@property(copy, nonatomic) NSString *sendToAllGiftID; // @synthesize sendToAllGiftID=_sendToAllGiftID;
@property(nonatomic) int senderAnonymousPortraitIdx; // @synthesize senderAnonymousPortraitIdx=_senderAnonymousPortraitIdx;
@property(retain, nonatomic) NSString *senderAvatarURL; // @synthesize senderAvatarURL=_senderAvatarURL;
@property(retain, nonatomic) NSString *senderNick; // @synthesize senderNick=_senderNick;
- (void)setNeedHideAnimation:(_Bool)arg1;
- (void)showAvatarAnimationAndBrief;
- (void)showGetFlowerBnt;
- (void)showGetFlowerResult:(id)arg1 success:(_Bool)arg2;
- (void)showSendToAllAvatarAndBnt;
- (void)startAnimating;
- (void)startPlayHDAnimation;
- (void)startVideoChatNotification:(id)arg1;
- (void)stopAnimating;
- (void)swipeGestureRecognizerRight:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(retain, nonatomic) NSString *animationBrief; // @dynamic animationBrief;
@property(nonatomic) unsigned long long giftCount; // @dynamic giftCount;
@property(nonatomic) unsigned long long giftID; // @dynamic giftID;
@property(retain, nonatomic) NSString *receiverUin; // @dynamic receiverUin;
@property(retain, nonatomic) NSString *senderUin; // @dynamic senderUin;
@property(retain, nonatomic) NSString *tipBackImagePath; // @dynamic tipBackImagePath;

@end
