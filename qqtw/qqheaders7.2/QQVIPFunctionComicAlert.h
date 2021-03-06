//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSString, UIAlertController, UIAlertView;

@interface QQVIPFunctionComicAlert : NSObject <UIAlertViewDelegate>
{
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _firstBlock;
    _Bool _hasShow;
    UIAlertView *_alert;
    UIAlertController *_alertVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIAlertView *alert; // @synthesize alert=_alert;
@property(retain, nonatomic) UIAlertController *alertVC; // @synthesize alertVC=_alertVC;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) _Bool hasShow; // @synthesize hasShow=_hasShow;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 cancelBlock:(CDUnknownBlockType)arg4 firstOtherButtonTitle:(id)arg5 firstOtherBlock:(CDUnknownBlockType)arg6;
- (void)setCancelBlock:(CDUnknownBlockType)arg1 andFirstBlock:(CDUnknownBlockType)arg2;
- (void)showAtViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

