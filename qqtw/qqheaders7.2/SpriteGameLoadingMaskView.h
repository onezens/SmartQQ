//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIAlertViewDelegate.h"

@class NSString, SpriteGameLoadingImageView, UIButton, UILabel;

@interface SpriteGameLoadingMaskView : UIView <UIAlertViewDelegate>
{
    SpriteGameLoadingImageView *_gamePad;
    UILabel *_waitLabel;
    UIButton *_cancelBtn;
    _Bool _needAgain;
    unsigned int _gameId;
    int _gameMode;
    unsigned long long _roomId;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)cancelMask;
- (_Bool)checkIfAlreadyPlayGame;
- (void)dealWithRetCode:(int)arg1 dic:(id)arg2;
- (void)dealloc;
@property(nonatomic) unsigned int gameId; // @synthesize gameId=_gameId;
@property(nonatomic) int gameMode; // @synthesize gameMode=_gameMode;
- (id)initWithRoomId:(unsigned long long)arg1 gameId:(unsigned int)arg2 gameMode:(int)arg3;
- (void)loadGame;
@property(nonatomic) _Bool needAgain; // @synthesize needAgain=_needAgain;
- (void)p_canJoinRoomWithGameId:(unsigned int)arg1 roomId:(unsigned long long)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)p_checkGameWithGameId:(unsigned int)arg1;
- (void)p_enterCmShowGameWithGameId:(unsigned int)arg1 roomId:(unsigned long long)arg2 gameMode:(int)arg3 version:(id)arg4;
@property(nonatomic) unsigned long long roomId; // @synthesize roomId=_roomId;
- (void)showAlertWithWordStr:(id)arg1 tag:(unsigned long long)arg2;
- (void)spriteApplicationBecomeActive:(id)arg1;
- (void)updateProgress:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

