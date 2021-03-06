//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AnaUplaodNotifier.h"
#import "AnaUploader.h"

@class NSString;

@interface BeaconRealTimeEventUploader : NSObject <AnaUplaodNotifier, AnaUploader>
{
}

+ (id)sharedInstance;
- (void)canceled:(id)arg1;
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;
- (id)getUploadData:(_Bool)arg1 error:(id *)arg2;
- (void)reachMaxsize;
- (_Bool)uploadFinishWithResult:(_Bool)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

