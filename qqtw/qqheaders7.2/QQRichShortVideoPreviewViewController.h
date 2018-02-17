//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "QQAudioSessionManagerDelegate.h"
#import "QQRichViewPlayerDelegte.h"

@class AVAsset, NSString, QQAsset, QQRichVideoPlayer, UIButton, UIView;

@interface QQRichShortVideoPreviewViewController : UIViewController <QQRichViewPlayerDelegte, QQAudioSessionManagerDelegate>
{
    id <QQRichShortVideoPreviewViewControllerDelegate> _delegate;
    UIButton *_player_mid_button;
    UIButton *_buttom_left_button;
    UIButton *_buttom_right_button;
    _Bool _isFromPreview;
    int _xo;
    AVAsset *_asset;
    QQAsset *_qqasset;
    QQRichVideoPlayer *_player;
    UIView *_buttom_view;
    _Bool _noshowRightButton;
    NSString *_leftButtonTitle;
}

- (id)QQAsset;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (_Bool)deactionAudioSession;
- (void)dealloc;
- (id)imageForMidButton;
- (id)initWithAsset:(id)arg1;
- (id)initWithMovieURL:(id)arg1;
@property(retain, nonatomic) NSString *leftButtonTitle; // @synthesize leftButtonTitle=_leftButtonTitle;
- (void)loadView;
@property(nonatomic) _Bool noshowRightButton; // @synthesize noshowRightButton=_noshowRightButton;
- (void)onAudioPause;
- (void)onAudioSessionActive;
- (void)onAudioSessionDeactive;
- (void)onButtomLeftButtonClick:(id)arg1;
- (void)onButtomMidButtonClick:(id)arg1;
- (void)onButtomRightButtonClick:(id)arg1;
- (void)onDeactiveWithSystem;
- (void)onIntterruptBegin;
- (void)onIntterruptEnd;
- (void)onPlayer:(id)arg1 getHostLayer:(id)arg2;
- (void)onPlayer:(id)arg1 playStatusChange:(int)arg2;
- (void)onPlayer:(id)arg1 timeChange:(CDStruct_1b6d18a9)arg2;
- (void)onVideoReqNotification;
- (void)setQQAsset:(id)arg1;
- (_Bool)setupPlayer;
- (_Bool)setupUI;
- (_Bool)shouldDelayPresentController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(retain, nonatomic) UIButton *buttom_left_button; // @dynamic buttom_left_button;
@property(retain, nonatomic) UIButton *buttom_right_button; // @dynamic buttom_right_button;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <QQRichShortVideoPreviewViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isFromPreview; // @dynamic isFromPreview;
@property(retain, nonatomic) UIButton *player_mid_button; // @dynamic player_mid_button;
@property(readonly) Class superclass;

@end

