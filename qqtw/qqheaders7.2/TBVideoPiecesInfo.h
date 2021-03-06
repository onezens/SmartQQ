//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBVideoPiecesInfo : NSObject
{
    _Bool _isLocal;
    NSString *_videoPath;
    double _startTime;
    double _endTime;
    double _totalVideoDuration;
}

- (void)dealloc;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
- (_Bool)isSystemDirectory:(id)arg1;
- (_Bool)needCutVideo;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double totalVideoDuration; // @synthesize totalVideoDuration=_totalVideoDuration;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;

@end

