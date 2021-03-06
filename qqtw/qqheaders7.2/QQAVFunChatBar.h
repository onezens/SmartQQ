//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QQAVFunTempGridDelegate.h"
#import "QQAVVoiceCollectionViewDelegate.h"

@class AVSlider, CAGradientLayer, MCGridVideoItem, MCTmplItem, NSArray, NSObject, NSString, QQAVFunTempGridBaseView, QQAVFunTempGridDecorationItem, QQAVFunTempGridDecorationView, QQAVFunTempGridInteractiveView, QQAVVoiceCollectionView, UIButton, UIButtonFun, UILabel;

@interface QQAVFunChatBar : UIView <QQAVFunTempGridDelegate, QQAVVoiceCollectionViewDelegate>
{
    UIButton *_cancelButton;
    UIButtonFun *_decorationButton;
    UIButtonFun *_expressionButton;
    UIButtonFun *_drawingButton;
    UIButtonFun *_picFixButton;
    UIButtonFun *_voiceChangeButton;
    AVSlider *_slider;
    UIButton *_multiDecButton;
    UIButton *_multiExpButton;
    UIView *_multiSelectView;
    UIView *_multiLineView;
    UIView *_interactiveGuideView;
    UILabel *_interactiveGuideLabel;
    long long _currentState;
    UIView *_backGroundView;
    CAGradientLayer *_backGroundLayer;
    NSArray *_buttonList;
    int _selectedButton;
    int _multiSelectedButton;
    _Bool _isDrawing;
    _Bool _isGroup;
    _Bool _isDiscuss;
    _Bool _hasSelectedButton;
    _Bool _isShow;
    int _lastMultiType;
    id <QQAVFunChatBarDelegate> _delegate;
    QQAVFunTempGridDecorationView *_decorateView;
    UIView *_sliderMask;
    MCTmplItem *_currentTmpItem;
    QQAVFunTempGridInteractiveView *_multiExpView;
    QQAVFunTempGridInteractiveView *_multiDecView;
    QQAVFunTempGridBaseView *_drawingView;
    QQAVVoiceCollectionView *_voiceChangeView;
    UIButton *_checkButton;
    NSObject *_currentSelected;
    QQAVFunTempGridDecorationItem *_currentDecorationItem;
    double _currentDecorationItemBeginTime;
    MCGridVideoItem *_currentMultiItem;
    double _currentMultiItemBeginTime;
    NSArray *_expressionEnableList;
    NSArray *_drawingEnableList;
    NSArray *_multiEnableList;
}

- (void)bindingReddotWithButton:(id)arg1 withPath:(id)arg2;
@property(retain, nonatomic) UIButton *checkButton; // @synthesize checkButton=_checkButton;
- (id)createButtonWithFrame:(struct CGRect)arg1 title:(id)arg2 norImage:(id)arg3 target:(SEL)arg4;
@property(nonatomic) QQAVFunTempGridDecorationItem *currentDecorationItem; // @synthesize currentDecorationItem=_currentDecorationItem;
@property(nonatomic) double currentDecorationItemBeginTime; // @synthesize currentDecorationItemBeginTime=_currentDecorationItemBeginTime;
@property(nonatomic) MCGridVideoItem *currentMultiItem; // @synthesize currentMultiItem=_currentMultiItem;
@property(nonatomic) double currentMultiItemBeginTime; // @synthesize currentMultiItemBeginTime=_currentMultiItemBeginTime;
@property(retain, nonatomic) NSObject *currentSelected; // @synthesize currentSelected=_currentSelected;
@property(retain, nonatomic) MCTmplItem *currentTmpItem; // @synthesize currentTmpItem=_currentTmpItem;
- (void)dealloc;
@property(retain, nonatomic) QQAVFunTempGridDecorationView *decorateView; // @synthesize decorateView=_decorateView;
@property(nonatomic) id <QQAVFunChatBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *drawingEnableList; // @synthesize drawingEnableList=_drawingEnableList;
@property(retain, nonatomic) QQAVFunTempGridBaseView *drawingView; // @synthesize drawingView=_drawingView;
- (void)exitMultiScreenMode;
@property(retain, nonatomic) NSArray *expressionEnableList; // @synthesize expressionEnableList=_expressionEnableList;
- (id)getDC1178ReportInfo;
- (_Bool)getExpressionSelfDevEnable;
- (_Bool)getMultiSelfDevEnable;
- (void)gridView:(id)arg1 didSelected:(id)arg2 temState:(long long)arg3;
- (void)gridView:(id)arg1 needShowShadow:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isButtonSelected;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) int lastMultiType; // @synthesize lastMultiType=_lastMultiType;
- (void)layoutGroupFunChatBar:(_Bool)arg1;
@property(retain, nonatomic) QQAVFunTempGridInteractiveView *multiDecView; // @synthesize multiDecView=_multiDecView;
@property(retain, nonatomic) NSArray *multiEnableList; // @synthesize multiEnableList=_multiEnableList;
@property(retain, nonatomic) QQAVFunTempGridInteractiveView *multiExpView; // @synthesize multiExpView=_multiExpView;
- (void)onBeautySliderEnd:(id)arg1;
- (void)onBeautySliderMove:(id)arg1;
- (void)onDecorateAction;
- (void)onDownloadDeco:(id)arg1;
- (void)onDrawingAction;
- (void)onExpressionAction;
- (void)onFunChatClose;
- (void)onMultiSelectDec;
- (void)onMultiSelectExp;
- (void)onPixFixAction;
- (void)onPreMultiExpression;
- (void)onShow;
- (void)onShowSupport:(id)arg1;
- (void)onStartDeco:(id)arg1;
- (void)onStopDeco;
- (void)onVoiceChangeAction;
- (void)resetButtonList;
- (void)resetDrawingState;
- (void)resumeLastDoc;
- (void)selectViewWithButtom:(id)arg1;
@property(nonatomic) int selectedButton; // @synthesize selectedButton=_selectedButton;
- (void)setBeautyLevel:(float)arg1;
- (void)setButtonListEnable:(id)arg1;
- (void)setDrawingPathColor:(id)arg1;
- (void)setExpressViewHidden:(_Bool)arg1;
- (void)setSelectItem:(id)arg1 selectType:(int)arg2;
@property(retain, nonatomic) UIView *sliderMask; // @synthesize sliderMask=_sliderMask;
@property(retain, nonatomic) QQAVVoiceCollectionView *voiceChangeView; // @synthesize voiceChangeView=_voiceChangeView;
- (void)supportFilterFunc;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateFrame;
- (void)voiceLoopBack:(id)arg1;
- (void)voiceSelecterView:(id)arg1 voiceSelected:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

