//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQDBOperationBase.h"

@class NSString;

@interface DiscussMaxSeqTableOperation : NSObject <IQQDBOperationBase>
{
}

- (void)createDicussMaxSeqTable:(id)arg1;
- (id)getMaxSeqDicInDb:(id)arg1;
- (unsigned long long)getTableSign;
- (void)replaceMaxSeq:(long long)arg1 forDiscuss:(long long)arg2 inDb:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

