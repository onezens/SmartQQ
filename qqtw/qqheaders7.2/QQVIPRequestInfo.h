//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQVIPRequestInfo : NSObject
{
    unsigned long long _state;
    double _progress;
    NSString *_url;
    double _bytesReceived;
    int _xo;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;

// Remaining properties
@property(nonatomic) double bytesReceived; // @dynamic bytesReceived;
@property(nonatomic) double progress; // @dynamic progress;
@property(nonatomic) unsigned long long state; // @dynamic state;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

