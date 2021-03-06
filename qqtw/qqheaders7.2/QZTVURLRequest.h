//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZTVBase.h"

#import "TVKLiteMediaUrlRequestDelegate.h"
#import "TVKLogDelegate.h"

@class NSDate, NSMutableArray, NSString, QZVideoInfo, TVKLiteMediaUrlRequest;

@interface QZTVURLRequest : QZTVBase <TVKLiteMediaUrlRequestDelegate, TVKLogDelegate>
{
    _Bool _isRequesting;
    NSDate *_requestTime;
    unsigned long long _requestType;
    TVKLiteMediaUrlRequest *_request;
    NSMutableArray *_allRequestCompletionBlocks;
    unsigned long long _retryRound;
    unsigned long long _reqTag;
    double _fetchUrlTimeCost;
}

+ (id)requestQueue;
- (void).cxx_destruct;
- (void)_didMediaUrlRequestFinished:(id)arg1 videoUrls:(id)arg2 viedoDurations:(id)arg3;
- (void)_requestURL:(unsigned long long)arg1 onComplete:(CDUnknownBlockType)arg2;
- (id)convertErrorCode:(id)arg1;
- (id)createRequest:(unsigned long long)arg1;
- (void)didMediaUrlRequestFailed:(id)arg1 error:(id)arg2;
- (void)didMediaUrlRequestFinished:(id)arg1 videoUrls:(id)arg2 viedoDurations:(id)arg3;
@property(nonatomic) double fetchUrlTimeCost; // @synthesize fetchUrlTimeCost=_fetchUrlTimeCost;
- (id)initWithVideoInfo:(id)arg1;
- (void)logLevel:(int)arg1 withLog:(id)arg2;
- (id)qzError:(id)arg1;
- (id)qzTVError:(id)arg1;
- (id)qzTVOldError:(id)arg1;
- (void)requestFinishedWithError:(id)arg1 sectionUrlInfos:(id)arg2 tipWording:(id)arg3 fetchUrlTimeCost:(double)arg4;
- (void)requestUrl:(unsigned long long)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)resultOfCkeyGet:(id)arg1 error:(id)arg2 remReqTag:(unsigned long long)arg3;
- (void)retryRequestForCkeyError;
- (void)setNetTypeParam:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) QZVideoInfo *videoInfo; // @dynamic videoInfo;

@end

