//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APMidasToastContainerView.h"

@class APMidasBizManager;

@interface APMidasExpressView : APMidasToastContainerView
{
    id <APMidasExpressViewDelegate> expressDelegate;
    APMidasBizManager *_bizManager;
}

- (void)changeChannel:(id)arg1;
- (id)initWithParentView:(id)arg1 btnTitle:(id)arg2 bizMode:(id)arg3;
- (void)onBtnClicked;
- (void)onClose;
- (void)reloadPrice;

@end

