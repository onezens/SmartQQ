//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSInvocation, NSString;

@interface DBAsyncCallbackHelper : NSObject
{
    NSInvocation *_invoke;
    id <DBAsyncCallbackProtocol> _cb;
    NSObject *_userdata;
    int _workid;
    int _xo;
    NSString *_clsName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <DBAsyncCallbackProtocol> cb; // @synthesize cb=_cb;
@property(retain, nonatomic) NSString *clsName; // @synthesize clsName=_clsName;
@property(retain, nonatomic) NSInvocation *invoke; // @synthesize invoke=_invoke;
@property(retain, nonatomic) NSObject *userdata; // @synthesize userdata=_userdata;
@property(nonatomic) int workid; // @synthesize workid=_workid;

@end

