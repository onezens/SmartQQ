//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface Medal : NSObject
{
    unsigned int _medalLevel;
    NSString *_iconUrl;
    NSString *_flashUrl;
    NSString *_medalName;
}

- (void)dealloc;
@property(copy, nonatomic) NSString *flashUrl; // @synthesize flashUrl=_flashUrl;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) unsigned int medalLevel; // @synthesize medalLevel=_medalLevel;
@property(copy, nonatomic) NSString *medalName; // @synthesize medalName=_medalName;

@end

