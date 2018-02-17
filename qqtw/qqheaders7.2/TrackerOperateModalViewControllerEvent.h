//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TrackerViewControllerEvent.h"

@class TrackerUIBase;

@interface TrackerOperateModalViewControllerEvent : TrackerViewControllerEvent
{
    TrackerUIBase *_modalViewController;
    long long _actionType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (id)eventNameDescription;
- (id)initWithViewViewController:(id)arg1 modalViewController:(id)arg2 actionType:(long long)arg3;
@property(readonly, nonatomic) TrackerUIBase *modalViewController; // @synthesize modalViewController=_modalViewController;
- (id)traceDescription;

@end

