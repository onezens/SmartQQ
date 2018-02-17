//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMessageAssitantService.h"

@class NSString;

@interface MessageAssitantService : NSObject <IMessageAssitantService>
{
}

+ (void)destroyService;
+ (id)getService;
- (long long)_compareForC2C:(id)arg1 WithMessage:(id)arg2;
- (long long)_compareForGroup:(id)arg1 WithMessage:(id)arg2;
- (void)clearDuplicateMessageForGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

