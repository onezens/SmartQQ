//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface EmptyScheduleListModel : NSObject
{
    NSMutableArray *_arrayEmptyScheduleItemModel;
}

@property(retain, nonatomic) NSMutableArray *arrayEmptyScheduleItemModel; // @synthesize arrayEmptyScheduleItemModel=_arrayEmptyScheduleItemModel;
- (void)createEmptyScheuleItemModel;
- (void)dealloc;
- (unsigned long long)getNumberOfRows;
- (id)initList;
- (unsigned long long)initStartTime;
- (unsigned long long)initStartTime2;

@end

