//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, QQAIOVideoCellTipsView, QQTwinkleCircleView, UIImageView, UILabel;

@interface QQAIOShortVideoCellThumbView : UIView
{
    unsigned long long _fileSize;
    double _duration;
    long long _status;
    _Bool _isSelf;
    int _xo;
    UIImageView *_thumbView;
    UIImageView *_statusView;
    UIView *_infoView;
    UILabel *_sizeView;
    UILabel *_durationView;
    QQAIOVideoCellTipsView *_failTipsView;
    CAGradientLayer *_infoGradientLayer;
    QQTwinkleCircleView *_ssProgressView;
}

- (void)dealloc;
- (id)durationString;
- (id)getThumbView;
- (void)hideLoading;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) double duration; // @dynamic duration;
- (void)setFailTipsText:(id)arg1;
@property(nonatomic) unsigned long long fileSize; // @dynamic fileSize;
@property(nonatomic) long long status; // @dynamic status;
- (void)setThumb:(id)arg1;
- (void)setupUI;
- (void)showLoading;
- (id)sizeString;
- (id)statusImage;
- (id)thumb;

// Remaining properties
@property(nonatomic) _Bool isSelf; // @dynamic isSelf;

@end

