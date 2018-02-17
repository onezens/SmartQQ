//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TrackerObject.h"

@class NSArray, TrackerView, TrackerWindow;

@interface TrackerTouch : TrackerObject
{
    long long _sendPhase;
    double _timestamp;
    TrackerView *_view;
    TrackerWindow *_window;
    NSArray *_gestureRecognizers;
    int _xo;
}

- (void).cxx_destruct;
- (id)initWithUITouch:(id)arg1 sendPhase:(long long)arg2;
- (_Bool)isSameTouch:(id)arg1;
- (id)touchName;
- (id)traceDescription;

// Remaining properties
@property(readonly, nonatomic) NSArray *gestureRecognizers; // @dynamic gestureRecognizers;
@property(readonly, nonatomic) long long sendPhase; // @dynamic sendPhase;
@property(readonly, nonatomic) double timestamp; // @dynamic timestamp;
@property(readonly, nonatomic) TrackerView *view; // @dynamic view;
@property(readonly, nonatomic) TrackerWindow *window; // @dynamic window;

@end

