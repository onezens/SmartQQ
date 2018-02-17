//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneViewController.h"

#import "QZIntelligenceBannerContainerDelegate.h"

@class NSMutableArray, NSString, QzoneBannerUnreadBannerView, UIImageView, UIViewController;

@interface MQZCollectiveFeedsController : QZoneViewController <QZIntelligenceBannerContainerDelegate>
{
    double _upImageAnimateY;
    NSMutableArray *_users;
    UIImageView *_upImageView;
    UIImageView *_downImageView;
    UIViewController *_currentVC;
    QzoneBannerUnreadBannerView *_bannerView;
    unsigned long long _currentUin;
}

@property(retain, nonatomic) QzoneBannerUnreadBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) unsigned long long currentUin; // @synthesize currentUin=_currentUin;
@property(retain, nonatomic) UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) UIImageView *downImageView; // @synthesize downImageView=_downImageView;
@property(nonatomic) double upImageAnimateY; // @synthesize upImageAnimateY=_upImageAnimateY;
@property(retain, nonatomic) UIImageView *upImageView; // @synthesize upImageView=_upImageView;
@property(retain, nonatomic) NSMutableArray *users; // @synthesize users=_users;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

