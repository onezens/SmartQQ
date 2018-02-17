//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQProgressData : NSObject
{
    int _style;
    double _curProgress;
    double _dstProgress;
    _Bool _uploading;
    _Bool _hidden;
    double _delta;
    _Bool _delayShowProgressCircle;
}

- (void)clearProgress;
@property(nonatomic) double curProgress; // @synthesize curProgress=_curProgress;
@property(nonatomic) _Bool delayShowProgressCircle; // @synthesize delayShowProgressCircle=_delayShowProgressCircle;
@property(nonatomic) double delta; // @synthesize delta=_delta;
@property(nonatomic) double dstProgress; // @synthesize dstProgress=_dstProgress;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
- (id)init;
@property(readonly, nonatomic) double pace; // @dynamic pace;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) _Bool uploading; // @synthesize uploading=_uploading;

@end

