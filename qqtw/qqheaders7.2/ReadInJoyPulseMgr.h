//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSTimer, ReadInJoyAIOPulse, ReadInJoyFirstScnRedPntPulse, ReadInJoyLeftBtmRedPntPulse;

@interface ReadInJoyPulseMgr : NSObject
{
    NSArray *_pulseArray;
    ReadInJoyLeftBtmRedPntPulse *_leftBtmRedPntPulse;
    ReadInJoyFirstScnRedPntPulse *_firstScnRedPntPulse;
    ReadInJoyAIOPulse *_AIOPulse;
    NSTimer *_timer;
}

+ (id)getInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) ReadInJoyAIOPulse *AIOPulse; // @synthesize AIOPulse=_AIOPulse;
@property(retain, nonatomic) ReadInJoyFirstScnRedPntPulse *firstScnRedPntPulse; // @synthesize firstScnRedPntPulse=_firstScnRedPntPulse;
@property(retain, nonatomic) ReadInJoyLeftBtmRedPntPulse *leftBtmRedPntPulse; // @synthesize leftBtmRedPntPulse=_leftBtmRedPntPulse;
@property(retain, nonatomic) NSArray *pulseArray; // @synthesize pulseArray=_pulseArray;
- (void)scheduledPulseTimerWithInterval:(unsigned long long)arg1;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;

@end

