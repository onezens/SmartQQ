//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBRspGeneralModel.h"

@interface TBRspGetBlackList : TBRspGeneralModel
{
    unsigned int _blackStatus;
    unsigned int _updateInterval;
}

@property(nonatomic) unsigned int blackStatus; // @synthesize blackStatus=_blackStatus;
- (_Bool)isInPublicCircleBlackList;
- (_Bool)isInSecretCircleBlackList;
- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;
@property(nonatomic) unsigned int updateInterval; // @synthesize updateInterval=_updateInterval;

@end

