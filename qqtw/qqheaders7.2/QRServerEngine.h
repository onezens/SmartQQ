//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSString;

@interface QRServerEngine : NSObject <IEngineDispatchDelegate>
{
}

+ (id)shareInstance;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)getNotificationNameWithType:(int)arg1 andStatus:(_Bool)arg2;
- (id)init;
- (void)notifyError:(id)arg1;
- (int)sendRequestWithBuffer:(char *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
