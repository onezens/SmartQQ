//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableArray;

@interface ValueAddedServiceNumRedBusi : NSObject <NSCoding, NSCopying>
{
    long long _appid;
    long long _new_flag;
    long long _modify_ts;
    NSMutableArray *_num_red_paths;
    long long _appset;
    int _xo;
}

- (void).cxx_destruct;
- (void)checkMemberPathsIfExpire;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)displayInfosByPath:(id)arg1;
- (int)displayNumCount;
- (void)encodeWithCoder:(id)arg1;
- (id)getFirstLevelAppId:(id)arg1;
- (id)getNumRedPathByMsgid:(unsigned long long)arg1;
- (int)getStatusNumRedPathCount:(int)arg1 byPath:(id)arg2;
- (id)init;
- (id)initWithAppId:(long long)arg1 appSet:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (_Bool)isNewFlag;
- (_Bool)isNewFlagByPath:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)resetModifyTime;
- (void)updateNumRedPath:(id)arg1;

// Remaining properties
@property(nonatomic) long long appid; // @dynamic appid;
@property(nonatomic) long long appset; // @dynamic appset;
@property(nonatomic) long long modify_ts; // @dynamic modify_ts;
@property(nonatomic) long long new_flag; // @dynamic new_flag;
@property(retain, nonatomic) NSMutableArray *num_red_paths; // @dynamic num_red_paths;

@end

