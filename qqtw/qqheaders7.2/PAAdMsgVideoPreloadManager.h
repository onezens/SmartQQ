//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVKLitePreCacheManagerDelegate.h"

@class NSMutableDictionary, NSString;

@interface PAAdMsgVideoPreloadManager : NSObject <TVKLitePreCacheManagerDelegate>
{
    NSMutableDictionary *_preloadVideoDic;
    NSMutableDictionary *_preloadingDic;
    unsigned long long _currentSource;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addPreloadVideoInfo:(id)arg1;
- (_Bool)allowPreloadInNetMode:(unsigned long long)arg1;
- (void)clearAllPreloadVideoData;
@property(nonatomic) unsigned long long currentSource; // @synthesize currentSource=_currentSource;
- (void)deletePreloadVideo:(id)arg1 fileId:(id)arg2;
- (void)filterValidPreloadVideoDic;
- (id)getFileIDWithVid:(id)arg1;
- (id)init;
- (void)initTVKLitePlayer;
- (_Bool)isVideoCached:(id)arg1;
- (_Bool)isVideoPreloading:(id)arg1;
- (void)networkChanged:(id)arg1;
- (void)preloadDidComplete:(_Bool)arg1 playId:(int)arg2;
@property(retain, nonatomic) NSMutableDictionary *preloadVideoDic; // @synthesize preloadVideoDic=_preloadVideoDic;
@property(retain, nonatomic) NSMutableDictionary *preloadingDic; // @synthesize preloadingDic=_preloadingDic;
- (void)readPreloadVideoDic;
- (void)startNextTaskInPreloadingDic;
- (void)startPreCacheTaskCallbackForVid:(id)arg1 ResultPlayId:(int)arg2 FileID:(id)arg3;
- (void)startVideoPreload:(id)arg1 source:(unsigned long long)arg2;
- (void)startVideosPreload:(id)arg1 source:(unsigned long long)arg2;
- (void)stopAllVideoPreload;
- (void)stopVideoPreloadByPlayId:(int)arg1;
- (void)updatePreloadVideoFileId:(id)arg1 forVid:(id)arg2;
- (void)writePreloadVideoDic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

