//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (DBCreate)
+ (void)DBInit;
+ (void)addColomnsIfNoExist;
+ (_Bool)addColumn:(id)arg1 toTable:(id)arg2 withType:(id)arg3 defaultValue:(id)arg4 inDatabase:(id)arg5;
+ (_Bool)addColumn:(id)arg1 toTable:(id)arg2 withType:(id)arg3 inDatabase:(id)arg4;
+ (id)appendTableSQL;
+ (void)createTable;
+ (_Bool)dropColumn:(id)arg1 toTable:(id)arg2 withType:(id)arg3 defaultValue:(id)arg4 inDatabase:(id)arg5;
+ (_Bool)dropColumn:(id)arg1 toTable:(id)arg2 withType:(id)arg3 inDatabase:(id)arg4;
@end

