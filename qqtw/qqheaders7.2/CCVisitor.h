//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface CCVisitor : NSObject <NSCoding>
{
    long long _uin;
    NSString *_name;
    int _visittime;
    NSString *_portrait;
    NSString *_lastmood;
    int _weight;
    int _xo;
}

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property long long uin; // @synthesize uin=_uin;
@property int visittime; // @synthesize visittime=_visittime;
@property int weight; // @synthesize weight=_weight;

// Remaining properties
@property(retain, nonatomic) NSString *lastmood; // @dynamic lastmood;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *portrait; // @dynamic portrait;

@end
