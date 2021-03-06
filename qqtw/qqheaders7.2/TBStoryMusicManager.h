//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"
#import "TBBizNetworkLogicDelegate.h"
#import "TBStoryMusicViewPlayDelegate.h"
#import "TBStoryMusicViewShowDelegate.h"

@class AVAudioPlayer, NSMutableArray, NSString, NSTimer, TBStoryMusicModel, TBStoryMusicView;

@interface TBStoryMusicManager : NSObject <AVAudioPlayerDelegate, TBBizNetworkLogicDelegate, TBStoryMusicViewPlayDelegate, TBStoryMusicViewShowDelegate>
{
    _Bool _isMusicForeground;
    _Bool _isMusicPlayerInScreen;
    _Bool _isShouldReqMusicList;
    double _musicListRequestTime;
    NSMutableArray *_musicList;
    NSMutableArray *_musicCacheList;
    float _videoDuration;
    float _videoPlayRate;
    TBStoryMusicModel *_musicModel;
    AVAudioPlayer *_audioPlayer;
    NSTimer *_timer;
    id <TBStoryMusicManagerPlayDelegate> _playDelegate;
    id <TBStoryMusicManagerShowDelegate> _showDelegate;
    TBStoryMusicView *_musicView;
    unsigned long long _mediaType;
    unsigned long long _userLocationType;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (void)QQMusicSelectShow:(_Bool)arg1;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)audioPlayerEndInterruption:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)audioPlayerStart;
- (void)audioPlayerStop;
- (void)audioPlayerUpdate;
- (void)audioStartPlay;
- (void)audioStopPlay;
- (void)clickCancleBtn;
- (void)clickDoneBtn;
- (void)createMusicView;
- (void)dealloc;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (void)exchangeVideoAudio;
- (void)getMusicListFormNet;
- (id)getMusicModel;
- (id)getMusicView;
- (id)init;
- (void)initAudioPlay:(id)arg1;
- (void)initMusic;
- (void)initMusicModel;
- (void)loadMusicList;
- (void)loopPlayMuisc;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) TBStoryMusicModel *musicModel; // @synthesize musicModel=_musicModel;
- (void)musicPlayerReboot;
@property(retain, nonatomic) TBStoryMusicView *musicView; // @synthesize musicView=_musicView;
- (void)musicViewEnterBackground;
- (void)musicViewEnterForeground;
@property(nonatomic) __weak id <TBStoryMusicManagerPlayDelegate> playDelegate; // @synthesize playDelegate=_playDelegate;
- (void)receiveMusicList:(id)arg1;
- (void)refreshMusicRate:(float)arg1;
- (void)resetMusicEdit;
- (void)resetMusicModel;
- (void)saveMusicList;
- (void)setFreshMusicModel:(id)arg1;
- (void)setMediaType:(unsigned long long)arg1 videoDuration:(float)arg2 videoPlayRate:(float)arg3;
- (void)setMusicPlayerInScreen:(_Bool)arg1;
@property(nonatomic) __weak id <TBStoryMusicManagerShowDelegate> showDelegate; // @synthesize showDelegate=_showDelegate;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long userLocationType; // @synthesize userLocationType=_userLocationType;
@property(nonatomic) float videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) float videoPlayRate; // @synthesize videoPlayRate=_videoPlayRate;
- (void)setVolumeChangedListener:(id)arg1;
- (void)showMusicView;
- (void)stopAudioPlayWithClearData;
- (void)stopMusicEdit;
- (void)storyUpdateMusicIcon:(unsigned long long)arg1;
- (void)storyVideoMute:(_Bool)arg1;
- (void)storyVideoPause;
- (void)storyVideoStart;
- (void)tapBlankToHideMusicView;
- (void)timerAction;
- (void)videoStartWithMuisc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

