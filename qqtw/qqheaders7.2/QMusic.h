//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QMSdkLoggerDelegate.h"

@class NSString;

@interface QMusic : NSObject <QMSdkLoggerDelegate>
{
    _Bool _audioSessionActived;
    NSString *pageUrl;
}

+ (id)decodeBase64String:(id)arg1;
+ (id)instance;
+ (void)releaseInstance;
+ (id)translateFromJsonDataForRing:(id)arg1 currentUin:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)audioCachePath;
- (double)currentPlayTime;
- (double)currentSongDuration;
- (id)currentSongUserInfoDic;
- (_Bool)haveLocalAudio:(id)arg1;
- (id)imageCachePath;
- (id)init;
- (_Bool)isBufferingSong;
- (_Bool)isCurrentPlayingList:(id)arg1;
- (_Bool)isCurrentPlayingListFromRingH5;
- (_Bool)isPlayingRingList;
- (_Bool)isPlayingRingListFinished;
- (_Bool)isPlayingSong;
- (void)log:(long long)arg1 msg:(id)arg2;
- (_Bool)openUrlByMusicWebview:(id)arg1;
@property(retain) NSString *pageUrl; // @synthesize pageUrl;
- (void)pause;
- (void)playNext;
- (void)playPrev;
- (int)playSongs:(id)arg1;
- (void)registeQQWebviewPlugin;
- (void)remotePlayPause;
- (void)resetAudioSession;
- (void)restorePlayStatus;
- (void)resume;
- (void)seekTime:(double)arg1;
- (_Bool)setAudioSession;
- (_Bool)shouldRestorePlayStatus:(id)arg1;
- (void)showMusicGeneVC:(id)arg1;
- (void)showMusicPlayVC:(id)arg1;
- (void)showMusicWeb:(id)arg1 uin:(id)arg2 parentVC:(id)arg3;
- (void)showNativeMusicPlayingVC:(id)arg1 parentVC:(id)arg2;
- (void)start:(id)arg1 userInfo:(id)arg2;
- (void)stop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
