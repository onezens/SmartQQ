//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSObject<QQWalletBannerDelegate>, NSTimer, QQWalletBanner, SFImageView, UIImageView, UILabel;

@interface QQWalletBannerView : UIView
{
    NSObject<QQWalletBannerDelegate> *_delegate;
    SFImageView *_imageView;
    QQWalletBanner *_banner;
    UIImageView *_countdownView;
    UILabel *_countdownLabel;
    double _secondsCountdown;
    NSTimer *_timer;
    _Bool _hightlight;
}

- (void).cxx_destruct;
- (void)bannerTimeup;
- (void)closeBanner:(id)arg1;
- (void)commenInit;
- (void)countdown;
- (void)dealloc;
- (void)handleTapGestureRecognizer:(id)arg1;
@property(readonly, nonatomic) _Bool hightlight; // @synthesize hightlight=_hightlight;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadWithAD:(id)arg1 image:(id)arg2;
- (void)setBannerCountdown;
- (void)setHightlight:(_Bool)arg1;
- (void)showCountdownView;
- (void)stopTimer;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

