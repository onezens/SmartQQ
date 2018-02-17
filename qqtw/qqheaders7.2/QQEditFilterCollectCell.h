//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CAShapeLayer, QQAsynUrlImageView, QQFilterComboConfigModel, QQMultimediaEditFilterComponent, QQRichMediaLoadingProgressView, UIImageView, UILabel, UIView;

@interface QQEditFilterCollectCell : UICollectionViewCell
{
    QQAsynUrlImageView *_imgView;
    UILabel *_titleLabel;
    UIImageView *_downloadImgView;
    QQRichMediaLoadingProgressView *_progressView;
    UIView *_hightlightView;
    QQAsynUrlImageView *_badgeView;
    QQFilterComboConfigModel *_data;
    QQMultimediaEditFilterComponent *_filterComponent;
    UIImageView *_redDot;
    CAShapeLayer *_coverLayer;
    CAShapeLayer *_circleLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(retain, nonatomic) CAShapeLayer *coverLayer; // @synthesize coverLayer=_coverLayer;
@property(retain, nonatomic) QQFilterComboConfigModel *data; // @synthesize data=_data;
- (void)dealloc;
@property(nonatomic) __weak QQMultimediaEditFilterComponent *filterComponent; // @synthesize filterComponent=_filterComponent;
- (void)hightlightSubView:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutImage;
- (void)layoutLabel;
- (void)layoutProgress;
- (void)layoutSubIcon;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) UIImageView *redDot; // @synthesize redDot=_redDot;
- (void)setHighlighted:(_Bool)arg1;
- (void)setIsNeedRetDot:(_Bool)arg1;
- (void)updateDownloadProgress:(double)arg1;

@end

