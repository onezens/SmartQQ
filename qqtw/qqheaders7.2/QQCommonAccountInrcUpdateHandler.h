//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IIncrUpdateDelegate.h"

@class NSString;

@interface QQCommonAccountInrcUpdateHandler : NSObject <IIncrUpdateDelegate>
{
}

- (void)getReqPBBuffer:(char **)arg1 buffEnd:(char **)arg2;
- (void)notifyRespPBBuffer:(const void *)arg1 size:(int)arg2 result:(int)arg3;
- (void)respPushPBBuffer:(const void *)arg1 size:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

