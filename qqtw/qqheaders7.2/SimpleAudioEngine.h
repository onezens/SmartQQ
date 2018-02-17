//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"
#import "QQAudioSessionManagerDelegate.h"

@class AVAudioPlayer, NSString;

@interface SimpleAudioEngine : NSObject <AVAudioPlayerDelegate, QQAudioSessionManagerDelegate>
{
    AVAudioPlayer *_audioPlayer;
    NSString *_musicPath;
}

- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)dealloc;
@property(retain, nonatomic) NSString *musicPath; // @synthesize musicPath=_musicPath;
- (void)onAudioSessionActive;
- (void)onAudioSessionDeactive;
- (void)onIntterruptBegin;
- (void)onIntterruptEnd;
- (void)playBackgroudMusic:(id)arg1;
- (void)playEffect:(id)arg1;
- (void)playMusic:(id)arg1;
- (void)stopBackgroudMusic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

