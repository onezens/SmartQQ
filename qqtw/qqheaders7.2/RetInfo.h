//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RetInfo : NSObject
{
    unsigned int _ret_code;
    NSString *_err_info;
}

@property(copy, nonatomic) NSString *err_info; // @synthesize err_info=_err_info;
@property(nonatomic) unsigned int ret_code; // @synthesize ret_code=_ret_code;

@end

