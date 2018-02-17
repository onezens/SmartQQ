//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSingleton.h"

@class NSMutableDictionary, NSString;

@interface CFT_TPLocalConfigManager : BaseSingleton
{
    NSMutableDictionary *_localConfigDict;
    NSString *_curFileUin;
}

- (void)addToHideList:(id)arg1;
- (_Bool)beyondDailyShowNum:(id)arg1;
- (void)clearCacheFile:(id)arg1;
- (id)configFileInfo;
@property(retain, nonatomic) NSString *curFileUin; // @synthesize curFileUin=_curFileUin;
- (void)dealloc;
- (void)decreaseDailyShowNum:(id)arg1;
- (void)deleteConfigFileName:(id)arg1;
- (_Bool)filterUnknowUrl:(id)arg1;
- (_Bool)hasUpdateInterval;
- (_Bool)inHideList:(id)arg1;
- (id)init;
- (double)lastUpdateTime;
@property(retain, nonatomic) NSMutableDictionary *localConfigDict; // @synthesize localConfigDict=_localConfigDict;
- (id)md5ForFileName:(id)arg1 version:(id)arg2;
- (void)removeInvalidHideID;
- (void)updateConfigFileName:(id)arg1 version:(id)arg2 md5:(id)arg3;
- (double)updateInterval;
- (void)updateLastUpdateTime:(double)arg1;
- (void)updateUpdateInterval:(double)arg1;

@end
