//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RqdCrashListener.h"

@class NSString;

@interface RqdCrashUploadHandler : NSObject <RqdCrashListener>
{
    _Bool _urgent;
}

+ (id)sharedInstance;
- (void)checkAndUploadAfterCrash:(id)arg1;
- (_Bool)cleanInvalidExp;
- (_Bool)doUpload;
- (_Bool)doUploadExps:(id)arg1 withBundleId:(id)arg2 bundleVer:(id)arg3 isManual:(_Bool)arg4;
- (_Bool)doUploadPostProcess:(id)arg1;
- (_Bool)expExist;
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;
- (id)getCrashToUpload;
- (id)getCrashToUpload:(int)arg1;
- (_Bool)isUploading;
@property(nonatomic, getter=isUrgent) _Bool urgent; // @synthesize urgent=_urgent;
- (void)onCrashHappened:(id)arg1 urgently:(_Bool)arg2;
- (_Bool)uploadCrashesInCurrentQueue:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

