//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ScheduleOptTask : NSObject
{
    int seq;
    long long em_ScheduleOpt;
    NSString *_strWorkflowID;
    NSString *_OptId;
    id <ScheduleActionDelegate> _ddActiondelegate;
    NSString *_strSummary;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *OptId; // @synthesize OptId=_OptId;
@property(nonatomic) __weak id <ScheduleActionDelegate> ddActiondelegate; // @synthesize ddActiondelegate=_ddActiondelegate;
@property(copy, nonatomic) NSString *strSummary; // @synthesize strSummary=_strSummary;
@property(copy, nonatomic) NSString *strWorkflowID; // @synthesize strWorkflowID=_strWorkflowID;

@end

