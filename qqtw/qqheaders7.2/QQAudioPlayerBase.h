//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQVoicePlayerDelegate.h"

@class NSString;

@interface QQAudioPlayerBase : NSObject <IQQVoicePlayerDelegate>
{
    NSString *_currentFilePath;
    int _sampleRate;
    int _xo;
    struct CVoicePlayer *_player;
    NSObject *_userInfo;
    id <IQQAmrPlayerDelegate> _delegate;
    float _skipToTime;
}

- (void).cxx_destruct;
- (void)continuePlay;
- (void)dealloc;
- (id)getAudioData:(unsigned int)arg1;
- (float)getAudioPlayerTime;
- (struct OpaqueAudioQueue *)getAudioQueue;
- (id)init;
- (void)onPlayBegin;
- (void)onPlayEnd;
- (void)pause;
- (_Bool)play:(id)arg1;
- (_Bool)playPtt:(id)arg1;
- (_Bool)playPtt:(id)arg1 userInfo:(id)arg2;
- (_Bool)playPttMarketFace:(id)arg1;
- (_Bool)playPttMarketFace:(id)arg1 userInfo:(id)arg2;
@property float skipToTime; // @synthesize skipToTime=_skipToTime;
- (void)setVolume:(float)arg1;
- (_Bool)shouldFinishPlay;
- (_Bool)shouldStartPlay;
- (void)stop;

// Remaining properties
@property(retain, nonatomic) NSString *currentFilePath; // @dynamic currentFilePath;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) id <IQQAmrPlayerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) int sampleRate; // @dynamic sampleRate;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSObject *userInfo; // @dynamic userInfo;

@end

