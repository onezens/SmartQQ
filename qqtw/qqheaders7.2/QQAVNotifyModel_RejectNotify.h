//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQAVNotifyModel_RejectNotify : NSObject
{
    unsigned int _rejectReason;
    NSString *_strMsg;
    NSString *_strRingFilename;
}

- (void)dealloc;
@property(nonatomic) unsigned int rejectReason; // @synthesize rejectReason=_rejectReason;
@property(retain, nonatomic) NSString *strMsg; // @synthesize strMsg=_strMsg;
@property(retain, nonatomic) NSString *strRingFilename; // @synthesize strRingFilename=_strRingFilename;

@end

