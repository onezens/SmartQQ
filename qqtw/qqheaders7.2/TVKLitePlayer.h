//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KKMediaPlayerDelegate.h"
#import "KKMediaPlayerUrlExchange.h"
#import "TVKLiteMediaUrlRequestDelegate.h"
#import "TVKLogDelegate.h"
#import "TVKSDKResourceManagerDelegate.h"

@class KKMediaPlayInfo, KKMediaPlayer, NSArray, NSMutableDictionary, NSString, NSTimer, TVKLiteMediaUrlRequest, UIView;

@interface TVKLitePlayer : NSObject <KKMediaPlayerDelegate, TVKLiteMediaUrlRequestDelegate, KKMediaPlayerUrlExchange, TVKLogDelegate, TVKSDKResourceManagerDelegate>
{
    long long _tryToPlayFailCount;
    double _tryToPlayTime;
    _Bool _shouldAutoplay;
    _Bool _isEnableVR;
    _Bool _isEnableResourceLoader;
    _Bool _isLive;
    _Bool _isUserPaused;
    _Bool _fullFilled;
    _Bool _isMuted;
    _Bool _isPlayingUrl;
    _Bool _isProxyPlay;
    _Bool _isSavingDisk;
    _Bool _isDeInitP2P;
    _Bool _isPlayable;
    _Bool _isStopping;
    int _defaultMediaFormat;
    int _serviceType;
    int _networkState;
    int _currentFormat;
    int _currentState;
    int _currentPlayType;
    int _currentPlayId;
    id <TVKLitePlaybackDelegate> _delegate;
    UIView *_playerView;
    NSString *_productPlatform;
    NSString *_productSdtfrom;
    NSString *_speedRecord;
    NSString *_fileSize;
    KKMediaPlayer *_player;
    KKMediaPlayInfo *_mediaPlayInfo;
    TVKLiteMediaUrlRequest *_mediaUrlRequest;
    NSString *_currentVideoFileID;
    double _currentPlayBackTime;
    NSArray *_formatList;
    NSTimer *_prgTimer;
    long long _waitingNums;
    NSTimer *_slideToPlayTimer;
    NSTimer *_cachingToPlayTimer;
    NSString *_setFileID;
    NSMutableDictionary *_urlExParamDic;
    NSArray *_lastUrlArray;
    NSArray *_lastDurationArray;
    NSTimer *_cacheTimer;
    double _lastCacheTime;
}

