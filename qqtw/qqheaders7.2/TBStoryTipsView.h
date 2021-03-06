//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FullscreenOverlayView.h"

@class NSMutableArray, NSString, QQStoryUrlImageView, UIButton, UILabel, UIView;

@interface TBStoryTipsView : FullscreenOverlayView
{
    UIView *_container;
    QQStoryUrlImageView *_topImageView;
    UIView *_centerContainer;
    UIView *_bottomContainer;
    unsigned long long _btnNum;
    NSMutableArray *_buttons;
    UILabel *_labelTitle;
    UILabel *_labelDetail;
    UILabel *_labelDescription;
    UIButton *_closeBtn;
    NSString *_topImageUrl;
    double _topImageHeight;
    double _buttonHeight;
    double _viewWidth;
    _Bool _hasCloseBtn;
    id <TBStoryTipsViewDelegate> _tipsAlertViewDelegate;
}

- (void).cxx_destruct;
- (double)bottunAreaLayout;
- (void)buttonClick:(id)arg1;
- (double)centerInfoLayout;
- (void)closeButtonClick:(id)arg1;
- (void)dealloc;
- (void)dismiss;
- (void)doDismiss;
- (void)highlightPressedButton:(id)arg1;
- (id)initStoryGuideViewtopImage:(id)arg1 title:(id)arg2 describe:(id)arg3 arrBtnTitles:(id)arg4 hasCloseBtn:(_Bool)arg5 withDelegate:(id)arg6;
- (id)initWidth:(double)arg1 TopImage:(id)arg2 topImageHeight:(double)arg3 title:(id)arg4 detail:(id)arg5 describe:(id)arg6 buttonHeight:(double)arg7 arrBtnTitles:(id)arg8 hasCloseBtn:(_Bool)arg9 withDelegate:(id)arg10;
- (void)layoutSubviews;
- (double)mainViewLayout;
- (void)onClickBg:(id)arg1;
- (void)registerDismissNotification;
@property(nonatomic) __weak id <TBStoryTipsViewDelegate> tipsAlertViewDelegate; // @synthesize tipsAlertViewDelegate=_tipsAlertViewDelegate;
- (void)unhighlightPressedButton:(id)arg1;

@end

