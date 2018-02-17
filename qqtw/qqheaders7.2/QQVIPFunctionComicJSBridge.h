//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewPluginQQBizBase.h"

@class NSMutableArray, NSMutableDictionary;

@interface QQVIPFunctionComicJSBridge : QQWebViewPluginQQBizBase
{
    NSMutableDictionary *_callbackDic;
    NSMutableArray *_listenerEventNames;
    _Bool _isDeletingFiles;
}

- (void).cxx_destruct;
- (void)addEventListenerNotificationObserver;
- (void)dealloc;
- (void)executeJsCallback:(id)arg1;
- (void)handleJsBridgeRequest_comic_attachSwitchChannel:(id)arg1;
- (void)handleJsBridgeRequest_comic_backToReader:(id)arg1;
- (void)handleJsBridgeRequest_comic_clearCache:(id)arg1;
- (void)handleJsBridgeRequest_comic_closeCurrentWebview:(id)arg1;
- (void)handleJsBridgeRequest_comic_collectComic:(id)arg1;
- (void)handleJsBridgeRequest_comic_deleteCollectionData:(id)arg1;
- (void)handleJsBridgeRequest_comic_downloadComic:(id)arg1;
- (void)handleJsBridgeRequest_comic_getCacheSize:(id)arg1;
- (void)handleJsBridgeRequest_comic_getClientFavoriteList:(id)arg1;
- (void)handleJsBridgeRequest_comic_getCollectStatus:(id)arg1;
- (void)handleJsBridgeRequest_comic_getComicSectionDownloadStatus:(id)arg1;
- (void)handleJsBridgeRequest_comic_getComicSectionPayStatus:(id)arg1;
- (void)handleJsBridgeRequest_comic_getComicVipStatus:(id)arg1;
- (void)handleJsBridgeRequest_comic_getDownloadList:(id)arg1;
- (void)handleJsBridgeRequest_comic_getDownloadSectionList:(id)arg1;
- (void)handleJsBridgeRequest_comic_getDownloadTaskCount:(id)arg1;
- (void)handleJsBridgeRequest_comic_getReadInfo:(id)arg1;
- (void)handleJsBridgeRequest_comic_getRecentDownloadInfo:(id)arg1;
- (void)handleJsBridgeRequest_comic_getReporterInfo:(id)arg1;
- (void)handleJsBridgeRequest_comic_getSectionList:(id)arg1;
- (void)handleJsBridgeRequest_comic_getSwitchChannel:(id)arg1;
- (void)handleJsBridgeRequest_comic_hideShortcutItem:(id)arg1;
- (void)handleJsBridgeRequest_comic_hideSwitchChannel:(id)arg1;
- (void)handleJsBridgeRequest_comic_initPrivateSettingIcon:(id)arg1;
- (void)handleJsBridgeRequest_comic_modifyDownloadStatus:(id)arg1;
- (void)handleJsBridgeRequest_comic_modifySectionDownloadStatus:(id)arg1;
- (void)handleJsBridgeRequest_comic_openDownloadDetail:(id)arg1;
- (void)handleJsBridgeRequest_comic_openViewControllerAbove:(id)arg1;
- (void)handleJsBridgeRequest_comic_popBack:(id)arg1;
- (void)handleJsBridgeRequest_comic_queryDownloadProgress:(id)arg1;
- (void)handleJsBridgeRequest_comic_querySectionDownloadProgress:(id)arg1;
- (void)handleJsBridgeRequest_comic_saveVideoReadProgress:(id)arg1;
- (void)handleJsBridgeRequest_comic_setAutoPayStatus:(id)arg1;
- (void)handleJsBridgeRequest_comic_setComicActive:(id)arg1;
- (void)handleJsBridgeRequest_comic_setLeftTitleName:(id)arg1;
- (void)handleJsBridgeRequest_comic_setShortcutOption:(id)arg1;
- (void)handleJsBridgeRequest_comic_setSwitchChannel:(id)arg1;
- (void)handleJsBridgeRequest_comic_setTabRedPoint:(id)arg1;
- (void)handleJsBridgeRequest_comic_setTitleBarBackground:(id)arg1;
- (void)handleJsBridgeRequest_comic_setTitleName:(id)arg1;
- (void)handleJsBridgeRequest_comic_sharePicMessage:(id)arg1;
- (void)handleJsBridgeRequest_comic_showComicDialog:(id)arg1;
- (void)handleJsBridgeRequest_comic_showSwitchChannel:(id)arg1;
- (void)handleJsBridgeRequest_comic_startEventNotify:(id)arg1;
- (void)handleJsBridgeRequest_comic_startRead:(id)arg1;
- (void)onReceivedAutoHideRightButtonRedPointNotification:(id)arg1;
- (void)onReceivedListenerEventNotification:(id)arg1;

@end

