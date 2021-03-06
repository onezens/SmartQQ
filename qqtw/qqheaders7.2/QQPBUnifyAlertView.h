//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QQPBAlertContainerView;

@interface QQPBUnifyAlertView : UIView
{
    QQPBAlertContainerView *_containerView;
    CDUnknownBlockType _completionHandler;
}

+ (void)dismissAlertView;
+ (_Bool)isAlertViewExisted;
+ (void)showUnifyAlertWithCompletion:(CDUnknownBlockType)arg1;
+ (void)showWithTitle:(id)arg1 message:(id)arg2 buttonList:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)buttonAction:(id)arg1;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonList:(id)arg3;

@end

