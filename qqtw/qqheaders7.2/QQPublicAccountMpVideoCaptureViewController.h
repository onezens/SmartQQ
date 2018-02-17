//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSString, NSURL, UIButton, UIImageView, UILabel, UISlider, UIView;

@interface QQPublicAccountMpVideoCaptureViewController : QQViewController
{
    _Bool _played;
    _Bool _captured;
    NSString *_totalTime;
    NSURL *_url;
    NSString *_base64Image;
    id <QQPublicAccountMpVideoCaptureViewControllerDelegate> _delegate;
    UIView *_progressView;
    UIImageView *_imageView;
    UIButton *_stateButton;
    UIButton *_completeButton;
    UIButton *_cpatureButton;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    AVPlayerItem *_playerItem;
    id _playbackTimeObserver;
    UISlider *_timeSlider;
    UILabel *_startTimeLabel;
    UILabel *_endTimeLabel;
}

- (void).cxx_destruct;
- (void)captureImage;
- (void)changePlayerStatus;
@property(retain, nonatomic) UIButton *completeButton; // @synthesize completeButton=_completeButton;
- (void)completeCaptureImage;
- (id)convertTime:(double)arg1;
@property(retain, nonatomic) UIButton *cpatureButton; // @synthesize cpatureButton=_cpatureButton;
@property(nonatomic) __weak id <QQPublicAccountMpVideoCaptureViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didCapture:(_Bool)arg1;
- (void)didEnableCbutton:(_Bool)arg1;
- (void)didcancelCaptureImage;
- (void)didfinishCaptureImage;
@property(retain, nonatomic) UILabel *endTimeLabel; // @synthesize endTimeLabel=_endTimeLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)initAVPlayer;
- (id)initWithUrl:(id)arg1;
- (void)loadView;
- (void)monitoringPlayback:(id)arg1;
- (void)moviePlayDidEnd:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) id playbackTimeObserver; // @synthesize playbackTimeObserver=_playbackTimeObserver;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
- (void)releaseAvPlayer;
@property(retain, nonatomic) UILabel *startTimeLabel; // @synthesize startTimeLabel=_startTimeLabel;
@property(retain, nonatomic) UIButton *stateButton; // @synthesize stateButton=_stateButton;
@property(retain, nonatomic) UISlider *timeSlider; // @synthesize timeSlider=_timeSlider;
- (void)stateButtonTouched;
- (void)videoSlierChangeValueEnd;

@end

