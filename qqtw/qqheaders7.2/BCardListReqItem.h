//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@interface BCardListReqItem : SAMRequestItem
{
    unsigned int _LIST_SEQ;
    unsigned int _LIST_NEXT_FLAG;
    unsigned int _LIST_REQ_NUM;
}

@property(nonatomic) unsigned int LIST_NEXT_FLAG; // @synthesize LIST_NEXT_FLAG=_LIST_NEXT_FLAG;
@property(nonatomic) unsigned int LIST_REQ_NUM; // @synthesize LIST_REQ_NUM=_LIST_REQ_NUM;
@property(nonatomic) unsigned int LIST_SEQ; // @synthesize LIST_SEQ=_LIST_SEQ;
- (char *)getRequestBuffer;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (id)serviceCmd;

@end

