//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQGTFileUploader;

@protocol FileUploaderDelegate <NSObject>
- (void)onFinishApplyUpload:(NSString *)arg1;
- (void)onFinishApplyUpload:(QQGTFileUploader *)arg1 withID:(NSString *)arg2;
- (void)onFinishFileUpload:(QQGTFileUploader *)arg1;
- (void)onPauseFileUpload:(QQGTFileUploader *)arg1 withStatus:(int)arg2;
@end

