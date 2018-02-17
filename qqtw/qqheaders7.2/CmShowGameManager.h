//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CmShowGameViewDelegate.h"

@class CmShowGameView, NSString;

@interface CmShowGameManager : NSObject <CmShowGameViewDelegate>
{
    CmShowGameView *_cmShowGameView;
}

+ (id)sharedInstance;
- (void)addShareSessionId:(id)arg1 aioType:(int)arg2;
- (_Bool)aioEnterCmShowGameWithGameID:(unsigned int)arg1 roomID:(unsigned long long)arg2 sessionId:(id)arg3 isCreator:(_Bool)arg4 gameMode:(int)arg5 aioType:(int)arg6 version:(id)arg7;
- (void)closeCmShowGame;
@property(retain, nonatomic) CmShowGameView *cmShowGameView; // @synthesize cmShowGameView=_cmShowGameView;
- (void)cmShowGameViewClose:(id)arg1;
- (void)cmShowGameViewGameTipsChange:(id)arg1;
- (void)cmShowGameViewJoinRoom:(id)arg1;
- (void)cmShowGameViewPackUp:(id)arg1;
- (void)cmShowGameViewStartGame:(id)arg1;
- (void)dealloc;
- (_Bool)enterCmShowGameWithGameID:(unsigned int)arg1 roomID:(unsigned long long)arg2 sessionId:(id)arg3 isCreator:(_Bool)arg4 gameMode:(int)arg5 aioType:(int)arg6 gameParam:(id)arg7 version:(id)arg8 fromType:(int)arg9;
- (_Bool)enterCmShowGameWithGameID:(unsigned int)arg1 roomID:(unsigned long long)arg2 sessionId:(id)arg3 isCreator:(_Bool)arg4 gameMode:(int)arg5 aioType:(int)arg6 gameParam:(id)arg7 version:(id)arg8 fromType:(int)arg9 rootView:(id)arg10;
- (id)gameViewUUID;
- (int)getCmShowGamePreviewState;
- (void)hiddenCmShowGameView;
- (id)init;
- (void)joinRoomNeed:(id)arg1 jsonDic:(id)arg2 aioType:(int)arg3 fromType:(int)arg4;
- (void)packUpTimeOut;
- (void)showCmShowGameView;
- (_Bool)webviewEnterCmShowGameWithGameID:(unsigned int)arg1 sessionId:(id)arg2 gameMode:(int)arg3 gameParam:(id)arg4 version:(id)arg5 rootView:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

