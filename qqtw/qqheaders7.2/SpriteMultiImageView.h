//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AVAudioPlayerDelegate.h"
#import "QQAudioSessionManagerDelegate.h"
#import "SpriteInstanceDelegate.h"

@class AVAudioPlayer, NSMutableArray, NSString, QQAmrPlayer, SpriteBox, SpriteInstance, sa_gl_view;

@interface SpriteMultiImageView : UIView <SpriteInstanceDelegate, QQAudioSessionManagerDelegate, AVAudioPlayerDelegate>
{
    QQAmrPlayer *_amrPlayer;
    AVAudioPlayer *_audioPlayer;
    _Bool _disablePlayer;
    _Bool _needIgnoreMute;
    id <SpriteMultiImgDelegate> _delegate;
    NSMutableArray *_userInstanceList;
    sa_gl_view *_glView;
    SpriteInstance *_friendInstance;
    SpriteBox *_box;
}

- (void).cxx_destruct;
- (void)addSpriteImgInstanceWith:(id)arg1;
- (id)amrPlayer;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
@property(retain, nonatomic) SpriteBox *box; // @synthesize box=_box;
- (int)bubbleIdWithContent:(id)arg1;
- (void)createSpriteImgInstanceWith:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <SpriteMultiImgDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool disablePlayer; // @synthesize disablePlayer=_disablePlayer;
- (void)disposeAll;
- (void)disposeFriend;
- (void)disposeWithName:(id)arg1;
@property(retain, nonatomic) SpriteInstance *friendInstance; // @synthesize friendInstance=_friendInstance;
- (id)getImgInstance:(id)arg1;
@property(retain, nonatomic) sa_gl_view *glView; // @synthesize glView=_glView;
- (void)handleSpriteAction:(struct bkSkeletonAnimation *)arg1 eventCode:(int)arg2 animationName:(const char *)arg3 taskId:(int)arg4;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isPlayingSound;
@property(readonly, retain, nonatomic) SpriteInstance *meInstance;
@property(nonatomic) _Bool needIgnoreMute; // @synthesize needIgnoreMute=_needIgnoreMute;
- (void)onAniEnd;
- (void)onAniStart;
- (void)onAudioSessionActive;
- (void)onIntterruptBegin;
- (void)onSpriteBubbleClicked:(id)arg1;
- (void)onSpriteClicked:(id)arg1;
- (void)onSpriteLongPressed:(id)arg1;
- (void)playActionWithName:(id)arg1 isDouble:(_Bool)arg2 actionId:(long long)arg3 diySoundId:(int)arg4 diySoundBeginTs:(double)arg5;
- (void)playAiModel:(id)arg1;
- (void)playDiyMusicWithDiySoundId:(int)arg1 diyBeginTS:(double)arg2;
- (void)playDoubleActionWith:(id)arg1;
- (void)playDoubleActionWithId:(long long)arg1 meName:(id)arg2;
- (void)playMusicVibrate:(id)arg1;
- (void)playSingleActionWithId:(long long)arg1 name:(id)arg2;
- (void)playSound:(id)arg1;
- (void)playSpriteBubbleWithName:(id)arg1 bubbleContent:(id)arg2 bubbleId:(int)arg3;
- (void)removeAllBubble;
- (void)removeAllImgInstance;
- (void)removeAniCallBack:(id)arg1;
- (void)removeBubbleWithName:(id)arg1;
- (void)removeImgInstance:(id)arg1;
@property(retain, nonatomic) NSMutableArray *userInstanceList; // @synthesize userInstanceList=_userInstanceList;
- (void)showBoxWithUin:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)spriteInstance:(id)arg1 actionDidDownload:(id)arg2 isSucc:(_Bool)arg3;
- (void)spriteInstance:(id)arg1 actionDidFinish:(CDStruct_6778d593)arg2 isSucc:(_Bool)arg3;
- (void)spriteInstance:(id)arg1 actionDidStart:(CDStruct_6778d593)arg2 isSucc:(_Bool)arg3;
- (void)spriteInstance:(id)arg1 bubbleDidFinishDownload:(long long)arg2 isSucc:(_Bool)arg3;
- (void)spriteInstance:(id)arg1 dresssDidFinish:(id)arg2 isRoleSucc:(_Bool)arg3 isDressSucc:(_Bool)arg4;
- (void)spriteInstance:(id)arg1 roleDidFinish:(long long)arg2 isSucc:(_Bool)arg3;
- (void)stopPlayMusicVibrate;
- (void)stopPlaySound;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
