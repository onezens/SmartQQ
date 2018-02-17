//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"

@class NSMutableData, NSString, NSTimer, NSURLConnection;

@interface QQGTMediaUploader : NSObject <NSURLConnectionDataDelegate>
{
    NSURLConnection *_urlConnection;
    NSTimer *_connectTimer;
    NSMutableData *_rawData;
    CDUnknownBlockType _uploadCallback;
}

- (void)cancelRequest;
- (void)cancelTask;
- (void)cancelTimer;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)getDataForFile:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType uploadCallback; // @synthesize uploadCallback=_uploadCallback;
- (void)startTimer;
- (_Bool)uploadMediaFile:(id)arg1 forType:(int)arg2 cgiArgu:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)uploadMediaFileResult:(int)arg1 errMsg:(id)arg2;
- (void)uploadMediaFileTimeout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
