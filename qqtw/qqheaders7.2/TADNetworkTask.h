//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, NSURLSessionDataTask;

@interface TADNetworkTask : NSObject
{
    NSString *_urlString;
    id _parameters;
    NSString *_userAgent;
    double _timeout;
    long long _retryCount;
    NSDictionary *_userInfo;
    NSData *_postData;
    long long _taskError;
    NSURLSessionDataTask *_task;
    long long _failedCount;
    long long _taskMode;
    long long _tadState;
}

- (void).cxx_destruct;
@property(nonatomic) long long failedCount; // @synthesize failedCount=_failedCount;
- (id)init;
@property(retain, nonatomic) id parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSData *postData; // @synthesize postData=_postData;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) long long tadState; // @synthesize tadState=_tadState;
@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(nonatomic) long long taskError; // @synthesize taskError=_taskError;
@property(nonatomic) long long taskMode; // @synthesize taskMode=_taskMode;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (id)taskIdentifier;

@end

