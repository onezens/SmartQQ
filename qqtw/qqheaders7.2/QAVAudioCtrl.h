//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QAVAudioCtrl : NSObject
{
    unsigned int _volume;
    unsigned int _dynamicVolume;
    long long _outputMode;
}

- (long long)SetAudioDataDBVolume:(long long)arg1 volume:(int)arg2;
- (long long)changeAudioCategory:(long long)arg1;
@property(readonly, nonatomic) unsigned int dynamicVolume; // @synthesize dynamicVolume=_dynamicVolume;
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
@property(nonatomic) long long outputMode; // @synthesize outputMode=_outputMode;
- (void)pauseAudio;
- (long long)registerAudioDataCallback:(long long)arg1;
- (void)resumeAudio;
- (long long)setAudioDataEventDelegate:(id)arg1;
- (long long)setAudioDataFormat:(long long)arg1 desc:(struct QAVAudioFrameDesc)arg2;
- (long long)setAudioDataVolume:(long long)arg1 volume:(float)arg2;
- (long long)setVoiceType:(long long)arg1;
- (long long)unregisterAudioDataCallback:(long long)arg1;
- (long long)unregisterAudioDataCallbackAll;
@property(readonly, nonatomic) unsigned int volume; // @synthesize volume=_volume;

@end

