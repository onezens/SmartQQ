//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSMutableDictionary, NSString;

@interface QQSecurityConfigFetcher : NSObject <IEngineDispatchDelegate>
{
    unsigned int _fetchSeq;
    NSMutableDictionary *_delegates;
    NSMutableDictionary *_seq2ConfigName;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)fetchConfig:(id)arg1 Delegate:(id)arg2;
- (void)fetchConfig:(id)arg1 andURL:(id)arg2 andMD5:(id)arg3 andVersion:(unsigned long long)arg4 Delegate:(id)arg5;
- (void)fetchConfigFromURL:(id)arg1 Delegate:(id)arg2;
- (id)init;
- (void)notifyError:(id)arg1;
- (void)requestDownloadURLForConfig:(id)arg1 withLocalVersion:(unsigned int)arg2;
- (_Bool)restoreConfig:(id)arg1 forDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
