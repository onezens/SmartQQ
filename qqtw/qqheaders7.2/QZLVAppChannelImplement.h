//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QAVAppChannel.h"

@class NSString;

@interface QZLVAppChannelImplement : NSObject <QAVAppChannel>
{
}

+ (id)sharedInstance;
- (int)getLogLevel;
- (id)getLogPath;
- (unsigned long long)getTinyId;
- (_Bool)identifierToTinyId:(id)arg1 ret:(CDUnknownBlockType)arg2;
- (_Bool)isLogPrint;
- (_Bool)isLogWrite;
- (void)logToAPP:(id)arg1 level:(int)arg2;
- (void)logToReport:(id)arg1 level:(int)arg2;
- (int)maxFileSize;
- (_Bool)requestAppCmd:(id)arg1 result:(CDUnknownBlockType)arg2;
- (_Bool)requestAppCmd:(id)arg1 roomId:(unsigned int)arg2 result:(CDUnknownBlockType)arg3;
- (_Bool)requestCmd:(id)arg1 cmdName:(id)arg2 result:(CDUnknownBlockType)arg3;
- (_Bool)requestCmdInner:(id)arg1 cmdName:(id)arg2 result:(CDUnknownBlockType)arg3;
- (_Bool)requestInfoCmd:(id)arg1 result:(CDUnknownBlockType)arg2;
- (_Bool)requestReportCmd:(id)arg1 type:(unsigned int)arg2 result:(CDUnknownBlockType)arg3;
- (_Bool)tinyIDToIdentifier:(id)arg1 ret:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

