//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DGAtAllModel : NSObject
{
    _Bool _sucess;
    _Bool _priviledge;
    long long _uin;
    long long _discussUin;
    long long _uin_remain;
    long long _discussUin_remain;
}

@property(nonatomic) long long discussUin; // @synthesize discussUin=_discussUin;
@property(nonatomic) long long discussUin_remain; // @synthesize discussUin_remain=_discussUin_remain;
@property(nonatomic) _Bool priviledge; // @synthesize priviledge=_priviledge;
- (void)requestAtAllCompletionBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool sucess; // @synthesize sucess=_sucess;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
@property(nonatomic) long long uin_remain; // @synthesize uin_remain=_uin_remain;

@end

