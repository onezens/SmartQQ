//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSkinConfig.h"

@interface QQTabBarButtonConfig : QQBaseSkinConfig
{
    struct CGPoint _tabBarIconCenter;
    struct CGPoint _tabBarTitleCenter;
    struct CGPoint _unreadIconCenter;
    struct CGPoint _unreadIconCenterHighlighted;
    _Bool showsTitle;
    struct CGPoint unreadIconCenter;
}

+ (id)getInstanceByIndex:(unsigned long long)arg1;
+ (void)initialize;
+ (void)setTabBarItemThemeCount:(int)arg1;
+ (id)tabBarButtonConfigWithTabBarIndex:(unsigned long long)arg1;
- (struct CGPoint)adaptedTabBarIconCenter;
- (struct CGPoint)adaptedTabBarTitleCenter;
- (void)setConfigValues:(id)arg1;
@property(nonatomic) _Bool showsTitle; // @synthesize showsTitle;
@property(nonatomic) struct CGPoint unreadIconCenter; // @synthesize unreadIconCenter;
- (void)setViewAppearance:(id)arg1;
- (float)unreadIconCenterY;

@end

