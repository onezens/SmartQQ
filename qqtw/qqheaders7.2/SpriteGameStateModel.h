//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface SpriteGameStateModel : NSObject
{
    int _gameState;
    unsigned int _gameID;
    unsigned int _space;
    int _resultType;
    unsigned int _sessionId;
    unsigned int _playMode;
    NSString *_roomID;
    NSMutableArray *_uinList;
    unsigned long long _winnerUin;
    NSArray *_winners;
    NSString *_wordStr;
    unsigned long long _ts;
    NSMutableArray *_sessionList;
}

- (void)dealloc;
- (id)description;
@property(nonatomic) unsigned int gameID; // @synthesize gameID=_gameID;
@property(nonatomic) int gameState; // @synthesize gameState=_gameState;
- (id)init;
@property(nonatomic) unsigned int playMode; // @synthesize playMode=_playMode;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;
@property(retain, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
@property(nonatomic) unsigned int sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSMutableArray *sessionList; // @synthesize sessionList=_sessionList;
@property(nonatomic) unsigned int space; // @synthesize space=_space;
@property(nonatomic) unsigned long long ts; // @synthesize ts=_ts;
@property(retain, nonatomic) NSMutableArray *uinList; // @synthesize uinList=_uinList;
@property(nonatomic) unsigned long long winnerUin; // @synthesize winnerUin=_winnerUin;
@property(retain, nonatomic) NSArray *winners; // @synthesize winners=_winners;
@property(retain, nonatomic) NSString *wordStr; // @synthesize wordStr=_wordStr;

@end

