//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIPageViewController;

@protocol UIPageViewControllerDelegate <NSObject>

@optional
- (void)pageViewController:(UIPageViewController *)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(NSArray *)arg3 transitionCompleted:(_Bool)arg4;
- (long long)pageViewController:(UIPageViewController *)arg1 spineLocationForInterfaceOrientation:(long long)arg2;
- (void)pageViewController:(UIPageViewController *)arg1 willTransitionToViewControllers:(NSArray *)arg2;
- (long long)pageViewControllerPreferredInterfaceOrientationForPresentation:(UIPageViewController *)arg1;
- (unsigned long long)pageViewControllerSupportedInterfaceOrientations:(UIPageViewController *)arg1;
@end

