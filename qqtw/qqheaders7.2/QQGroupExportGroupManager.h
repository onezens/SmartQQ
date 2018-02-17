//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface QQGroupExportGroupManager : NSObject
{
    NSMutableDictionary *_settingDictionary;
    NSMutableArray *_exportGroupArray;
}

+ (id)shareInstance;
- (void)addExportGroup:(id)arg1;
- (void)dealloc;
- (void)deleExportGroup:(id)arg1;
- (void)deleteGroupExportArray;
- (void)deleteGroupUserTextLabelArray;
- (id)groupExportArray;
- (id)groupExportFilePath;
- (id)groupTextLabelArr;
- (id)groupTextLabelArrFilePath;
- (void)handleExportGorup:(id)arg1;
- (id)init;
- (_Bool)isUserExportGroup:(id)arg1;
- (id)orderArray:(id)arg1;
- (void)saveGroupExportArray:(id)arg1;
- (void)saveGroupModelForSeqNum:(id)arg1 seq:(int)arg2;
- (void)saveGroupUserTextLabelArray:(id)arg1;

@end

