//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ITBPBParseData.h"

@class NSArray, NSString, TBErrorInfo;

@interface TBRspGetBatchUserVidList : NSObject <ITBPBParseData>
{
    TBErrorInfo *_error;
    NSArray *_userVidList;
}

- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) TBErrorInfo *error; // @synthesize error=_error;
- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;
@property(retain, nonatomic) NSArray *userVidList; // @synthesize userVidList=_userVidList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

