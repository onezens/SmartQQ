//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NFDResult : NSObject
{
    int _code;
    NSString *_reason;
}

+ (id)resultWithCode:(int)arg1 reason:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) int code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;

@end
