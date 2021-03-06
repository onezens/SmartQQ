//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQDBOperationBase.h"

@class CommonDBTable, NSString;

@interface CommonDBOperation : NSObject <IQQDBOperationBase>
{
    CommonDBTable *_table;
}

- (void).cxx_destruct;
- (id)allItems:(id)arg1;
- (_Bool)clearTable:(id)arg1;
- (void)createCommonTable:(id)arg1;
- (_Bool)deleteItemWithWhere:(id)arg1 inDb:(id)arg2;
- (_Bool)deleteItemsWithWhereArray:(id)arg1 inDb:(id)arg2;
- (_Bool)deleteTable:(id)arg1;
- (unsigned long long)getTableSign;
- (id)itemsWithWhere:(id)arg1 inDb:(id)arg2;
- (id)itemsWithWhere:(id)arg1 select:(id)arg2 inDb:(id)arg3;
- (id)itemsWithWhere:(id)arg1 select:(id)arg2 orderBy:(id)arg3 inDb:(id)arg4;
@property(nonatomic) __weak CommonDBTable *table; // @synthesize table=_table;
- (_Bool)updateItemWithParams:(id)arg1 inDb:(id)arg2;
- (_Bool)updateItemsWithArray:(id)arg1 inDb:(id)arg2;
- (void)updateTable:(id)arg1 inDb:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

