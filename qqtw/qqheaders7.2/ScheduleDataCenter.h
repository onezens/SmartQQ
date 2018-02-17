//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ScheduleActionDelegate.h"

@class NSArray, NSMapTable, NSString;

@interface ScheduleDataCenter : NSObject <ScheduleActionDelegate>
{
    unsigned long long _nDataUpdteTime;
    unsigned long long _nOutDataUpdateTime;
    _Bool _nNeedUpdateUI;
    _Bool _nNeedUpdateOutUI;
    unsigned long long _nOptId;
    unsigned long long _nGetIndex;
    unsigned long long _nGetOutDataIndex;
    _Bool _bIsGetTop;
    NSMapTable *_delegateMgr;
    NSArray *_arrayScheduleStateInfoList;
    NSArray *_arrayScheduleOutStateInfoList;
    NSArray *_arrayScheduleContentInfoList;
    NSArray *_arrayScheduleOutContentInfoList;
}

+ (id)getInstance;
- (_Bool)CreateScheule:(id)arg1 delegate:(id)arg2;
- (_Bool)DeleteScheuleForID:(id)arg1 delegate:(id)arg2 sep:(int)arg3;
- (void)GetBackScheuleOutRecordList:(id)arg1 sep:(int)arg2;
- (void)GetBackScheuleRecordList:(id)arg1 sep:(int)arg2;
- (void)GetMoreScheuleRecordList:(id)arg1 sep:(int)arg2;
- (void)GetNextGroupOutScheuleRecordList:(id)arg1 sep:(int)arg2;
- (_Bool)GetScheuleDataForID:(id)arg1 delegate:(id)arg2;
- (void)GetTopScheuleRecordList:(id)arg1 sep:(int)arg2;
- (void)InternalGetData:(_Bool)arg1 delegate:(id)arg2 sep:(int)arg3;
- (void)InternalGetOutData:(_Bool)arg1 delegate:(id)arg2 sep:(int)arg3;
- (_Bool)ModifiedScheule:(id)arg1 delegate:(id)arg2;
- (void)OnActionResult:(id)arg1;
- (_Bool)RecallScheuleForID:(id)arg1 delegate:(id)arg2 sep:(int)arg3;
- (_Bool)SetScheduleAlarmById:(id)arg1 isAlarm:(_Bool)arg2 delegate:(id)arg3 sep:(int)arg4;
- (id)UpdataCacheData:(id)arg1 getIndex:(unsigned long long)arg2 isOutData:(_Bool)arg3;
- (_Bool)UpdateListUnreadScheduleReq:(id)arg1 sep:(int)arg2;
@property(retain, nonatomic) NSArray *arrayScheduleContentInfoList; // @synthesize arrayScheduleContentInfoList=_arrayScheduleContentInfoList;
@property(retain, nonatomic) NSArray *arrayScheduleOutContentInfoList; // @synthesize arrayScheduleOutContentInfoList=_arrayScheduleOutContentInfoList;
@property(retain, nonatomic) NSArray *arrayScheduleOutStateInfoList; // @synthesize arrayScheduleOutStateInfoList=_arrayScheduleOutStateInfoList;
@property(retain, nonatomic) NSArray *arrayScheduleStateInfoList; // @synthesize arrayScheduleStateInfoList=_arrayScheduleStateInfoList;
- (void)dealloc;
- (_Bool)deleteScheduleCalender:(id)arg1;
- (_Bool)getAlarmByScheduleID:(id)arg1;
- (id)getCalenderIdByScheduleId:(id)arg1;
- (id)init;
- (void)initTimeAndIdentifier;
- (void)insertScheduleCalender:(id)arg1 CalenderId:(id)arg2;
- (void)updateItem:(id)arg1 alarm:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

