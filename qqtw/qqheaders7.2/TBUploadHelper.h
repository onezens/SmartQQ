//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BDHUploadDelegate.h"

@class NSString;

@interface TBUploadHelper : NSObject <BDHUploadDelegate>
{
    CDUnknownBlockType _completionBlock;
    long long _taskId;
}

+ (id)sharedInstance;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)dealloc;
- (void)internalAsyncUploadImageWithPath:(id)arg1 imageData:(id)arg2 toJPG:(_Bool)arg3 withImageType:(unsigned int)arg4 fileSize:(long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)notifyBDHCancel:(long long)arg1 uploadDetail:(id)arg2;
- (void)notifyBDHFail:(long long)arg1 uploadDetail:(id)arg2 fail:(id)arg3;
- (void)notifyBDHProgress:(long long)arg1 uploadDetail:(id)arg2 progress:(float)arg3;
- (void)notifyBDHSuccess:(long long)arg1 uploadDetail:(id)arg2;
- (void)p_uploadPictureCompletionWithInfo:(id)arg1 error:(id)arg2;
@property long long taskId; // @synthesize taskId=_taskId;
- (id)syncUploadImageWithPath:(id)arg1 toJPG:(_Bool)arg2 fileSize:(long long)arg3 withError:(id *)arg4 withImageType:(unsigned int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

