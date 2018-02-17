//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface QQStatNode : NSObject <NSCopying>
{
    NSString *_name;
    double _startTime;
    double _endTime;
    NSString *_remark;
    NSArray *_children;
    QQStatNode *_parent;
}

- (void).cxx_destruct;
@property(retain) NSArray *children; // @synthesize children=_children;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property double endTime; // @synthesize endTime=_endTime;
- (id)init;
@property(copy) NSString *name; // @synthesize name=_name;
@property QQStatNode *parent; // @synthesize parent=_parent;
- (void)printStat:(unsigned long long)arg1 msg:(id)arg2;
@property(copy) NSString *remark; // @synthesize remark=_remark;
@property double startTime; // @synthesize startTime=_startTime;

@end
