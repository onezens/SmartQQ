//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface QQYellowPagesCSCallbackData : NSObject
{
    unsigned int _cityId;
    CDUnknownBlockType _handler;
    NSArray *_reqSubcategories;
}

@property(nonatomic) unsigned int cityId; // @synthesize cityId=_cityId;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSArray *reqSubcategories; // @synthesize reqSubcategories=_reqSubcategories;

@end

