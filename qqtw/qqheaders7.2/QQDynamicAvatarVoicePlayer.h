//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQDynamicAvatarPlayer.h"

#import "QQAudioSessionManagerDelegate.h"
#import "QQRichViewPlayerDelegte.h"

@class NSString, QQRichVideoPlayer;

@interface QQDynamicAvatarVoicePlayer : QQDynamicAvatarPlayer <QQRichViewPlayerDelegte, QQAudioSessionManagerDelegate>
{
    QQRichVideoPlayer *_player;
    _Bool _hasPlayed;
    _Bool _hasStoped;
    _Bool _resumeWhenIntterruptEnd;
    _Bool _resumeWhenAudioSessionDeactive;
}

- (void).cxx_destruct;
- (void)deactiveAudioSession;
- (void)dealloc;
- (id)init;
- (_Bool)loadVideo:(id)arg1 videoSize:(struct CGSize)arg2;
- (void)onAudioSessionActive;
- (void)onAudioSessionDeactive;
- (void)onIntterruptBegin;
- (void)onIntterruptEnd;
- (void)onPlayer:(id)arg1 getHostLayer:(id)arg2;
- (void)onPlayer:(id)arg1 playStatusChange:(int)arg2;
- (void)onPlayer:(id)arg1 timeChange:(CDStruct_1b6d18a9)arg2;
- (void)onPlayerEnd:(id)arg1;
- (void)onPlayerWillStartPlay:(id)arg1;
- (void)pause;
- (void)play;
- (unsigned long long)playStatus;
- (void)replay;
- (_Bool)requestAudioSession;
- (void)setAudioSessionAmbientSoundMix;
- (void)setAudioSessionPlayback;
- (void)stop;
- (void)stopAndClear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

