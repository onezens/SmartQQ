//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSArray;

@interface QQAllTroopMemConfigModel : QQModel
{
    _Bool _isForce;
    NSArray *_policyArr;
    long long _defaultHightLimit;
    double _defaultFreq;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) double defaultFreq; // @synthesize defaultFreq=_defaultFreq;
@property(nonatomic) long long defaultHightLimit; // @synthesize defaultHightLimit=_defaultHightLimit;
@property(nonatomic) _Bool isForce; // @synthesize isForce=_isForce;
@property(retain, nonatomic) NSArray *policyArr; // @synthesize policyArr=_policyArr;

@end

