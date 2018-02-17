//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface KSCrashReportStore : NSObject
{
    _Bool _demangleSwift;
    _Bool _demangleCPP;
    NSString *_path;
    NSString *_bundleName;
}

+ (id)storeWithPath:(id)arg1;
- (void).cxx_destruct;
- (id)addCustomReport:(id)arg1;
- (void)addReportSectionForCustomReport:(id)arg1;
- (id)allReports;
@property(retain, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
- (void)convertTimestamp:(id)arg1 inReport:(id)arg2;
- (id)crashReportFilenameWithID:(id)arg1;
- (void)deleteAllReports;
- (void)deleteLiveReportWithID:(id)arg1;
- (void)deleteReportWithID:(id)arg1;
@property(nonatomic) _Bool demangleCPP; // @synthesize demangleCPP=_demangleCPP;
@property(nonatomic) _Bool demangleSwift; // @synthesize demangleSwift=_demangleSwift;
- (id)fixupCrashReport:(id)arg1;
- (id)getReportType:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)liveReportFilenameWithID:(id)arg1;
- (id)liveReportWithID:(id)arg1;
- (void)mergeDictWithKey:(id)arg1 intoDictWithKey:(id)arg2 inReport:(id)arg3;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (id)pathToCrashReportWithID:(id)arg1;
- (id)pathToLiveReportWithID:(id)arg1;
- (id)pathToRecrashReportWithID:(id)arg1;
- (void)performOnFields:(id)arg1 inReport:(id)arg2 operation:(CDUnknownBlockType)arg3 okIfNotFound:(_Bool)arg4;
- (void)pruneReportsLeaving:(int)arg1;
- (id)readReport:(id)arg1 error:(id *)arg2;
- (id)recrashReportFilenameWithID:(id)arg1;
@property(readonly, nonatomic) unsigned long long reportCount;
- (id)reportIDFromFilename:(id)arg1;
- (id)reportIDs;
- (id)reportWithID:(id)arg1;
- (void)symbolicateField:(id)arg1 inReport:(id)arg2 okIfNotFound:(_Bool)arg3;

@end

