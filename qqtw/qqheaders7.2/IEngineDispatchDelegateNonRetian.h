//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSString;

@interface IEngineDispatchDelegateNonRetian : NSObject <IEngineDispatchDelegate>
{
    id <IEngineDispatchDelegate> _delegate;
    int _xo;
}

- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)init:(id)arg1;
- (void)notifyError:(id)arg1;
- (void)uninit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <IEngineDispatchDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

