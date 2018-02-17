//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface QQReadInJoyVideoFullScreenTopView : UIView
{
    int _business;
    UIButton *_closeButton;
    UIButton *_volumeButton;
    UIButton *_barrageButton;
    UIButton *_feedbackButton;
    UILabel *_titleLabel;
    id <QQReadInJoyVideoFullScreenTopViewDelegate> _delegate;
}

@property(retain, nonatomic) UIButton *barrageButton; // @synthesize barrageButton=_barrageButton;
@property(nonatomic) int business; // @synthesize business=_business;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)dealloc;
@property(nonatomic) id <QQReadInJoyVideoFullScreenTopViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
- (id)initWithBusiness:(int)arg1;
- (void)layoutSubviews;
- (void)onBarrageButtonTap:(id)arg1;
- (void)onCloseButtonTap;
- (void)onFeedbackButtonTap;
- (void)onMuteButtonTap;
- (void)report7A5AWithOn:(_Bool)arg1;
- (void)setBarrageShow:(_Bool)arg1;
- (void)setButtonIcons;
- (void)setPlayerMuted:(_Bool)arg1;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *volumeButton; // @synthesize volumeButton=_volumeButton;

@end
