//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LbsOpenPackInfo : NSObject
{
    unsigned int _currPackStatus;
    unsigned long long _currPoiId;
    NSString *_currPid;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int currPackStatus; // @synthesize currPackStatus=_currPackStatus;
@property(copy, nonatomic) NSString *currPid; // @synthesize currPid=_currPid;
@property(nonatomic) unsigned long long currPoiId; // @synthesize currPoiId=_currPoiId;

@end

