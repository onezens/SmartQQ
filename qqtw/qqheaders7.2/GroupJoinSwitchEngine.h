//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSMutableDictionary, NSString;

@interface GroupJoinSwitchEngine : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_seqDic;
    NSMutableDictionary *_dataMap;
}

+ (id)getInstance;
- (void)dealloc;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)init;
- (void)notifyError:(id)arg1;
- (_Bool)requestGetGroupShareLocation:(unsigned long long)arg1;
- (_Bool)requestGetUserExportGroup:(unsigned long long)arg1 start:(unsigned int)arg2 count:(unsigned int)arg3;
- (_Bool)requestSetExportGroup:(unsigned long long)arg1 isExport:(_Bool)arg2;
- (_Bool)requestSetGroupShareLocation:(unsigned long long)arg1 isShare:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

