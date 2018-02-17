//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface QQPttUploader : NSObject
{
    NSMutableDictionary *_uploadItem;
    NSMutableArray *_streamUploadList;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)NotifyError:(id)arg1;
- (void)NotifyFinish:(id)arg1;
- (void)NotifyStart:(id)arg1;
- (void)dealloc;
- (id)getModelKey:(id)arg1;
- (id)getMsgByUuid:(id)arg1;
- (void)handleTransferStateNotification:(id)arg1;
- (id)init;
- (_Bool)isPttUploading:(id)arg1;
- (void)saveAllAndClean;
- (void)setPttVipFlag:(id)arg1;
- (void)updateDb:(id)arg1;
- (void)updateMessageSendState:(id)arg1;
- (void)updatePttUpload:(id)arg1 uploadSuccess:(_Bool)arg2;
- (void)updateRecentDB:(id)arg1;
- (void)uploadPtt:(id)arg1;
- (void)uploadStreamPtt:(id)arg1;

@end

