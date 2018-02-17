//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSArray;

@interface OGTSceneModel : QQModel
{
    _Bool _sayHiTrigger;
    _Bool _sayHiFrequencyControl;
    long long _timeRange;
    long long _usersCount;
    _Bool _keywordTrigger;
    NSArray *_keywordList;
    _Bool _AIOTrigger;
    int _xo;
    _Bool _FaceScoreTrigger;
    long long _sceneType;
    unsigned long long _messageSide;
    NSArray *_maleRandWordingArr;
    NSArray *_femaleRandWordingArr;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool FaceScoreTrigger; // @synthesize FaceScoreTrigger=_FaceScoreTrigger;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSArray *femaleRandWordingArr; // @synthesize femaleRandWordingArr=_femaleRandWordingArr;
- (id)initWithCoder:(id)arg1;
- (id)keywordListWithValue:(id)arg1;
@property(retain, nonatomic) NSArray *maleRandWordingArr; // @synthesize maleRandWordingArr=_maleRandWordingArr;
@property(nonatomic) unsigned long long messageSide; // @synthesize messageSide=_messageSide;
- (unsigned long long)messageSideWithValue:(id)arg1;
- (void)parseFromDictionary:(id)arg1;
- (id)randWordingFor:(_Bool)arg1;
- (id)randomWordingsWithValue:(id)arg1;
@property(nonatomic) long long sceneType; // @synthesize sceneType=_sceneType;
- (long long)sceneTypeWithType:(long long)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(nonatomic) _Bool AIOTrigger; // @dynamic AIOTrigger;
@property(retain, nonatomic) NSArray *keywordList; // @dynamic keywordList;
@property(nonatomic) _Bool keywordTrigger; // @dynamic keywordTrigger;
@property(nonatomic) _Bool sayHiFrequencyControl; // @dynamic sayHiFrequencyControl;
@property(nonatomic) _Bool sayHiTrigger; // @dynamic sayHiTrigger;
@property(nonatomic) long long timeRange; // @dynamic timeRange;
@property(nonatomic) long long usersCount; // @dynamic usersCount;

@end

