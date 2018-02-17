//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QUIAlertView.h"

#import "QUIAlertViewDelegate.h"

@class NSString;

@interface TBAlertView : QUIAlertView <QUIAlertViewDelegate>
{
}

+ (id)qq_showWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 tapBlock:(CDUnknownBlockType)arg5;
+ (id)qq_showWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 tapBlock:(CDUnknownBlockType)arg6;
- (void)_checkAlertViewDelegate;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (_Bool)alertViewShouldEnableFirstOtherButton:(id)arg1;
- (void)didPresentAlertView:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType qq_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType qq_didDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType qq_didPresentBlock;
@property(copy, nonatomic) CDUnknownBlockType qq_shouldEnableFirstOtherButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType qq_tapBlock;
@property(copy, nonatomic) CDUnknownBlockType qq_willDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType qq_willPresentBlock;
- (void)willPresentAlertView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

