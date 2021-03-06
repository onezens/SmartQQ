//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SpriteGameActivityModel : NSObject
{
    int _gameId;
    int _startTime;
    int _endTime;
    NSString *_url;
    NSString *_startVersion;
    NSString *_endVersion;
}

- (void)dealloc;
@property(nonatomic) int endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *endVersion; // @synthesize endVersion=_endVersion;
@property(nonatomic) int gameId; // @synthesize gameId=_gameId;
- (id)initWithDict:(id)arg1;
@property(nonatomic) int startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *startVersion; // @synthesize startVersion=_startVersion;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;

@end

