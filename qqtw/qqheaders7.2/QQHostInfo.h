//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQHostInfo : NSObject
{
    NSString *_hostCandidate;
    struct _QQHostInfoValidity ipaddr_sa;
    NSString *_hostName;
    NSString *_hostAddress;
}

- (void)dealloc;
@property(readonly, nonatomic) NSString *hostAddress; // @synthesize hostAddress=_hostAddress;
@property(readonly, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
- (id)initWithHostNameOrNumber:(id)arg1;
- (struct _QQHostInfoValidity)isIPAddressStringValid:(id)arg1;
- (struct sockaddr *)validAddress;

@end

