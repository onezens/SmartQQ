//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQNavigationController.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString;

@interface PhotoBrowserNavigationController : QQNavigationController <UIGestureRecognizerDelegate>
{
    _Bool _isSupportAutorotate;
}

- (id)initWithRootViewController:(id)arg1;
@property(nonatomic) _Bool isSupportAutorotate; // @synthesize isSupportAutorotate=_isSupportAutorotate;
- (_Bool)isSupportRightDragToGoBack;
- (_Bool)shouldAutorotate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
