//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SpriteBulletProtocol.h"

@class NSMutableArray, NSString;

@interface SpriteBulletManagerView : UIView <SpriteBulletProtocol>
{
    NSMutableArray *bulletQueue;
}

+ (id)sharedInstance;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
@property(retain, nonatomic) NSMutableArray *bulletQueue; // @synthesize bulletQueue;
- (void)dealloc;
- (double)getMaxFontSizeWithHeight:(double)arg1;
- (void)hideBulletViews;
- (id)init;
- (void)pauseLayer;
- (void)preShowBulletViewsWithInput:(id)arg1 containView:(id)arg2 glView:(id)arg3 spriteScale:(double)arg4;
- (void)resumeLayer;
- (void)setOrgYWithGlViewMaxY:(double)arg1 height:(double)arg2;
- (void)showBulletViews:(id)arg1 containView:(id)arg2 glView:(id)arg3 spriteScale:(double)arg4;
- (void)spriteBulletDidStop:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

