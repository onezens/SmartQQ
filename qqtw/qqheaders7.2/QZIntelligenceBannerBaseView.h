//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class MQZoneFeedCellButton, NSDictionary;

@interface QZIntelligenceBannerBaseView : UIButton
{
    MQZoneFeedCellButton *_closeButton;
    NSDictionary *_bannerInfo;
    double _cellBgAlpha;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *bannerInfo; // @synthesize bannerInfo=_bannerInfo;
- (long long)bannerType;
@property(nonatomic) double cellBgAlpha; // @synthesize cellBgAlpha=_cellBgAlpha;
@property(readonly, nonatomic) MQZoneFeedCellButton *closeButton; // @synthesize closeButton=_closeButton;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)reportClick;
- (void)reportClose;
- (void)reportDisplay;
- (id)stringForTTTReport;
- (void)updateBanner;

@end

