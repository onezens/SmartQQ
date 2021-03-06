//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface QZFeedVideoEventFrequencyController : NSObject
{
    id <QZFeedVideoEventFrequencyControllerDelegate> _delegate;
    CDUnknownBlockType _eventHander;
    NSMutableArray *_delayEventQueue;
    long long _discardEventNum;
}

+ (long long)getDevice;
+ (_Bool)isBetterDevice;
- (void).cxx_destruct;
- (void)addPendingControlEvent:(unsigned long long)arg1;
- (void)checkToRun;
@property(retain, nonatomic) NSMutableArray *delayEventQueue; // @synthesize delayEventQueue=_delayEventQueue;
@property(nonatomic) __weak id <QZFeedVideoEventFrequencyControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long discardEventNum; // @synthesize discardEventNum=_discardEventNum;
@property(copy, nonatomic) CDUnknownBlockType eventHander; // @synthesize eventHander=_eventHander;
- (id)init;
- (_Bool)isHighSpeedScrolling;
- (void)runEvent:(unsigned long long)arg1 withOpMask:(unsigned long long)arg2;
- (_Bool)shouldPlayImediately:(unsigned long long)arg1;

@end

