//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SonicConnection.h"

@class QQHttpClientSession;

@interface SonicArkRequest : SonicConnection
{
    QQHttpClientSession *_arkTask;
}

+ (_Bool)canInitWithRequest:(id)arg1;
@property(retain, nonatomic) QQHttpClientSession *arkTask; // @synthesize arkTask=_arkTask;
- (void)dealloc;
- (void)startLoading;
- (void)stopLoading;

@end

