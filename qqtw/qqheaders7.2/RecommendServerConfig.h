//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LYStorage, NSMutableDictionary, NSString;

@interface RecommendServerConfig : NSObject
{
    NSMutableDictionary *_configServer;
    NSString *_selfUin;
    NSMutableDictionary *_cardFirstDisplayTime;
    LYStorage *_storage;
    _Bool _bShowCard;
    _Bool _userShowCard;
    unsigned long long _cardShowCount;
    unsigned long long _nextShowIntervalDays;
    unsigned long long _ignoreMaxTimes;
    double _ignoreHiddenTime;
    unsigned long long _ignoreTotalTimes;
    unsigned long long _todayshowCount;
    double _lastShowCardTime;
}

+ (id)getInstance;
+ (_Bool)isNeedUpdate:(double)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool bShowCard; // @synthesize bShowCard=_bShowCard;
@property(readonly, nonatomic) unsigned long long cardShowCount; // @synthesize cardShowCount=_cardShowCount;
- (void)delayPost;
- (double)getCardFirstDisplayTime:(id)arg1;
- (id)getKey;
@property(nonatomic) double ignoreHiddenTime; // @synthesize ignoreHiddenTime=_ignoreHiddenTime;
@property(readonly, nonatomic) unsigned long long ignoreMaxTimes; // @synthesize ignoreMaxTimes=_ignoreMaxTimes;
@property(nonatomic) unsigned long long ignoreTotalTimes; // @synthesize ignoreTotalTimes=_ignoreTotalTimes;
- (id)init;
@property(nonatomic) double lastShowCardTime; // @synthesize lastShowCardTime=_lastShowCardTime;
- (void)loadConfig;
- (void)log:(id)arg1;
- (void)moveConfigStorage;
@property(readonly, nonatomic) unsigned long long nextShowIntervalDays; // @synthesize nextShowIntervalDays=_nextShowIntervalDays;
- (void)refreshConfig:(id)arg1;
- (void)reloadConfig;
- (void)saveConfig:(_Bool)arg1;
- (void)setCardFirstDisplayTime:(id)arg1 time:(double)arg2;
@property(nonatomic) unsigned long long todayshowCount; // @synthesize todayshowCount=_todayshowCount;
@property(nonatomic) _Bool userShowCard; // @synthesize userShowCard=_userShowCard;

@end

