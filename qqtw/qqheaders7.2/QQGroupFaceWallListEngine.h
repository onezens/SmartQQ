//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSMutableDictionary, NSString;

@interface QQGroupFaceWallListEngine : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_SeqToSubcmdDict;
}

+ (id)shareInstance;
- (_Bool)QQGroupFaceWallDelPic:(unsigned long long)arg1 seq:(int)arg2 arryList:(id)arg3;
- (_Bool)QQGroupFaceWallModifyOrder:(unsigned long long)arg1 seq:(int)arg2 arryList:(id)arg3;
- (_Bool)QQGroupFaceWallSetDefault:(unsigned long long)arg1 seq:(int)arg2 defaultId:(int)arg3;
- (void)dealloc;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)init;
- (_Bool)isConnected;
- (void)notifyError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

