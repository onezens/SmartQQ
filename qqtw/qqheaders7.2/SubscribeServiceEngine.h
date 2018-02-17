//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSMutableDictionary, NSString;

@interface SubscribeServiceEngine : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_fetchQueue;
}

+ (id)shareInstance;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1 forSeq:(int)arg2;
- (id)autorelease;
- (CDUnknownBlockType)completionBlockForSeq:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)getOIDBSSOPKG:(int)arg1 buffer:(id)arg2;
- (id)init;
- (void)notifyError:(id)arg1;
- (oneway void)release;
- (void)removeCompletionBlockForSeq:(int)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (int)sendRequest:(id)arg1 commend:(unsigned int)arg2 commendString:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

