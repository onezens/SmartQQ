//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, TVKLiteMediaUrlRequest;

@protocol TVKLiteMediaUrlRequestDelegate <NSObject>

@optional
- (void)didMediaMultiUrlRequestFinished:(TVKLiteMediaUrlRequest *)arg1 videoUrls:(NSArray *)arg2 viedoDurations:(NSArray *)arg3;
- (void)didMediaUrlRequestFailed:(TVKLiteMediaUrlRequest *)arg1 error:(NSError *)arg2;
- (void)didMediaUrlRequestFinished:(TVKLiteMediaUrlRequest *)arg1 videoFormatList:(NSArray *)arg2;
- (void)didMediaUrlRequestFinished:(TVKLiteMediaUrlRequest *)arg1 videoUrls:(NSArray *)arg2 viedoDurations:(NSArray *)arg3;
@end

