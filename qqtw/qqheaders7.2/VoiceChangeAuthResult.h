//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VoiceChangeAuthResult : NSObject
{
    int _ret;
    NSString *_msg;
    NSString *_url;
}

- (void)dealloc;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) int ret; // @synthesize ret=_ret;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

