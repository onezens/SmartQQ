//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface QQYellowPagesCityInfo : NSObject <NSCoding>
{
    unsigned int _cityId;
    int _hot;
    NSString *_cityName;
}

@property(nonatomic) unsigned int cityId; // @synthesize cityId=_cityId;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) int hot; // @synthesize hot=_hot;
- (id)initWithCoder:(id)arg1;

@end

