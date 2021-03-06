//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQDBOperationBase.h"

@class NSString;

@interface QQPAProfileCardDBOperation : NSObject <IQQDBOperationBase>
{
    _Bool _inited;
    NSString *_tableName;
}

- (id)cardDynamicInfoFromQueryResult:(id)arg1;
- (void)createPACardDynamicInfoTableInDb:(id)arg1;
- (void)delCardDynamicInfoWithUin:(id)arg1 inDb:(id)arg2;
- (id)getCardDynamicInfoWithUin:(unsigned long long)arg1 inDb:(id)arg2;
- (unsigned long long)getTableSign;
- (void)insertCardDynamicInfoModel:(id)arg1 inDb:(id)arg2;
@property(copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

