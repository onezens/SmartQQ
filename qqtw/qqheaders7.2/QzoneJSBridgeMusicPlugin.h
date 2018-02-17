//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewPluginQQBizBase.h"

#import "UIAlertViewDelegate.h"

@class NSString;

@interface QzoneJSBridgeMusicPlugin : QQWebViewPluginQQBizBase <UIAlertViewDelegate>
{
    _Bool _canReturnValue;
}

+ (long long)getLoopPlayback:(long long)arg1;
+ (long long)getPlayMode:(long long)arg1;
+ (long long)getWifiAutoPlay;
+ (void)setLoopPlayback:(long long)arg1 uin:(long long)arg2;
+ (void)setPlayMode:(long long)arg1 uin:(long long)arg2;
+ (void)setWifiAutoPlay:(long long)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (id)getCurrentMusicInfo;
- (id)getQZMusicInfoFrom:(id)arg1;
- (void)handleJsBridgeRequest_QzMusic_FmListChange:(id)arg1;
- (void)handleJsBridgeRequest_QzMusic_getLivingInfo:(id)arg1;
- (void)handleJsBridgeRequest_QzMusic_getNetworkType:(id)arg1;
- (void)handleJsBridgeRequest_QzMusic_getPlayMode:(id)arg1;
- (void)handleJsBridgeRequest_QzMusic_getPlayingSongInfo:(id)arg1;
- (void)handleJsBridgeRequest_QzMusic_getQua:(id)arg1;
- (void)handleJsBridgeRequest_QzMusic_listenMusicState:(id)arg1;
- (void)handleJsBridgeRequest_QzMusic_musicListChange:(id)arg1;
- (void)handleJsBridgeRequest_QzMusic_pausePlay:(id)arg1;
- (void)handleJsBridgeRequest_QzMusic_playAudioList:(id)arg1;
- (void)handleJsBridgeRequest_QzMusic_playLiveList:(id)arg1;
- (void)handleJsBridgeRequest_QzMusic_playMusic:(id)arg1;
- (void)handleJsBridgeRequest_QzMusic_playMusicList:(id)arg1;
- (void)handleJsBridgeRequest_QzMusic_resumePlay:(id)arg1;
- (void)handleJsBridgeRequest_QzMusic_setPlayMode:(id)arg1;
- (void)handleJsBridgeRequest_QzMusic_setRightButton:(id)arg1;
- (id)init;
- (void)musicStateChange:(id)arg1;
- (id)playStatus2Str:(long long)arg1;
- (void)rightBtnClicked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
