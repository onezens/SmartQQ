//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQEncounterChatViewController.h"

@interface ShoppingEncounterChatViewController : QQEncounterChatViewController
{
    int _locDistance;
    unsigned long long _serviceUIN;
}

- (void)createCustomerServiceRightButton;
- (void)dealloc;
- (id)init;
- (id)initWithUIN:(id)arg1 accostType:(int)arg2;
- (void)jumpToMap:(id)arg1;
- (void)loadView;
@property(nonatomic) int locDistance; // @synthesize locDistance=_locDistance;
- (void)onShoppingAccountCustomerService:(id)arg1;
- (void)openServiceChatViewFromRightButton;
- (void)viewDidAppear:(_Bool)arg1;

@end

