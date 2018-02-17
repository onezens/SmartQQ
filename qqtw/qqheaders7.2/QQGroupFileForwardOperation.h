//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupFileOperation.h"

#import "QQGroupFileOIDBRespondDelegate.h"

@class NSString, QQGroupFileForwardTask, QQGroupFileOIDBRequest;

@interface QQGroupFileForwardOperation : QQGroupFileOperation <QQGroupFileOIDBRespondDelegate>
{
    int _sendFeedFailCount;
    QQGroupFileOIDBRequest *_forwardRequest;
    QQGroupFileOIDBRequest *_sendFeedRequest;
    QQGroupFileForwardTask *_forwardTask;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (void)finishOperation;
@property(retain, nonatomic) QQGroupFileOIDBRequest *forwardRequest; // @synthesize forwardRequest=_forwardRequest;
@property(retain, nonatomic) QQGroupFileForwardTask *forwardTask; // @synthesize forwardTask=_forwardTask;
- (void)groupFileOIDBRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)groupFileOIDBRequest:(id)arg1 didReceivedRespond:(id)arg2;
- (id)initWithTask:(id)arg1;
- (void)receiveC2COrDiscussCopyToGroupDoneNotification:(id)arg1;
@property(retain, nonatomic) QQGroupFileOIDBRequest *sendFeedRequest; // @synthesize sendFeedRequest=_sendFeedRequest;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

