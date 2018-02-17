//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IAsynDownloadImageObserver.h"
#import "QQRichViewPlayerDelegte.h"

@class AVURLAsset, CALayer, NSString, NSTimer, NSURL, QQRichVideoPlayer, QQStoryUrlImageView, UIImage, UIImageView, UILabel;

@interface TBStoryVideoPlayView : UIView <QQRichViewPlayerDelegte, IAsynDownloadImageObserver>
{
    QQRichVideoPlayer *_videoPlayer;
    NSString *_playFile;
    QQStoryUrlImageView *_coverView;
    NSTimer *_progressTimer;
    UIImageView *_doodleView;
    struct CGSize _displaySize;
    _Bool _isLandscape;
    UILabel *_mediaInfoLable;
    double _videoDuration;
    UIImageView *_transFrameImage;
    _Bool _streamInvalid;
    id <TBStoryVideoPlayViewDelegate> _delegate;
    NSString *_cover;
    UIImage *_defaultCoverImage;
    CALayer *_displayLayer;
    AVURLAsset *_playAVAssert;
    NSURL *_currentUrl;
}

+ (id)getVideoDetailWithURL:(id)arg1;
- (void)addTransferImage;
- (void)adjustiDisplayFrame;
@property(copy, nonatomic) NSString *cover; // @synthesize cover=_cover;
- (id)currentFrameShoot;
@property(retain, nonatomic) NSURL *currentUrl; // @synthesize currentUrl=_currentUrl;
- (void)dealloc;
@property(copy, nonatomic) UIImage *defaultCoverImage; // @synthesize defaultCoverImage=_defaultCoverImage;
@property(nonatomic) id <TBStoryVideoPlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)destroyVideoPlayer;
- (_Bool)didLayerRotated:(id)arg1;
@property(retain, nonatomic) CALayer *displayLayer; // @synthesize displayLayer=_displayLayer;
- (double)duration;
- (void)enableVideoRepeat:(_Bool)arg1;
- (long long)fileSizeAtPath:(id)arg1;
- (_Bool)hasPlayerExist;
- (void)initVideoPlayer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)notifyVideoState:(int)arg1;
- (void)onPlayer:(id)arg1 getHostLayer:(id)arg2;
- (void)onPlayer:(id)arg1 playStatusChange:(int)arg2;
- (void)onPlayer:(id)arg1 timeChange:(CDStruct_1b6d18a9)arg2;
- (void)onPlayerEnd:(id)arg1;
- (void)onPlayerWillStartPlay:(id)arg1;
- (void)onProgressCallBack;
- (void)pause;
- (void)play;
- (void)play:(id)arg1;
@property(retain, nonatomic) AVURLAsset *playAVAssert; // @synthesize playAVAssert=_playAVAssert;
- (void)playWithAsset:(id)arg1;
- (void)playWithAssetAsynchronously:(id)arg1;
- (int)playerStatus;
- (void)printPlayerStuckInfo;
- (void)removeCoverView;
- (void)removeDoodle;
- (void)removeTransferImage;
- (void)resetPlayerForReuse:(_Bool)arg1;
- (void)setDoodleImg:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setMute:(_Bool)arg1;
@property(nonatomic) _Bool streamInvalid; // @synthesize streamInvalid=_streamInvalid;
- (void)setTranseFrameImage:(id)arg1;
- (void)setVideoDuration;
- (void)setVideoSize:(struct CGSize)arg1 isLandScape:(_Bool)arg2;
- (void)showMeidiaInfo:(id)arg1 playMode:(id)arg2;
- (void)startTimer;
- (void)stop;
- (void)stopTimer;
- (void)stopedAction;
- (void)videoDidStartPlaying;
- (void)videoPlayDone:(int)arg1;
- (void)videoPlayerDidShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

