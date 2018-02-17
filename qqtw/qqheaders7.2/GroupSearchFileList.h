//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSArray, NSMutableDictionary, NSString;

@interface GroupSearchFileList : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_reqDict;
    unsigned long long _groupCode;
    NSString *_searchStr;
    NSString *_lastCookie;
    NSArray *_uinList;
    NSArray *_groupCodeList;
    id <GroupSearchFileListDelegate> _delegate;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)cancelAllRequest;
- (void)cancelRefresh;
- (void)dealloc;
@property(nonatomic) __weak id <GroupSearchFileListDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceivedMsg:(int)arg1 listArry:(id)arg2 errorCode:(unsigned int)arg3 retResult:(id)arg4;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (char *)getRefreshPBBuf:(unsigned int)arg1;
- (char *)getRefreshPBBuf:(int)arg1 count:(unsigned int)arg2;
- (id)getReqTypeFromReqDict:(int)arg1;
- (id)init;
- (void)notifyError:(id)arg1;
- (void)refresh:(unsigned long long)arg1 fileType:(int)arg2 count:(int)arg3;
- (void)refresh:(unsigned long long)arg1 groupCodeList:(id)arg2 uin:(id)arg3 searchStr:(id)arg4 count:(int)arg5;
- (_Bool)requestFileList:(char *)arg1 reqType:(int)arg2;
- (void)requestMoreFile:(unsigned int)arg1;
- (void)requestMoreFile:(int)arg1 count:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

