//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMAsynUrlImageView, UIButton;

@interface NearbyAlmnusBannerView : UIView
{
    NMAsynUrlImageView *_bannerImageView;
    UIButton *_cancelButton;
    id <NearbyAlmnusBannerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NearbyAlmnusBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)onClick:(id)arg1 forEvent:(id)arg2;
- (void)update:(id)arg1;

@end

