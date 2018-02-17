//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSArray, NSMutableArray, NSMutableSet, NSMutableString, NSObject<OS_dispatch_queue>, NSString, NSTimer;

@interface QQUnifiedPluginManager : NSObject <NSXMLParserDelegate>
{
    NSString *_strUin;
    long long _lastUpdateTime;
    NSMutableArray *_pluginArray;
    NSTimer *_updateTimer;
    _Bool _isUpdateConfig;
    int _retryUpdateCount;
    _Bool _parseSuccess;
    NSString *_xmlElementName;
    NSMutableString *_xmlEntranceName;
    NSMutableString *_xmlEntranceUrl;
    NSMutableString *_xmlQQUin;
    NSMutableString *_xmlQQNick;
    NSMutableArray *_xmlSetNameArray;
    NSMutableArray *_xmlSetUrlArray;
    NSMutableString *_xmlSimpleDes;
    NSMutableString *_xmlNewSwitch;
    NSMutableString *_xmlShowNewForNewUser;
    NSMutableString *_xmlPluginSetTips;
    NSMutableString *_xmlPluginBgColor;
    NSMutableString *_xmlSection;
    int _hasNewPlugin;
    int _xo;
    NSMutableArray *_xmlPSPName;
    NSMutableArray *_xmlPSPDisplayName;
    NSMutableArray *_xmlPSPDescription;
    NSMutableArray *_xmlPSPVersion;
    NSMutableArray *_xmlPSPMD5;
    NSMutableArray *_xmlPSPResUrl;
    NSArray *_curPluginSPList;
    NSMutableSet *_downloadingPluginNameSet;
    NSObject<OS_dispatch_queue> *_pluginSPQueue;
    _Bool _hasReportedStory;
}

+ (id)getInstance;
- (void)LoginSuccess:(id)arg1;
- (_Bool)_canCheckUpdatePluginSPList;
- (void)_clearXmlData;
- (void)_refetchAllSPPluginConfig;
- (void)_sendGetPluginSPRequest;
- (void)actionResourceResp:(void *)arg1;
- (void)actionResourceResp:(char *)arg1 len:(int)arg2;
- (void)changeAccount;
- (void)cleanMemory;
- (void)dealActionResourceResponse:(struct ClientRes *)arg1;
- (void)dealloc;
- (void)delayCleanMemory;
- (void)disablePlugin:(id)arg1;
- (void)disablePluginWithResID:(int)arg1;
- (void)downloadDidFinishWithUrl:(id)arg1;
- (void)enablePlugin:(id)arg1;
- (void)enablePluginWithResID:(int)arg1;
- (id)getDeviceInfoPara;
- (id)getMobInfoPara;
- (id)getModelName;
- (id)getPluginByID:(long long)arg1;
- (id)getPluginByType:(int)arg1;
- (id)getPluginDataPath;
- (id)getPluginPicPathByUrl:(id)arg1;
- (id)getUsrInfoPara;
- (_Bool)hasNewPlugin;
- (id)init;
- (_Bool)isPluginStdLib:(id)arg1;
- (id)loadData;
- (void)loadLastUpdateTime;
- (void)onLbsGetLocationFail;
- (void)onLbsGetLocationSucc;
- (void)onTimeout;
- (void)parseSetXmlData:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (id)picSrcPathForUrl:(id)arg1;
@property(retain) NSMutableArray *pluginArray; // @synthesize pluginArray=_pluginArray;
- (id)pluginSPDataDir;
- (void)requestConfig;
- (void)saveData;
- (void)saveLastUpdateTime;
- (void)sendGetResourceReqV2;
- (void)setHasNewPlugin:(_Bool)arg1;
- (void)setNew:(id)arg1 isNew:(_Bool)arg2;
- (void)setPluginSPConfigVersion:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *strUin; // @synthesize strUin=_strUin;
@property(retain, nonatomic) NSString *xmlElementName; // @synthesize xmlElementName=_xmlElementName;
- (id)spPluginStdLibPath;
- (void)startNextTryTimer;
- (void)startTimer;
- (void)stopTimer;
- (id)toHexString:(id)arg1;
- (void)updatePluginConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

