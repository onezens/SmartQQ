//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ReadInJoyLoginTimeReport : NSObject
{
    double _loginRIJTime;
    double _leaveRIJTime;
    double _loginQQTime;
    double _outQQTime;
    int _xo;
}

+ (id)getInstance;
- (void)dealloc;
- (id)init;
- (void)updateQQInTime;
- (void)updateQQOutTime;
- (void)updateRIJInTime;
- (void)updateRIJOutTime;
- (void)updateStayTime:(unsigned long long)arg1;

// Remaining properties
@property(nonatomic) double levelRIJTime; // @dynamic levelRIJTime;
@property(nonatomic) double loginQQTime; // @dynamic loginQQTime;
@property(nonatomic) double loginRIJTime; // @dynamic loginRIJTime;
@property(nonatomic) double outQQTime; // @dynamic outQQTime;

@end

