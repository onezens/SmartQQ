//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QZQZLiveSquareViewDelegate.h"

@class NSArray, NSString;

@interface QZLiveBannerMgr : NSObject <QZQZLiveSquareViewDelegate>
{
    NSArray *_bannerItems;
    long long _curPlayIndex;
    _Bool _isDisplayed;
    _Bool _isStarted;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)appear;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id)bannerItemWithIndex:(long long)arg1;
- (void)dealloc;
- (void)detectIfInScreen;
- (void)didPlayIsTerminated:(id)arg1 param:(id)arg2;
- (void)disappear;
- (id)init;
- (void)installBannerItems:(id)arg1;
- (_Bool)isDisplayedInScreen:(id)arg1;
- (void)onNetworkChanged:(id)arg1;
- (void)pausePlayIndex:(long long)arg1;
- (void)resumePlayIndex:(long long)arg1;
- (_Bool)shouldAutoPlay;
- (void)startLoop;
- (void)startPlayIndex:(long long)arg1;
- (void)stopLoop;
- (void)stopPlayIndex:(long long)arg1;
- (void)uninstallBannerItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

