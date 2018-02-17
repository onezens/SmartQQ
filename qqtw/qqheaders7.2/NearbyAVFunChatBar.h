//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAVFunChatBar.h"

@class TriRectStyleView, UIButton;

@interface NearbyAVFunChatBar : QQAVFunChatBar
{
    _Bool _needShowGiftTip;
    int _layoutStyle;
    UIButton *_giftBtn;
    TriRectStyleView *_giftTipView;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) UIButton *giftBtn; // @synthesize giftBtn=_giftBtn;
- (void)giftBtnClick:(id)arg1;
@property(retain, nonatomic) TriRectStyleView *giftTipView; // @synthesize giftTipView=_giftTipView;
- (void)hiddenAVChatBar;
- (void)hiddenAVChatButton;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutChatBarBtn:(struct CGRect)arg1;
@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) _Bool needShowGiftTip; // @synthesize needShowGiftTip=_needShowGiftTip;
- (void)onDecorateAction;
- (void)onPixFixAction;
- (id)rendingModeImage:(id)arg1;
- (void)restoreInitialState;
- (void)setDeaultDecorate:(int)arg1;
- (void)showAVChatBar;
- (void)showAVChatButton;
- (void)showGiftSendTip;
- (void)supportFilterFunc;
- (void)ufaDownloadFinishNotify:(id)arg1;
- (void)updateFrame;

@end

