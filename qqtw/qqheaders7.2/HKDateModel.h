//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface HKDateModel : NSObject
{
    long long _stepCount;
    float _ditanceRun;
    float _kcalorie;
    NSString *_sourceIDs;
    NSDictionary *_dicDetailModel;
    int _xo;
}

- (void).cxx_destruct;

// Remaining properties
@property(copy, nonatomic) NSDictionary *dicDetailModel; // @dynamic dicDetailModel;
@property(nonatomic) float ditanceRun; // @dynamic ditanceRun;
@property(nonatomic) float kcalorie; // @dynamic kcalorie;
@property(copy, nonatomic) NSString *sourceIDs; // @dynamic sourceIDs;
@property(nonatomic) long long stepCount; // @dynamic stepCount;

@end

