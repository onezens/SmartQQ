//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQStorageCleanerManager : NSObject
{
    long long _diskFree;
    long long _diskTotal;
    long long _diskQQ;
    long long _diskOther;
    long long _diskQQLast;
    _Bool _finishCale;
    _Bool _cleanStorage;
}

+ (long long)getQQDiskSpaceAndLogDetail:(_Bool)arg1;
+ (void)reportQQDiskSpace;
+ (id)shareManager;
- (void)caleOtherStorageUsage;
- (void)caleQQAndOtherStorageUsage;
- (void)caleTotalAndFreeStorageUsage;
- (_Bool)checkFinishCalcStorageUsage;
- (id)freeStorageUsageSize;
- (float)getPercentWithSize:(long long)arg1;
- (id)getUsageWithSize:(long long)arg1;
- (_Bool)gotoDeepClean;
- (id)lastCleanStorageSize;
- (long long)needClearTotalSize;
- (float)otherStoragePercent;
- (id)otherStorageUsageSize;
- (id)qqKMGStringByteCountFormatterCountStyleHex:(long long)arg1;
- (id)qqKMGStringWithByteCountFormatterCountStyleDecimal:(long long)arg1;
- (float)qqStoragePercent;
- (id)qqStorageUsageSize;
- (_Bool)shouldReCalcStorageUsage;
- (long long)sizeOfPath:(id)arg1;
- (void)startCalcStorageUsage;
- (void)updateCleanRecord;

@end

