//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SAMRequestEngine : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *requestDict;
    NSMutableArray *_requestLBSArray;
}

+ (void)exitInstance;
+ (id)getInstance;
- (void).cxx_destruct;
- (void)addLBSRequestItem:(id)arg1;
- (void)addRequestItem:(id)arg1 seq:(int)arg2;
- (void)cancelRequestByReq:(id)arg1;
- (void)dealloc;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)enumerateAllLBSRequestItemsFail:(id)arg1;
- (void)enumerateAllLBSRequestItemsSuccess:(id)arg1;
- (void)enumerateAllLBSRequestItemsSuccessWithLat:(id)arg1 lon:(id)arg2 address:(id)arg3 cityID:(id)arg4;
- (_Bool)findTheExclusiveRequest:(id)arg1;
- (id)getRequestItem:(int)arg1;
- (void)handleGetLocationFail:(id)arg1;
- (void)handleGetLocationSucc:(id)arg1;
- (void)handleRequestTimeout:(id)arg1;
- (id)init;
- (void)notifyError:(id)arg1;
- (void)notifyLBSFail:(id)arg1 userInfo:(id)arg2;
- (void)notifyLbsEndUpdateLocation:(id)arg1;
- (void)onMsfPacketStateWithNoErr:(id)arg1;
- (void)reSendRequest:(id)arg1 seq:(int)arg2;
- (void)reSendRequest:(id)arg1 seq:(int)arg2 success:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)registerDispatch:(id)arg1 isMainThread:(_Bool)arg2;
- (void)removeAllRequestItems;
- (void)removeRequestItem:(int)arg1;
@property(retain, nonatomic) NSMutableDictionary *requestDict; // @synthesize requestDict;
@property(retain, nonatomic) NSMutableArray *requestLBSArray; // @synthesize requestLBSArray=_requestLBSArray;
- (void)requestSending:(id)arg1 resendFlag:(_Bool)arg2 seq:(int)arg3 exclusive:(_Bool)arg4 mainThread:(_Bool)arg5 timeOut:(int)arg6 retryTimes:(int)arg7 success:(CDUnknownBlockType)arg8 failed:(CDUnknownBlockType)arg9;
- (void)sendLBSRequest:(id)arg1;
- (void)sendLBSRequest:(id)arg1 mainThread:(_Bool)arg2 afterAuth:(_Bool)arg3 success:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
- (void)sendPagingRequest:(id)arg1 mainThread:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)sendRecursionPagingRequest:(id)arg1 mainThread:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendRequest:(id)arg1;
- (void)sendRequest:(id)arg1 exclusive:(_Bool)arg2 mainThread:(_Bool)arg3 success:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
- (void)sendRequest:(id)arg1 exclusive:(_Bool)arg2 mainThread:(_Bool)arg3 timeOut:(int)arg4 retryTimes:(int)arg5 success:(CDUnknownBlockType)arg6 failed:(CDUnknownBlockType)arg7;
- (void)sendRequest:(id)arg1 exclusive:(_Bool)arg2 mainThread:(_Bool)arg3 timeOut:(int)arg4 success:(CDUnknownBlockType)arg5 failed:(CDUnknownBlockType)arg6;
- (void)sendRequest:(id)arg1 mainThread:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

