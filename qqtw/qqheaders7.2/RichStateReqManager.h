//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface RichStateReqManager : NSObject
{
    NSMutableDictionary *_reqDict;
    NSObject<OS_dispatch_queue> *_ioQueue;
}

- (void).cxx_destruct;
- (void)addRichStateRequest:(id)arg1 seq:(id)arg2;
- (void)clearAllRequest;
- (id)getRichStateRequest:(id)arg1;
- (id)init;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
- (void)removeRichStateReq:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *reqDict; // @synthesize reqDict=_reqDict;

@end

