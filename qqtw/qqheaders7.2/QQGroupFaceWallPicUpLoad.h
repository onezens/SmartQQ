//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"

@class NSArray, NSFileHandle, NSString, NSThread, NSTimer, NSURL, NSURLConnection, UIImage;

@interface QQGroupFaceWallPicUpLoad : NSObject <NSURLConnectionDataDelegate>
{
    id <QQGroupFaceWallPicUpLoadDelegate> _theDelegate;
    int _uploadError;
    long long _fileTag;
    NSArray *_upLoadUrls;
    UIImage *_image;
    UIImage *_thumbImage;
    double _process;
    int _xo;
    NSTimer *_httpPostTimer;
    NSURLConnection *_connection;
    int _uPostCount;
    _Bool _isTaskFinished;
    NSFileHandle *_fileHandle;
    unsigned long long _fileSize;
    NSString *_filePath;
    NSThread *_httpThread;
    int _useUrlIndex;
    NSURL *_currUpLoadUrl;
    _Bool _isUpLoading;
}

- (void).cxx_destruct;
- (_Bool)canStartUpload;
- (void)cancelHttpConnection;
- (void)cancelRetryHttpPost;
- (void)cancelUpLoadWithError:(int)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)dealloc;
- (void)doPost;
- (void)doRunloop;
- (void)httpPostTimeOut;
- (id)initWithDelegate:(id)arg1 withThread:(id)arg2;
- (_Bool)isCanRetry;
- (void)onErrorFinish:(int)arg1;
- (void)retryHttpPost;
@property(copy, nonatomic) NSString *filePath; // @dynamic filePath;
@property(nonatomic) long long fileTag; // @dynamic fileTag;
- (void)startHttpPostTimer;
- (_Bool)startUpLoad;
- (void)stop;
- (void)stopHttpPostTimer;
- (void)switchUploadIp;
- (void)uploadFile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
@property(nonatomic) double process; // @dynamic process;
@property(readonly) Class superclass;
@property(nonatomic) id <QQGroupFaceWallPicUpLoadDelegate> theDelegate; // @dynamic theDelegate;
@property(retain, nonatomic) UIImage *thumbImage; // @dynamic thumbImage;
@property(retain, nonatomic) NSArray *upLoadUrls; // @dynamic upLoadUrls;
@property(nonatomic) int uploadError; // @dynamic uploadError;

@end

