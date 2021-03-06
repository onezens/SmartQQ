//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSBaseRequest.h"

#import "GSRequestProtocol.h"

@class NSArray, NSString;

@interface HotChatJoinedListRequest : GSBaseRequest <GSRequestProtocol>
{
    unsigned long long _uin;
    NSArray *_joinedhotChatList;
}

- (void).cxx_destruct;
- (void *)getRequestBodyString;
@property(retain, nonatomic) NSArray *joinedhotChatList; // @synthesize joinedhotChatList=_joinedhotChatList;
- (_Bool)openDebugMode;
- (id)parseResponseBodyString:(void *)arg1;
- (unsigned int)serviceNumber;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

