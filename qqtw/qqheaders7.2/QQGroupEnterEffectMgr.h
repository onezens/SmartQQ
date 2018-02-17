//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQGroupChatViewController, QQLockDictionary;

@interface QQGroupEnterEffectMgr : NSObject
{
    _Bool _isPlaying;
    QQLockDictionary *_playListDict;
    QQLockDictionary *_downloadList;
    unsigned long long _currentGroupCode;
    QQGroupChatViewController *_currentViewController;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addEffectToPlayList:(id)arg1;
- (void)adjustPlayerViewOffsetY;
- (void)chatViewControllerDidAppear:(id)arg1;
- (void)chatViewControllerDidDisppear:(id)arg1;
- (_Bool)checkIfEffectIsVaild:(id)arg1;
- (void)cleanData;
@property(nonatomic) unsigned long long currentGroupCode; // @synthesize currentGroupCode=_currentGroupCode;
@property(retain, nonatomic) QQGroupChatViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void)dealloc;
- (void)didDownloadFail:(id)arg1;
- (void)downloadEffect:(id)arg1;
@property(retain, nonatomic) QQLockDictionary *downloadList; // @synthesize downloadList=_downloadList;
- (id)downloadQueue;
- (id)groupEnterEffectDirPath;
- (void)handleAccountLogout;
- (void)handleEnterGroupEffectModify:(id)arg1;
- (void)handleScreenShot;
- (_Bool)hasDownloadEffect:(id)arg1;
- (id)iconForGroupLevel:(unsigned int)arg1;
- (id)init;
- (_Bool)isDownloadingEffect:(id)arg1;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (void)onQQGroupEnterEffectPush:(id)arg1;
- (void)playEnterEffectWithModel:(id)arg1;
@property(retain, nonatomic) QQLockDictionary *playListDict; // @synthesize playListDict=_playListDict;
- (void)playNextEnterEffect;
- (id)svipIconWithModel:(id)arg1;
- (void)unZipPacket:(id)arg1;

@end
