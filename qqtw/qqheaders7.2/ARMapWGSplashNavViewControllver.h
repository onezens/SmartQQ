//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQNavigationController.h"

#import "ARMapWGTransitionAnimating.h"
#import "ARMapWGTransitionDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSString;

@interface ARMapWGSplashNavViewControllver : QQNavigationController <UINavigationControllerDelegate, ARMapWGTransitionAnimating, ARMapWGTransitionDelegate, UIViewControllerTransitioningDelegate>
{
}

- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

