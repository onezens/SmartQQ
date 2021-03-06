//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface SpecialTopicInfo : NSObject
{
    NSString *_headerIconUrl;
    NSString *_headerTitle;
    NSMutableArray *_jumpInfoArray;
    NSString *_headerJumpUrl;
}

+ (_Bool)isValidWithSpecialTopicInfo:(id)arg1;
+ (id)specialInfoFromDecoder:(struct CPBMessageDecoder *)arg1;
- (void).cxx_destruct;
- (id)description;
@property(retain, nonatomic) NSString *headerIconUrl; // @synthesize headerIconUrl=_headerIconUrl;
@property(retain, nonatomic) NSString *headerJumpUrl; // @synthesize headerJumpUrl=_headerJumpUrl;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain, nonatomic) NSMutableArray *jumpInfoArray; // @synthesize jumpInfoArray=_jumpInfoArray;

@end

