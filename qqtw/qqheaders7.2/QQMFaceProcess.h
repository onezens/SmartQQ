//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface QQMFaceProcess : NSObject
{
    int _useSensorType;
    int _processType;
    NSDictionary *_frequencyDic;
    long long _numberOfTapsRequired;
    unsigned long long _gestureRecognizerDirection;
    NSString *_stopType;
    long long _value2;
    int _xo;
    int useSensorType;
    int processType;
    NSDictionary *frequencyDic;
    long long numberOfTapsRequired;
    unsigned long long gestureRecognizerDirection;
    NSString *stopType;
    long long value2;
    Class _gestureRecognizerClass;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *frequencyDic; // @synthesize frequencyDic;
@property(retain, nonatomic) Class gestureRecognizerClass; // @synthesize gestureRecognizerClass=_gestureRecognizerClass;
@property(nonatomic) unsigned long long gestureRecognizerDirection; // @synthesize gestureRecognizerDirection;
@property(nonatomic) long long numberOfTapsRequired; // @synthesize numberOfTapsRequired;
@property(nonatomic) int processType; // @synthesize processType;
@property(retain, nonatomic) NSString *stopType; // @synthesize stopType;
@property(nonatomic) int useSensorType; // @synthesize useSensorType;
@property(nonatomic) long long value2; // @synthesize value2;

@end

