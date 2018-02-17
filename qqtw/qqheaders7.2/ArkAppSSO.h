//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSMutableArray, NSString;

@interface ArkAppSSO : NSObject <IEngineDispatchDelegate>
{
    NSMutableArray *_taskList;
    unsigned long long _nextCookie;
}

- (void).cxx_destruct;
- (_Bool)_sendMsg:(id)arg1 isAppMsg:(_Bool)arg2 data:(char *)arg3 timeout:(int)arg4 callback:(CDUnknownBlockType)arg5 cookie:(long long *)arg6;
- (void)cancel:(long long)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)didRecievedMsg_AppMsg:(CDStruct_7895f40e)arg1 buf:(const void *)arg2 bufLen:(int)arg3;
- (id)didRecievedMsg_CmdEcho:(CDStruct_7895f40e)arg1 buf:(const void *)arg2 bufLen:(int)arg3;
- (void)doCallback:(id)arg1 rspData:(id)arg2;
- (id)getTask:(unsigned long long)arg1 remove:(_Bool)arg2;
- (id)getTask:(id)arg1 seq:(int)arg2 remove:(_Bool)arg3;
- (id)init;
- (void)notifyError:(id)arg1;
- (void)onTimeout:(id)arg1 seq:(int)arg2;
- (_Bool)sendAppMsg:(id)arg1 msg:(id)arg2 timeout:(int)arg3 cookie:(long long *)arg4 callback:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

