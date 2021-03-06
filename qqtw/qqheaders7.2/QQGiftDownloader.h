//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer, QQGiftInfo;

@interface QQGiftDownloader : NSObject
{
    NSTimer *_giftloadingTimer;
    QQGiftInfo *_gift;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (void)cancel;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)dealloc;
@property(retain, nonatomic) QQGiftInfo *gift; // @synthesize gift=_gift;
- (void)handleResouceDownloadNotification:(id)arg1;
- (id)initWithGift:(id)arg1;
- (_Bool)isConcurrent;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (_Bool)isReady;
- (void)loadingTimerFired:(id)arg1;
- (void)startDownload;

@end

