//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RDMEventTask : NSObject
{
    double _startTime;
    NSString *_command;
    int _seq;
    int _size;
    int _xo;
}

+ (id)eventWithCommand:(id)arg1 seq:(int)arg2 size:(int)arg3;
@property(retain, nonatomic) NSString *cmd; // @synthesize cmd=_command;
- (void)dealloc;
- (id)description;
@property(nonatomic) int seq; // @synthesize seq=_seq;
@property(nonatomic) int size; // @synthesize size=_size;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;

@end

