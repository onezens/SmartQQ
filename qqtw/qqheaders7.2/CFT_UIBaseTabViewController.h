//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UICustomNaviBarViewController.h"

@class UINavigationController, UIView, UIViewController;

@interface CFT_UIBaseTabViewController : CFT_UICustomNaviBarViewController
{
    _Bool _isInit;
    UINavigationController *_navController;
    UIView *_contentView;
    UIViewController *_containerVC;
}

@property(nonatomic) UIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)dealloc;
- (_Bool)isSupportRightDragToGoBack;
@property(nonatomic) UINavigationController *navController; // @synthesize navController=_navController;
- (id)navigationController;
- (id)navigationItem;
- (void)showLoadingView;
- (void)showLoadingViewWithText:(id)arg1;
- (void)viewDidHide;
- (void)viewDidShow;
- (void)viewInit;
- (void)viewWillHide;
- (void)viewWillShow;

@end

