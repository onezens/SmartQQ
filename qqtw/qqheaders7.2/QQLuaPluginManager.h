//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface QQLuaPluginManager : NSObject
{
    NSMutableDictionary *_downloadingPlugins;
    NSMutableArray *_timingArr;
    NSMutableArray *_pluginArr;
    NSMutableDictionary *_pluginClientVersionCache;
}

+ (id)getInstance;
- (void)checkAndDownloadPlugin:(id)arg1;
- (void)checkAndDownloadPlugin:(id)arg1 dic:(id)arg2;
- (_Bool)checkLuaPluginExist:(id)arg1;
- (void)checkVersionInfoForPlugin:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)clearDecryptScripts;
- (void)clearDecryptScripts:(id)arg1;
- (void)copyAndUnzip:(id)arg1 zipPath:(id)arg2 toPath:(id)arg3;
- (void)copyLuaToRunningDir:(id)arg1;
- (void)copyPluginCacheToRunningDir;
- (void)copyResourcePluginToRunningDir;
- (_Bool)creatFileForOXX:(id)arg1;
- (_Bool)createDirectoryAtPath:(id)arg1;
- (void)dealloc;
- (_Bool)decryptPluginLuaAndSave:(id)arg1;
- (id)defaultUrlForPlugin:(id)arg1;
- (id)defaultVersionForPlugin:(id)arg1;
- (_Bool)deleteFileAsync:(id)arg1;
- (_Bool)deleteLuaPlugin:(id)arg1;
- (_Bool)deleteLuaPluginAsync:(id)arg1;
- (void)doUnfinishedTask;
- (_Bool)downloadDefaultPkg:(id)arg1;
- (_Bool)downloadDefaultPkg:(id)arg1 dic:(id)arg2;
- (void)downloadPlugin:(id)arg1 fForce:(_Bool)arg2 dic:(id)arg3;
- (void)forceDownloadPlugin:(id)arg1;
- (void)forceDownloadPlugin:(id)arg1 dic:(id)arg2;
- (id)getLuaPluginDefaultDir;
- (id)getLuaPluginDefaultDirById:(id)arg1;
- (id)getLuaPluginDirById:(id)arg1;
- (id)getLuaPluginRunningDir;
- (id)getLuaPluginRunningDirById:(id)arg1;
- (id)getLuaPluginUpdateDir;
- (id)getLuaPluginUpdateDirById:(id)arg1;
- (id)getPluginInfoArr;
- (int)getPluginType:(id)arg1 pluginId:(id)arg2;
- (id)getPluginTypeStr:(id)arg1;
- (id)getTempLuaPluginRunningDirById:(id)arg1;
- (id)init;
- (_Bool)isClientVersionChanged:(id)arg1;
- (_Bool)isLocalOlderThanDefault:(id)arg1;
- (_Bool)isLuaKeyExsit:(id)arg1;
- (_Bool)isLuaPlugin:(id)arg1;
- (_Bool)isLuaPluginDebugEnabled;
- (_Bool)isPluginDownloading:(id)arg1;
- (_Bool)isPluginEnabled:(id)arg1;
- (_Bool)isPluginForceUseDefaultUrl:(id)arg1;
- (_Bool)isPluginPreLoad:(id)arg1;
- (_Bool)isValidLuaPlugin:(id)arg1;
- (_Bool)isValidLuaPlugin:(id)arg1 pluginDir:(id)arg2;
- (void)movePluginAfterDownload:(id)arg1;
- (void)moveUpdatedPlugins;
- (long long)numberValueForString:(id)arg1;
- (id)pluginBidInLocal:(id)arg1;
- (id)pluginCfgInfo:(id)arg1;
- (id)pluginVersionInDecryptDir:(id)arg1;
- (id)pluginVersionInDefaultDir:(id)arg1;
- (id)pluginVersionInDownloadDir:(id)arg1;
- (id)pluginVersionInLocal:(id)arg1;
- (void)preDownloadDefaultPkg;
- (void)setPluginDownloadState:(id)arg1 isDownloading:(_Bool)arg2;
- (void)syncPluginVersion;
- (void)synchClientVersion:(id)arg1;
- (_Bool)updateLuaPlugin:(id)arg1;
- (id)versionInfo;

@end

