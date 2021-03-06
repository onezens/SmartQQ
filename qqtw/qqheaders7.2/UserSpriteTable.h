//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBAccountChangedProtocol.h"
#import "IQQDBOperationBase.h"

@class NSString;

@interface UserSpriteTable : NSObject <IQQDBOperationBase, DBAccountChangedProtocol>
{
}

- (id)GetAllUserSpriteModelFromDB;
- (int)asyncGetUserSpriteModelFromDB:(long long)arg1 callback:(id)arg2 userdata:(id)arg3;
- (int)asyncSaveUserSpriteModelToDB:(id)arg1 callback:(id)arg2 userdata:(id)arg3;
- (id)createModelWithResultSet:(id)arg1;
- (void)createTable:(id)arg1;
- (void)dealloc;
- (id)getAllUserSprite:(id)arg1;
- (unsigned long long)getTableSign;
- (id)getUserSprite:(long long)arg1 db:(id)arg2;
- (id)getUserSpriteFromDB:(long long)arg1;
- (id)init;
- (void)onDBChanged:(id)arg1;
- (_Bool)saveUserSpriteModel:(id)arg1 db:(id)arg2;
- (void)updateTableColumnWith:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

