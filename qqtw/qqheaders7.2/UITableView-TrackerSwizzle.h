//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "TrackerSwizzleProtocol.h"

@class NSString;

@interface UITableView (TrackerSwizzle) <TrackerSwizzleProtocol>
+ (void)swizzle;
- (void)TR_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)TR_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)TR_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)addSeleActionWithTouchPhase:(long long)arg1 touchs:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

