//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseOperation.h"

@interface QZFeedReportOperation : QZBaseOperation
{
}

- (void)cancelJob:(_Bool)arg1;
- (void)execute;
- (void)finishTask;
- (_Bool)isRetryableError:(long long)arg1;
- (void)qzUploadFinish:(long long)arg1 taskDetail:(id)arg2;
- (void)removeJob;
- (void)uploadFaileWithTaskId:(long long)arg1;
- (void)uploadSuccessWithTaskId:(long long)arg1;

@end
