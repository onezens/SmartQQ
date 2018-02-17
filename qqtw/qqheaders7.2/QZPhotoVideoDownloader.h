//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QUIAlertViewDelegate.h"
#import "QZTXVideoSDKDelegate.h"

@class NSMutableDictionary, NSString, QzoneFeedVideo;

@interface QZPhotoVideoDownloader : NSObject <QZTXVideoSDKDelegate, QUIAlertViewDelegate>
{
    NSMutableDictionary *_downloadDic;
    QzoneFeedVideo *_video;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)QZTXVideoSDKDelegate:(long long)arg1 changePlayUrl:(id)arg2 videoInfo:(id)arg3 isRestartByChangeVkey:(_Bool)arg4;
- (void)QZTXVideoSDKDelegate:(long long)arg1 error:(id)arg2;
- (void)QZTXVideoSDKDelegateStorageFileComplete:(long long)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)checkShowAlert:(id)arg1;
- (_Bool)checkShowAlertForJsbridge:(id)arg1 videoUrl:(id)arg2 duration:(int)arg3;
- (void)forceRemoveAllDownloads;
- (void)handleDidEnterBackground:(id)arg1;
- (id)init;
- (void)onNetReachabilityDidChange:(id)arg1;
- (_Bool)preloadVideoId:(id)arg1 videoUrl:(id)arg2 duration:(int)arg3;
- (void)removeAllDownloads;
- (void)reportSuccess:(_Bool)arg1 type:(unsigned long long)arg2;
- (void)saveFileUrl:(id)arg1;
- (void)saveVideo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
