//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVFunExpressionViewController, NSMutableArray, QQAVFunTempGridInteractiveItem;

@interface AVFunChatInteractiveMgr : NSObject
{
    _Bool _isPlaying;
    _Bool _isPaused;
    _Bool _needResume;
    QQAVFunTempGridInteractiveItem *_lastModel;
    _Bool _isFloating;
    AVFunExpressionViewController *_animationVC;
    NSMutableArray *_playList;
    QQAVFunTempGridInteractiveItem *_curModel;
}

+ (id)getInstance;
- (void)addToPlaylist:(id)arg1;
@property(retain, nonatomic) AVFunExpressionViewController *animationVC; // @synthesize animationVC=_animationVC;
- (void)clearStorePersistentModel;
- (void)closeAllAnimation;
- (void)closeCurrentNOPersistentAnimation;
@property(retain, nonatomic) QQAVFunTempGridInteractiveItem *curModel; // @synthesize curModel=_curModel;
- (void)dealloc;
- (id)init;
- (void)interactiveItem:(id)arg1 FromNewConfigData:(id)arg2;
- (void)interactiveItem:(id)arg1 FromOldConfigData:(id)arg2;
- (id)interactiveItemFromConfig:(id)arg1;
- (_Bool)isCurrentAnimationPaused;
@property(nonatomic) _Bool isFloating; // @synthesize isFloating=_isFloating;
@property(retain, nonatomic) QQAVFunTempGridInteractiveItem *lastModel; // @synthesize lastModel=_lastModel;
- (void)pauseCurrentAnimation;
@property(retain, nonatomic) NSMutableArray *playList; // @synthesize playList=_playList;
- (void)playStorePersistentModel;
- (void)resumeCurrentAnimation;
- (void)startAnimation;
- (void)stopPersistAnimation;
- (void)storeCurrentPersistentModel;
- (void)unZipPack;

@end

