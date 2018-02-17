//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSString;

@interface QQMessageRecallNetEngine : NSObject <IEngineDispatchDelegate>
{
    CDUnknownBlockType _respHandler;
    CDUnknownBlockType _netErrorHandler;
    int _ssoSeq;
}

- (void)dealloc;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)init;
- (id)initWithRespHandler:(CDUnknownBlockType)arg1 andNetErrorHandler:(CDUnknownBlockType)arg2;
- (void)notifyError:(id)arg1;
- (_Bool)parseC2CRecallNotify:(const void *)arg1 bufferLen:(int)arg2 subcmd:(int)arg3 model:(struct RecallModel *)arg4;
- (_Bool)parseDiscussRecallNotify:(char *)arg1 bufferLen:(unsigned int)arg2 model:(struct RecallModel *)arg3;
- (_Bool)parseGroupRecallNotify:(char *)arg1 bufferLen:(unsigned int)arg2 model:(struct RecallModel *)arg3;
- (_Bool)requestRecall:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

