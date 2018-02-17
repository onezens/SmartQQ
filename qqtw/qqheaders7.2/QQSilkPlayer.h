//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IPttPlayerInterface.h"
#import "IQQVoicePlayerDelegate.h"

@class NSString, QQSilkCodec, QQSilkFile;

@interface QQSilkPlayer : NSObject <IQQVoicePlayerDelegate, IPttPlayerInterface>
{
    _Bool _isFirstRead;
    float _skipToTime;
    NSString *_currentFilePath;
    id <IQQAmrPlayerDelegate> _delegate;
    NSObject *_userInfo;
    QQSilkFile *_silkFile;
    QQSilkCodec *_silkDecoder;
    struct CVoicePlayer *_player;
}

- (void)continuePlay;
@property(copy, nonatomic) NSString *currentFilePath; // @synthesize currentFilePath=_currentFilePath;
- (void)dealloc;
@property(nonatomic) id <IQQAmrPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getAudioData:(unsigned int)arg1;
- (float)getAudioPlayerTime;
- (struct OpaqueAudioQueue *)getAudioQueue;
- (_Bool)initDecode:(unsigned long long)arg1;
- (_Bool)initPlayer:(unsigned long long)arg1;
- (void)onPlayBegin;
- (void)onPlayEnd;
- (_Bool)openFile;
- (void)pause;
- (_Bool)play:(id)arg1;
- (_Bool)playPtt:(id)arg1;
- (_Bool)playPtt:(id)arg1 userInfo:(id)arg2;
- (_Bool)playPttMarketFace:(id)arg1;
- (_Bool)playPttMarketFace:(id)arg1 userInfo:(id)arg2;
@property(nonatomic) struct CVoicePlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) QQSilkCodec *silkDecoder; // @synthesize silkDecoder=_silkDecoder;
@property(retain, nonatomic) QQSilkFile *silkFile; // @synthesize silkFile=_silkFile;
@property float skipToTime; // @synthesize skipToTime=_skipToTime;
@property(retain, nonatomic) NSObject *userInfo; // @synthesize userInfo=_userInfo;
- (void)setVolume:(float)arg1;
- (void)stop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

