//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class NSDictionary, NSMutableArray;

@interface ConfigurationReqItem : SAMRequestItem
{
    _Bool _all;
    int _ID;
    NSDictionary *_attachInfo;
    NSMutableArray *_configIDs;
    void *_pResponse;
}

- (void).cxx_destruct;
@property(nonatomic) int ID; // @synthesize ID=_ID;
@property(nonatomic) _Bool all; // @synthesize all=_all;
@property(retain, nonatomic) NSDictionary *attachInfo; // @synthesize attachInfo=_attachInfo;
@property(retain, nonatomic) NSMutableArray *configIDs; // @synthesize configIDs=_configIDs;
- (void)dealloc;
- (char *)getRequestBuffer;
- (id)init;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
@property(nonatomic) void *pResponse; // @synthesize pResponse=_pResponse;
- (id)serviceCmd;

@end

