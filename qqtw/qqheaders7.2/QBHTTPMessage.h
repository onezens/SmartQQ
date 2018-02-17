//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QBHTTPMessage : NSObject
{
    struct __CFHTTPMessage *message;
}

- (id)allHeaderFields;
- (_Bool)appendData:(id)arg1;
- (id)body;
- (void)dealloc;
- (id)headerField:(id)arg1;
- (id)initEmptyRequest;
- (id)initRequestWithMethod:(id)arg1 URL:(id)arg2 version:(id)arg3;
- (id)initResponseWithStatusCode:(long long)arg1 description:(id)arg2 version:(id)arg3;
- (_Bool)isHeaderComplete;
- (id)messageData;
- (id)method;
- (void)setBody:(id)arg1;
- (void)setHeaderField:(id)arg1 value:(id)arg2;
- (long long)statusCode;
- (id)url;
- (id)version;

@end

