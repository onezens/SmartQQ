//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BatchAddPBProxy : NSObject
{
}

- (char *)getBatchAddReqBuf:(id)arg1 phoneList:(id)arg2 sourceId:(int)arg3 subID:(int)arg4;
- (id)parseRespBuffer:(const char *)arg1 len:(unsigned int)arg2 addFrdInfoArr:(id)arg3;

@end

