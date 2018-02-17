//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SDWebImageManagerDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, QMOtherHandler, QMPlayHandler;

@interface QMusicJSCenter : NSObject <SDWebImageManagerDelegate>
{
    NSMutableDictionary *_handlers;
    NSMutableArray *_bindCmds;
    QMPlayHandler *_playHandler;
    QMOtherHandler *_otherHandler;
    _Bool _mgenePlaying;
    int _playType;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)blurImageOkNotify:(id)arg1;
- (void)callJSCommand:(id)arg1 data:(id)arg2;
- (void)callJSCommandInter:(id)arg1 data:(id)arg2;
- (void)clearMusicGeneStatus;
- (id)handleError:(long long)arg1;
- (id)handlePluginEvent:(id)arg1;
- (id)handleRegisteCmd:(id)arg1;
- (id)handleSuccess;
- (id)handleUnRegisteCmd:(id)arg1;
- (id)init;
- (_Bool)isBindCommand:(id)arg1;
@property(nonatomic) _Bool mgenePlaying; // @synthesize mgenePlaying=_mgenePlaying;
- (id)playMusicInfoDict;
@property(nonatomic) int playType; // @synthesize playType=_playType;
- (void)playerEventNotify:(long long)arg1;
- (void)playerProgressNotify:(id)arg1;
- (void)printProgressLog:(id)arg1;
- (void)registeCmd:(id)arg1 handle:(CDUnknownBlockType)arg2;
- (void)registeJSHandler;
- (void)webImageManager:(id)arg1 didFinishWithImage:(id)arg2 forURL:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

