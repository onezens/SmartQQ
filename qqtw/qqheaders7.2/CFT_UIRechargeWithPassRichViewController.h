//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UIBasePassRichViewController.h"

#import "SelectBankViewDelegate.h"

@class NSString;

@interface CFT_UIRechargeWithPassRichViewController : CFT_UIBasePassRichViewController <SelectBankViewDelegate>
{
    long long _selectIndex;
    long long _amount;
}

@property(nonatomic) long long amount; // @synthesize amount=_amount;
- (id)dictWithJSONData:(id)arg1;
- (_Bool)equalToNSNotFound:(unsigned long long)arg1;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
- (void)showPayResultWithAnimate:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

