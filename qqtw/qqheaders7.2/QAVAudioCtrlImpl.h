//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QAVAudioCtrl.h"

#import "QAVReceiveAudioDelegate.h"

@class NSString;

@interface QAVAudioCtrlImpl : QAVAudioCtrl <QAVReceiveAudioDelegate>
{
    long long _micState;
    long long _speakerState;
    id <QAVAudioDataDelegate> _audioDlg;
}

- (long long)SetAudioDataDBVolume:(long long)arg1 volume:(int)arg2;
@property(nonatomic) id <QAVAudioDataDelegate> audioDlg; // @synthesize audioDlg=_audioDlg;
- (long long)changeAudioCategory:(long long)arg1;
- (void)dealloc;
- (void)enableExternalAudioDataInput:(_Bool)arg1;
- (_Bool)enableLoopBack:(_Bool)arg1;
- (_Bool)enableMic:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (_Bool)enableSpeaker:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (long long)fillExternalAudioFrame:(id)arg1;
- (long long)getAudioCategory;
- (int)getAudioDataDBVolume:(long long)arg1;
- (struct QAVAudioFrameDesc)getAudioDataFormat:(long long)arg1;
- (float)getAudioDataVolume:(long long)arg1;
- (long long)getMicState;
- (id)getQualityTips;
- (long long)getSpeakerState;
- (id)init;
- (int)onAudioCallback:(id)arg1 type:(long long)arg2 raw:(struct AudioFrame *)arg3;
- (void)pauseAudio;
- (long long)registerAudioDataCallback:(long long)arg1;
- (void)resumeAudio;
- (long long)setAudioDataEventDelegate:(id)arg1;
- (long long)setAudioDataFormat:(long long)arg1 desc:(struct QAVAudioFrameDesc)arg2;
- (long long)setAudioDataVolume:(long long)arg1 volume:(float)arg2;
- (long long)setVoiceType:(long long)arg1;
- (long long)unregisterAudioDataCallback:(long long)arg1;
- (long long)unregisterAudioDataCallbackAll;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

