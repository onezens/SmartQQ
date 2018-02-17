//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableDictionary, NSTimer, UIActivityIndicatorView, UIImageView, UILabel, UILabelWithPadding;

@interface QQAVNoticeView : UIView
{
    UILabelWithPadding *_noticeLabel;
    UIActivityIndicatorView *_actView;
    UIImageView *_imgView;
    int _curPriority;
    NSMutableDictionary *_residentDict;
    NSTimer *_showTimer;
    UIView *_crmIvrTipBackground;
    _Bool _isLightContent;
    float _angle;
    long long _customizeType;
    NSTimer *_showGestureTime;
    _Bool _shouldShowBackgroundView;
    id <QQAVNoticeActionDelegate> _noticeActionDelegate;
}

- (void)changeNoticeLabelFont:(id)arg1;
@property(nonatomic) long long customizeType; // @synthesize customizeType=_customizeType;
- (void)dealloc;
- (void)deleteContentWithPriority:(int)arg1;
- (void)dismissCrmTipBackground;
- (void)dismissImage;
- (void)dismissIndicator;
- (id)getDictWithPriority:(int)arg1;
- (int)getMaxPriority;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) id <QQAVNoticeActionDelegate> noticeActionDelegate; // @synthesize noticeActionDelegate=_noticeActionDelegate;
@property(readonly) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
- (void)onTimer;
- (_Bool)removeContentWithPriority:(int)arg1;
- (void)resetAllContent;
- (_Bool)setContent:(id)arg1 withPriority:(int)arg2 withResident:(_Bool)arg3 withIndicator:(_Bool)arg4;
- (_Bool)setContent:(id)arg1 withPriority:(int)arg2 withResident:(_Bool)arg3 withShowTime:(int)arg4 withImage:(id)arg5;
- (_Bool)setContent:(id)arg1 withPriority:(int)arg2 withResident:(_Bool)arg3 withShowTime:(int)arg4 withIndicator:(_Bool)arg5;
- (void)setDictWithPriority:(int)arg1 withContent:(id)arg2 withIndicator:(_Bool)arg3 withImage:(id)arg4;
- (void)setLightContentForDarkBg:(_Bool)arg1;
- (void)setNoticeLabelFont:(double)arg1;
@property(nonatomic) _Bool shouldShowBackgroundView; // @synthesize shouldShowBackgroundView=_shouldShowBackgroundView;
- (void)showBackgroundViewOrNot:(id)arg1 imgFrame:(struct CGRect)arg2 needImg:(id)arg3;
- (void)showCrmTipBackground:(id)arg1 ImgSize:(struct CGRect)arg2 needImg:(_Bool)arg3;
- (void)showImage:(id)arg1;
- (void)showIndicator;
- (void)startShowTimerWithTime:(double)arg1;
- (void)stopShowTimer;
- (void)updateAllSubview:(float)arg1;

@end

