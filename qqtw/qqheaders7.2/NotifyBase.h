//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NotifyBase : NSObject
{
    int _retryCount;
    int _sendSeq;
    unsigned int _cookie;
}

@property(nonatomic) unsigned int cookie; // @synthesize cookie=_cookie;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) int sendSeq; // @synthesize sendSeq=_sendSeq;

@end

