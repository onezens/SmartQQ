//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSArray, NSString;

@interface ARMapRightConfigModel : QQModel
{
    NSString *_redirectUrl;
    NSString *_beginTime;
    NSString *_endTime;
    long long _beginTimestamp;
    long long _endTimestamp;
    NSArray *_redPointDisplayTimes;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) long long beginTimestamp; // @synthesize beginTimestamp=_beginTimestamp;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(copy, nonatomic) NSArray *redPointDisplayTimes; // @synthesize redPointDisplayTimes=_redPointDisplayTimes;
@property(copy, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;

@end

