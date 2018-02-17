//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSBaseRequest.h"

#import "GSRequestProtocol.h"

@class NSString;

@interface AllDurationRequest : GSBaseRequest <GSRequestProtocol>
{
    NSString *_roomID;
}

- (void).cxx_destruct;
- (void *)getRequestBodyString;
- (id)parseResponseBodyString:(void *)arg1;
@property(copy, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
- (unsigned int)serviceNumber;
- (unsigned int)serviceType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

