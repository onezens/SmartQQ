//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIActionSheetDelegate.h"

@class MQZoneNavigationDoubleButtonView, MQZoneNavigationTitleView, NSString, QZNavigationCustomButton, QZoneNavigationRightButton, UIImageView;

@interface QZClearNavigationBar : UIView <UIActionSheetDelegate>
{
    _Bool _blThemeCustom;
    _Bool _blHost;
    UIImageView *_backgroundView;
    QZNavigationCustomButton *_leftItem;
    MQZoneNavigationTitleView *_titleView;
    MQZoneNavigationDoubleButtonView *_rightItemView;
    int _xo;
    QZoneNavigationRightButton *_rightButtons;
    UIView *_bottomLine;
    id <QZClearNavigationBarDelegate> _delegate;
}

+ (long long)defaultTag;
- (void).cxx_destruct;
- (double)backgroundAlpha;
- (void)changeIconWithType:(unsigned long long)arg1 andNewIconName:(id)arg2;
- (void)changeStatusBarStyle:(_Bool)arg1;
@property(nonatomic) __weak id <QZClearNavigationBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hiddenRightButtonByOrder:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withMaskView:(_Bool)arg2;
- (void)menuButtonClick;
- (void)resetRightItemView:(id)arg1;
- (void)resetTitleViewFrame;
- (void)setAccessibilityWithType:(unsigned long long)arg1 andOrder:(unsigned long long)arg2;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setRightButtonArrayType:(id)arg1 andImageNameArray:(id)arg2;
- (void)setRightButtonsEnabled:(_Bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 animated:(_Bool)arg2;
- (void)titleBarMenuButtonEnable:(_Bool)arg1;
- (void)updateBackgroundImage:(id)arg1 color:(id)arg2;
- (void)updateLoadinghState:(_Bool)arg1;
- (void)updateStatusBarStyle:(_Bool)arg1;
- (void)updateThemeCustom:(_Bool)arg1;

// Remaining properties
@property(retain, nonatomic) UIImageView *backgroundView; // @dynamic backgroundView;
@property(nonatomic) _Bool blHost; // @dynamic blHost;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) QZNavigationCustomButton *leftItem; // @dynamic leftItem;
@property(readonly) Class superclass;
@property(retain, nonatomic) MQZoneNavigationTitleView *titleView; // @dynamic titleView;

@end

