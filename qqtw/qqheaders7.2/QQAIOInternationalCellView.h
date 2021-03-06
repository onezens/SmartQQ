//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOCommonCellView.h"

#import "QQEmotionLabelDelegate.h"
#import "QQiTranslateDelegate.h"

@class NSString, NSTimer, QQAIOTextModel, QQEmotionLabel, UIImageView, UIView;

@interface QQAIOInternationalCellView : QQAIOCommonCellView <QQEmotionLabelDelegate, QQiTranslateDelegate>
{
    _Bool _needRedrawContent;
    QQAIOTextModel *_textModel;
    UIImageView *splashImageView;
    UIImageView *animatingView;
    QQEmotionLabel *contentLabel;
    UIView *qqiGuideLabel;
    NSTimer *_dclicktimer;
}

- (void)AboutTranslate:(id)arg1;
- (double)GetHeadOffset;
- (double)GetMaxWidth:(double)arg1 height:(double)arg2;
- (struct CGRect)GetTextBottomRect;
- (struct CGRect)GetTextTopRect;
- (void)StartTranslateBreatheLight;
- (void)StopTranslateBreatheLight;
- (void)TranslateResult:(id)arg1 paramarg:(int)arg2;
@property(retain, nonatomic) UIImageView *animatingView; // @synthesize animatingView;
- (void)autoPushBackMsgTouch:(id)arg1;
- (void)beginTraslate;
@property(retain, nonatomic) QQEmotionLabel *contentLabel; // @synthesize contentLabel;
@property(retain, nonatomic) NSTimer *dclicktimer; // @synthesize dclicktimer=_dclicktimer;
- (void)dealloc;
- (_Bool)didTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)drawContent:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)emotionLabelHandleEmail:(id)arg1;
- (void)emotionLabelHandleIDNumber:(id)arg1;
- (void)emotionLabelHandleLongPress:(id)arg1;
- (void)emotionLabelHandlePhoneNumber:(id)arg1;
- (void)emotionLabelHandleQQNumber:(id)arg1;
- (void)emotionLabelHandleUrl:(id)arg1;
- (struct CGRect)frameForMsgSendFail;
- (struct CGRect)frameForMsgSendLoading;
- (id)getMenuItems;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;
- (void)layoutSubviews;
- (void)layoutViewsAsReceiver;
- (void)layoutViewsAsSender;
- (void)letOtherCellRedraw;
- (void)menuActionCollect:(id)arg1;
- (void)menuActionCopyText:(id)arg1;
- (void)menuActionForwardTo:(id)arg1;
- (void)prepareForReuse;
- (void)preparePaopao:(id)arg1;
@property(retain, nonatomic) UIView *qqiGuideLabel; // @synthesize qqiGuideLabel;
- (void)receiveDoubleClick;
@property(nonatomic) __weak QQAIOTextModel *aioModel;
@property(nonatomic) _Bool highlighted;
@property(retain, nonatomic) UIImageView *splashImageView; // @synthesize splashImageView;
- (_Bool)shouldDisplayMsgSendFail;
- (_Bool)shouldDisplayMsgSendLoading;
- (_Bool)shouldShowAnimation;
- (void)showTranslateTip:(id)arg1;
- (_Bool)translateBuble;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

