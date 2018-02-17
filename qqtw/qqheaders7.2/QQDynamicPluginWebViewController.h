//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewController.h"

#import "QQBannerTipViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString, QQBannerTipView;

@interface QQDynamicPluginWebViewController : QQWebViewController <QQBannerTipViewDelegate, UIAlertViewDelegate>
{
    QQBannerTipView *_pluginTipsView;
    unsigned int _plugID;
}

- (void)bannerButtonDidClick:(id)arg1 atIndex:(long long)arg2;
- (void)bannerTipViewDidClick:(id)arg1;
- (void)bannerTipViewShowStateChange:(_Bool)arg1;
- (void)dealloc;
@property(nonatomic) unsigned int plugID; // @synthesize plugID=_plugID;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

