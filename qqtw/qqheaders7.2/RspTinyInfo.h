//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AutoPbModel.h"

@interface RspTinyInfo : AutoPbModel
{
    unsigned int _result;
    unsigned long long _uin;
    unsigned long long _tinyid;
}

- (id)getPropertyInfos;
@property(nonatomic) unsigned int result; // @synthesize result=_result;
@property(nonatomic) unsigned long long tinyid; // @synthesize tinyid=_tinyid;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;

@end

