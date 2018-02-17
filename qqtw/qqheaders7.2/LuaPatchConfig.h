//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class LuaPatchObject, NSDateFormatter, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface LuaPatchConfig : NSObject <NSXMLParserDelegate>
{
    NSString *_elementName;
    NSMutableArray *_patchs;
    NSMutableArray *_localPatchs;
    LuaPatchObject *_patch;
    NSObject<OS_dispatch_queue> *_cfgQueue;
    NSDateFormatter *_mdf;
    NSMutableArray *_waitingArrary;
}

+ (_Bool)hasStartUpPatch;
+ (id)shareInstance;
- (void).cxx_destruct;
- (void)ErrorMessage:(id)arg1;
- (long long)checkCompatibility;
- (_Bool)checkVersion:(id)arg1 pkVersion:(id)arg2;
- (void)cleanUp;
- (void)clear;
- (void)clearKey;
- (_Bool)dataNilOrEmpty:(id)arg1;
- (id)decryptPatch:(id)arg1;
- (void)encryptPatch:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (id)fileMD5:(id)arg1;
- (id)init;
- (id)keyFromKeyChain:(_Bool *)arg1;
- (id)keyString:(id)arg1;
- (void)loadConfig:(CDUnknownBlockType)arg1;
- (void)parsePatchsConfig:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (int)patchConfigVersion;
- (id)patchIDs:(unsigned long long)arg1 orStatus:(unsigned long long)arg2;
- (id)patchPath:(id)arg1;
- (void)patchProcess;
- (void)patchReport:(id)arg1 status:(unsigned long long)arg2 extra:(id)arg3;
- (void)removeFile:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (_Bool)removePatchID:(id)arg1;
- (_Bool)removePatchID:(id)arg1 when:(unsigned long long)arg2 orStatus:(unsigned long long)arg3;
- (void)requestPatchConfig;
- (void)savePatchConfig:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (_Bool)savePatchID:(id)arg1 when:(unsigned long long)arg2 orStatus:(unsigned long long)arg3;
- (void)setConfigVersion:(int)arg1;
- (void)syncReport:(id)arg1 info:(id)arg2;
- (void)synchronizeConfig;
- (_Bool)timeCheck:(id)arg1;
- (_Bool)unzipPatchFile:(id)arg1 toFolder:(id)arg2;
- (unsigned long long)versionToNumber:(id)arg1 separator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

