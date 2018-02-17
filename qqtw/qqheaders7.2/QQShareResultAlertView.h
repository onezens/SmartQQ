//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FullscreenOverlayView.h"

@class NSMutableArray, UIImageView, UILabel, UIView;

@interface QQShareResultAlertView : FullscreenOverlayView
{
    UIView *_container;
    UIView *_topContainer;
    UIView *_bottomContainer;
    UIImageView *_backgroundView;
    unsigned long long _btnNum;
    NSMutableArray *_buttons;
    UILabel *_labelTitle;
    UILabel *_labelDescription;
    UIImageView *_ImgView;
    double _topHeight;
    double _bottomHeight;
    struct CGRect _shareResultAlertViewframe;
    UIView *_horizontalLine;
    NSMutableArray *_arrVorizonLine;
    id <QQShareResultAlertViewDeleagte> _shareAlertViewDelegate;
}

+ (id)QQShareFailAlertView:(id)arg1 rightBtnTxt:(id)arg2 content:(id)arg3 tag:(unsigned long long)arg4 delegate:(id)arg5;
+ (id)QQShareSuccessAlertView:(id)arg1 rightBtnTxt:(id)arg2 content:(id)arg3 tag:(unsigned long long)arg4 delegate:(id)arg5;
+ (id)QQShareSuccessAlertView:(id)arg1 tag:(unsigned long long)arg2 delegate:(id)arg3;
+ (id)QQShareSuccessAlertViewWithoutToWebView:(id)arg1 tag:(unsigned long long)arg2 deleage:(id)arg3;
- (void).cxx_destruct;
- (void)buttonClick:(id)arg1;
- (void)dealloc;
- (void)dismiss;
- (void)doDismiss;
- (void)highlightPressedButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 topMsg:(id)arg2 topImage:(id)arg3 topHeight:(double)arg4 delegate:(id)arg5 arrBtnTitles:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1 topMsg:(id)arg2 topImage:(id)arg3 topHeight:(double)arg4 delegate:(id)arg5 buttonTitles:(id)arg6;
- (void)layoutSubviews;
- (void)registerApplicationWillEnterBackgroundDismiss;
@property(nonatomic) __weak id <QQShareResultAlertViewDeleagte> shareAlertViewDelegate; // @synthesize shareAlertViewDelegate=_shareAlertViewDelegate;
- (void)show;
- (void)unhighlightPressedButton:(id)arg1;

@end
