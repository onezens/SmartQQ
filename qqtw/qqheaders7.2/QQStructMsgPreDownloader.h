//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQStructMsgPreDownloadDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, QQBaseChatViewController;

@interface QQStructMsgPreDownloader : NSObject <QQStructMsgPreDownloadDelegate>
{
    NSObject<OS_dispatch_queue> *_preDownQueue;
    QQBaseChatViewController *_aioViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak QQBaseChatViewController *aioViewController; // @synthesize aioViewController=_aioViewController;
- (id)init;
- (_Bool)isMessageInCurrentAIO:(id)arg1;
- (_Bool)needDownload;
- (void)structMsgAddPredownload:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

