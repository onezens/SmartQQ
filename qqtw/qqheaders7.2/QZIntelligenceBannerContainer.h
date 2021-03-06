//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QZIntelligenceBannerBaseView, UIViewController;

@interface QZIntelligenceBannerContainer : UIView
{
    QZIntelligenceBannerBaseView *_bannerView;
    _Bool _isPassive;
    id <QZIntelligenceBannerContainerDelegate> _delegate;
    UIViewController *_hostViewController;
}

- (void).cxx_destruct;
- (id)bannerView;
- (Class)bannerViewClass:(long long)arg1;
- (void)clickBanner:(id)arg1;
- (void)closeBanner:(id)arg1;
@property(nonatomic) __weak id <QZIntelligenceBannerContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(nonatomic) _Bool isPassive; // @synthesize isPassive=_isPassive;
- (void)removeBannerView;
- (void)updateBannerView:(double)arg1;

@end

