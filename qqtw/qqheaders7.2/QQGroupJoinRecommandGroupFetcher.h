//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSDictionary, NSString;

@interface QQGroupJoinRecommandGroupFetcher : NSObject <IEngineDispatchDelegate>
{
    id <QQGroupJoinRecommandGroupFetcherDelegate> _delegate;
    int _sequenceNumber;
    NSDictionary *_userInfo;
}

+ (id)recommandGroupFetcherWithGroupCode:(unsigned long long)arg1 andDelegate:(id)arg2;
- (void).cxx_destruct;
- (void)cancel;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)initWithGroupCode:(long long)arg1 andDelegate:(id)arg2;
- (void)notifyError:(id)arg1;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
