//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface RqdCrashHandler : NSObject
{
    NSString *attachLog;
    _Bool excludeSave;
    NSArray *excludeShortNames;
    _Bool enableLastCloseRecord;
    NSArray *includeShortNames;
    NSString *attachmentForStack;
    _Bool _crashAccidentHappen;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *attachLog; // @synthesize attachLog;
@property(copy, nonatomic) NSString *attachmentForStack; // @synthesize attachmentForStack;
- (_Bool)crashHapped:(id)arg1;
@property(nonatomic) _Bool enableLastCloseRecord; // @synthesize enableLastCloseRecord;
@property(nonatomic) _Bool excludeSave; // @synthesize excludeSave;
@property(retain, nonatomic) NSArray *excludeShortNames; // @synthesize excludeShortNames;
- (id)generateExpUploadObj:(id)arg1;
- (id)getCurrExpObj;
- (long long)getLastCrashTime;
- (_Bool)hasLastCrashNeedReport;
@property(retain, nonatomic) NSArray *includeShortNames; // @synthesize includeShortNames;
- (id)init;
- (void)installHandler;
@property(nonatomic, getter=isCrashAccidentHappen) _Bool crashAccidentHappen; // @synthesize crashAccidentHappen=_crashAccidentHappen;
- (_Bool)isExpMergeUpload;
- (_Bool)isLastCloseByCrash;
- (_Bool)persistCrashToFile:(id *)arg1;
- (void)persistLastCrashNeedReport:(_Bool)arg1;
- (void)persistLastCrashTime:(long long)arg1;
- (void)registCrashListerner:(id)arg1;
- (id)saveCrashData:(id)arg1;
- (void)setExpMergeStrategy:(_Bool)arg1;
- (void)setExpMergeUpload:(_Bool)arg1;
- (void)setUserMachHandler:(_Bool)arg1;
- (void)uninstallHandler;
- (_Bool)userMachHandler;

@end

