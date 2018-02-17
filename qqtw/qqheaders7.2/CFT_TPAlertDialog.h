//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SimpleAlertView.h"

#import "SimpleAlertViewDelegate.h"

@class NSMutableArray, NSString;

@interface CFT_TPAlertDialog : SimpleAlertView <SimpleAlertViewDelegate>
{
    long long _selfRetainCount;
    _Bool _hadShownInView;
    CDUnknownBlockType _clickAction;
    id <TPAlertDialogDelegate> _dispatchDelegate;
    NSMutableArray *_dispatchSubViews;
}

+ (void)dismissCurDialog;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
- (void)dealloc;
- (void)dismiss;
@property(nonatomic) id <TPAlertDialogDelegate> dispatchDelegate; // @synthesize dispatchDelegate=_dispatchDelegate;
@property(retain, nonatomic) NSMutableArray *dispatchSubViews; // @synthesize dispatchSubViews=_dispatchSubViews;
- (id)initWithTitle:(id)arg1 message:(id)arg2 hyperlinkMapper:(id)arg3 delegate:(id)arg4 cancelButtonTitle:(id)arg5 otherButtonTitle:(id)arg6;
- (void)showInView:(id)arg1;
- (void)simpleAlertView:(id)arg1 didSelectUrl:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

