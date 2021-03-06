//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZModelObject.h"

@class NSData, NSDictionary, NSString;

@interface QzHybridWebCacheData : QZModelObject
{
    long long _statusCode;
    NSString *_httpVersion;
    NSDictionary *_header;
    NSData *_bodyData;
    NSDictionary *_externInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(retain, nonatomic) NSDictionary *externInfo; // @synthesize externInfo=_externInfo;
@property(retain, nonatomic) NSDictionary *header; // @synthesize header=_header;
@property(copy, nonatomic) NSString *httpVersion; // @synthesize httpVersion=_httpVersion;
- (_Bool)isExpired;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;

@end