+ (id)sharedInstance;
+ (_Bool)testIfIpv4:(id)arg1;
+ (id)updateVideoUrlsForIpv6:(id)arg1;
- (void).cxx_destruct;
- (void)TVHttpProxyStopPlay:(int)arg1;
@property(retain, nonatomic) NSTimer *cacheTimer; // @synthesize cacheTimer=_cacheTimer;
@property(retain, nonatomic) NSTimer *cachingToPlayTimer; // @synthesize cachingToPlayTimer=_cachingToPlayTimer;
- (_Bool)checkCouldPlayByCacheForVid:(id)arg1;
- (void)checkFirstCache;
- (void)clearResourse;
- (void)configPlayerType;
@property(nonatomic) int currentFormat; // @synthesize currentFormat=_currentFormat;
@property(readonly, nonatomic) int currentMediaFormat;
@property(nonatomic) double currentPlayBackTime; // @synthesize currentPlayBackTime=_currentPlayBackTime;
@property(readonly, nonatomic) int currentPlayID;
@property(nonatomic) int currentPlayId; // @synthesize currentPlayId=_currentPlayId;
@property(nonatomic) int currentPlayType; // @synthesize currentPlayType=_currentPlayType;
@property(readonly, nonatomic) double currentPlaybackTime;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
@property(copy, nonatomic) NSString *currentVideoFileID; // @synthesize currentVideoFileID=_currentVideoFileID;
- (void)dealloc;
@property(nonatomic) int defaultMediaFormat; // @synthesize defaultMediaFormat=_defaultMediaFormat;
@property(nonatomic) __weak id <TVKLitePlaybackDelegate> delegate; // @synthesize delegate=_delegate;
- (void)destorySlideTimer;
- (void)destoryWaithingTimerWithCached;
- (void)didAppWillForeground;
- (void)didAppWillPending;
- (void)didMediaPlayerStateChanged:(int)arg1 error:(id)arg2;
- (void)didMediaUrlRequestFailed:(id)arg1 error:(id)arg2;
- (void)didMediaUrlRequestFinished:(id)arg1 videoUrls:(id)arg2 viedoDurations:(id)arg3 videoFormatList:(id)arg4 videoDataController:(id)arg5 progInfoDataController:(id)arg6;
@property(readonly, nonatomic) double duration;
@property(copy, nonatomic) NSString *fileSize; // @synthesize fileSize=_fileSize;
- (void)flushPlayerProgress;
@property(copy, nonatomic) NSArray *formatList; // @synthesize formatList=_formatList;
@property(nonatomic) _Bool fullFilled; // @synthesize fullFilled=_fullFilled;
- (void)getCurrentPlaybackTime:(CDUnknownBlockType)arg1;
- (id)getCurrentVideoScreenShot;
- (double)getCurrentVolum;
- (id)getSpecialMp4VideoScreenShotAtTime:(double)arg1 timeTolerance:(double)arg2 error:(id *)arg3;
- (_Bool)hadAudioTrack;
- (id)init;
- (int)initModule:(id)arg1 withLogFunc:(CDUnknownFunctionPointerType)arg2 withReportFunc:(CDUnknownFunctionPointerType)arg3 withCallBackFunc:(CDUnknownFunctionPointerType)arg4;
- (int)intServiceType;
@property(nonatomic) _Bool isDeInitP2P; // @synthesize isDeInitP2P=_isDeInitP2P;
@property(nonatomic) _Bool isEnableResourceLoader; // @synthesize isEnableResourceLoader=_isEnableResourceLoader;
@property(nonatomic) _Bool isEnableVR; // @synthesize isEnableVR=_isEnableVR;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
- (_Bool)isNetworkAvaliable;
@property(nonatomic) _Bool isPlayable; // @synthesize isPlayable=_isPlayable;
- (_Bool)isPlayerMuted;
@property(nonatomic) _Bool isPlayingUrl; // @synthesize isPlayingUrl=_isPlayingUrl;
@property(nonatomic) _Bool isProxyPlay; // @synthesize isProxyPlay=_isProxyPlay;
@property(nonatomic) _Bool isSavingDisk; // @synthesize isSavingDisk=_isSavingDisk;
@property(nonatomic) _Bool isStopping; // @synthesize isStopping=_isStopping;
@property(nonatomic) _Bool isUserPaused; // @synthesize isUserPaused=_isUserPaused;
@property(nonatomic) double lastCacheTime; // @synthesize lastCacheTime=_lastCacheTime;
@property(copy, nonatomic) NSArray *lastDurationArray; // @synthesize lastDurationArray=_lastDurationArray;
@property(copy, nonatomic) NSArray *lastUrlArray; // @synthesize lastUrlArray=_lastUrlArray;
- (void)logLevel:(int)arg1 withLog:(id)arg2;
- (void)makeTimerToSliderToPlay;
- (void)makeWaitingTimerWithCachedToPlay;
@property(readonly, nonatomic) NSArray *mediaFormatList;
@property(retain, nonatomic) KKMediaPlayInfo *mediaPlayInfo; // @synthesize mediaPlayInfo=_mediaPlayInfo;
- (void)mediaPlayerCheckMediaUrlError:(id)arg1 withError:(id)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerLoadStateDidChange:(id)arg1 withError:(id)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerNaturalSizeAvailable:(id)arg1;
- (void)mediaPlayerPlaybackDidFinish:(id)arg1;
- (void)mediaPlayerPlaybackStateDidChange:(id)arg1 withError:(id)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerRequestStateChange:(id)arg1 withError:(id)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerStateNotify:(id)arg1 withState:(long long)arg2 withError:(id)arg3 withFileCacheOrder:(long long)arg4 withIsCurrentFile:(_Bool)arg5;
@property(retain, nonatomic) TVKLiteMediaUrlRequest *mediaUrlRequest; // @synthesize mediaUrlRequest=_mediaUrlRequest;
- (void)monitorCachingStateWithCached;
- (void)monitorCahingStateWithSlided;
@property(readonly, nonatomic) struct CGSize natureSize;
@property(nonatomic) int networkState; // @synthesize networkState=_networkState;
- (void)notifyCanGetScreenShot;
- (void)notifyPlayable;
- (_Bool)offlinePlayForVid:(id)arg1;
- (void)onLoadStateEmpty;
- (void)openMediaPlayerWithChannelID:(id)arg1;
- (void)openMediaPlayerWithUrls:(id)arg1 Durations:(id)arg2 isLive:(_Bool)arg3 isLocalUrl:(_Bool)arg4 startPosition:(double)arg5;
- (void)openMediaPlayerWithUrls:(id)arg1 Durations:(id)arg2 isLive:(_Bool)arg3 isLocalUrl:(_Bool)arg4 startPosition:(double)arg5 playId:(int)arg6;
- (int)openTVHttpProxyPlayerWithVideoID:(id)arg1 mediaType:(int)arg2 startPosition:(double)arg3 savedisk:(_Bool)arg4 fileID:(id)arg5;
- (void)openVRPlayerWithChannelID:(id)arg1;
- (void)pause;
- (void)play;
- (void)playOtherMediaFormat:(int)arg1;
@property(readonly, nonatomic) _Bool playable;
@property(readonly, nonatomic) double playableDuration;
@property(retain, nonatomic) KKMediaPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
- (void)playerWithChannelID:(id)arg1;
@property(retain, nonatomic) NSTimer *prgTimer; // @synthesize prgTimer=_prgTimer;
@property(copy, nonatomic) NSString *productPlatform; // @synthesize productPlatform=_productPlatform;
@property(copy, nonatomic) NSString *productSdtfrom; // @synthesize productSdtfrom=_productSdtfrom;
- (void)rePlayCurrentVideo;
- (void)removeAllPlayerItemAndPlayer;
- (long long)requestMediaTypeWithTVK:(int)arg1;
- (void)seekTo:(double)arg1;
- (void)seekTo:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *setFileID; // @synthesize setFileID=_setFileID;
- (void)setFullScreenFilled:(_Bool)arg1;
- (void)setKVForRequest;
- (void)setPlayerMuted:(_Bool)arg1;
- (void)setPlayerPlayIdAndResourceLoaderSwitch;
- (void)setProxyPlayUrlwithVideoUrls:(id)arg1 viedoDurations:(id)arg2;
@property(nonatomic) _Bool shouldAutoplay; // @synthesize shouldAutoplay=_shouldAutoplay;
@property(retain, nonatomic) NSTimer *slideToPlayTimer; // @synthesize slideToPlayTimer=_slideToPlayTimer;
@property(copy, nonatomic) NSString *speedRecord; // @synthesize speedRecord=_speedRecord;
@property(retain, nonatomic) NSMutableDictionary *urlExParamDic; // @synthesize urlExParamDic=_urlExParamDic;
- (void)setUrlExParamWithKey:(id)arg1 value:(id)arg2;
- (void)setVideoGravityMode:(id)arg1;
- (void)setVolum:(double)arg1;
@property(nonatomic) long long waitingNums; // @synthesize waitingNums=_waitingNums;
- (void)setupCacheTimer;
- (void)setupProgressTimer;
- (void)showNetworkFailed;
- (void)startMediaPlayToPlayAgainWithError:(id)arg1;
- (void)startPrepareMediaToPlay;
@property(readonly, nonatomic) int state;
- (void)stop;
- (void)stopCacheTimer;
- (void)stopLite;
- (void)stopPrgTimer;
- (id)willPlayUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

