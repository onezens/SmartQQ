//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PbLongMsgDownloadReq;

@interface PBLongMsgDownloadTask : NSObject
{
    PbLongMsgDownloadReq *_pReq;
    int _nCmdCount;
    int _nSeq;
    int _nHttpSessionId;
}

- (void)dealloc;
@property(retain, nonatomic) PbLongMsgDownloadReq *downloadReq; // @synthesize downloadReq=_pReq;
- (id)init;
@property(nonatomic) int nCmdCount; // @synthesize nCmdCount=_nCmdCount;
@property(nonatomic) int nHttpSessionId; // @synthesize nHttpSessionId=_nHttpSessionId;
@property(nonatomic) int nSeq; // @synthesize nSeq=_nSeq;

@end

