//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SpriteWeatherModel : NSObject
{
    _Bool _hasShowed;
    NSString *_wording;
    NSString *_url;
    long long _actionID;
    long long _validTime;
    NSString *_subDescription;
    long long _mainPriority;
}

@property(nonatomic) long long actionID; // @synthesize actionID=_actionID;
- (void)dealloc;
@property(nonatomic) _Bool hasShowed; // @synthesize hasShowed=_hasShowed;
- (id)initWithDictionary:(id)arg1;
@property(nonatomic) long long mainPriority; // @synthesize mainPriority=_mainPriority;
@property(retain, nonatomic) NSString *subDescription; // @synthesize subDescription=_subDescription;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long validTime; // @synthesize validTime=_validTime;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;

@end

