//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBarController.h"

#import "AVAudioPlayerDelegate.h"
#import "QQSkinTabBarDelegate.h"
#import "UITabBarControllerDelegate.h"

@class NSMutableArray, NSString, QQSkinTabBar;

@interface QQTabBarController : UITabBarController <QQSkinTabBarDelegate, AVAudioPlayerDelegate, UITabBarControllerDelegate>
{
    _Bool isSupportLandscape;
    unsigned long long _supportedOrientation;
    _Bool _toolBarHidden;
    unsigned long long _tabBarIndex;
    int _xo;
    QQSkinTabBar *_tabBarView;
    NSMutableArray *_themeAudioArray;
}

+ (id)appQQTabBarController;
+ (void)jumpToRecentController;
- (void)QQSkinTabBar:(id)arg1 singleClickItemAtIndex:(unsigned long long)arg2;
- (void)applicationWillEnterForeground;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)dealloc;
- (void)hidesHintForTabAtIndex:(unsigned long long)arg1 hintType:(int)arg2;
- (unsigned long long)indexWithTabBarIndex:(unsigned long long)arg1;
- (id)init;
@property(nonatomic) _Bool isSupportLandscape; // @synthesize isSupportLandscape;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playSoundForThemeTab:(id)arg1;
- (void)reciveClearMsgNotification:(id)arg1;
- (void)reloadAppearance;
- (void)removeAllUnreadIconNotification:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
@property(nonatomic) unsigned long long supportedOrientation; // @synthesize supportedOrientation=_supportedOrientation;
- (void)setTabBarHidden:(_Bool)arg1 animation:(_Bool)arg2;
@property(nonatomic) unsigned long long tabBarIndex;
@property(retain, nonatomic) QQSkinTabBar *tabBarView; // @synthesize tabBarView=_tabBarView;
@property(nonatomic) _Bool toolBarHidden; // @synthesize toolBarHidden=_toolBarHidden;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (_Bool)shouldAutorotate;
- (void)showHintForTabAtIndex:(unsigned long long)arg1;
- (void)showHintForTabAtIndex:(unsigned long long)arg1 hintType:(int)arg2;
- (void)showHintForTabAtIndex:(unsigned long long)arg1 hintType:(int)arg2 value:(id)arg3;
- (void)showImageHintForTabAtIndex:(unsigned long long)arg1 headUin:(id)arg2;
- (void)showImageHintForTabAtIndex:(unsigned long long)arg1 url:(id)arg2;
- (void)showUnreadTagForTabAtIndex:(unsigned long long)arg1 withCount:(unsigned long long)arg2;
- (void)showUnreadTagForTabAtIndexOnMainThread:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tabBar:(id)arg1 didSelectItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

