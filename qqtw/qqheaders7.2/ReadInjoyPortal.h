//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RDVTabBarControllerDataSource.h"
#import "RDVTabBarControllerDelegate.h"

@class NSArray, NSString, RDVTabBarController, TabDataItem;

@interface ReadInjoyPortal : NSObject <RDVTabBarControllerDelegate, RDVTabBarControllerDataSource>
{
    NSArray *_tabDataItems;
    TabDataItem *_tabDataSelect;
    long long _source;
    _Bool _isFirstEnter;
    RDVTabBarController *_tab;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (id)GetReadinJoyModelMsgKey;
- (long long)HasRedPointTabCount;
- (id)buildUp;
- (void)cleanRedPointWithTabType:(unsigned long long)arg1;
- (void)cleanup;
- (id)currentTab;
- (unsigned long long)getRedPointTypeWithTabType:(unsigned long long)arg1;
- (int)getTabSource;
- (id)getTabVC:(long long)arg1;
- (void)hiddenTips:(unsigned long long)arg1;
- (void)hideMineMsgTips;
- (id)init;
- (_Bool)isFirstEnter;
- (_Bool)isTopedReadinJoy;
- (id)itemWithType:(unsigned long long)arg1;
- (struct CGPoint)locationWithType:(unsigned long long)arg1;
- (long long)onKeepTop;
- (void)performSelector:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3 withObject:(id)arg4 withObject:(id)arg5;
- (long long)portalSource;
- (void)readInJoyJumpTo:(unsigned long long)arg1;
- (void)readInJoyPushOnTo:(id)arg1 from:(long long)arg2 tabType:(unsigned long long)arg3;
- (void)redPoint:(unsigned long long)arg1 pointType:(unsigned long long)arg2 pointValue:(long long)arg3;
- (void)setKeepTop:(long long)arg1;
- (void)setManualKeepTop:(long long)arg1;
- (void)setReadinJoyTop:(_Bool)arg1;
@property(nonatomic) __weak RDVTabBarController *tab; // @synthesize tab=_tab;
- (void)setup;
- (void)showMineMsgTips;
- (void)showTips:(unsigned long long)arg1 data:(id)arg2;
- (void)tabBarController:(id)arg1 didSelectTabDataItem:(id)arg2;
- (void)tabBarController:(id)arg1 menuAction:(id)arg2;
- (void)tabBarController:(id)arg1 menuLongPress:(id)arg2;
- (id)tabBarControllerDataItems;
- (void)tabBarControllerPropertySet:(id)arg1;
- (void)tabTipsDidClick:(id)arg1;
- (void)tabWillDisappear;
- (id)tabWithIndex:(long long)arg1;
- (id)tabWithType:(unsigned long long)arg1;
- (void)tipsPriorityCalc:(unsigned long long)arg1;
- (void)videoCellDidSelect:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

