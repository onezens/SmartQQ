//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SpritePushItem.h"

@class NSString;

@interface SpritePushItemDrawerInfo : SpritePushItem
{
    _Bool _hasShowed;
    int _pushTime;
    int _actionID;
    int _fontColor;
    NSString *_url;
    NSString *_scheme;
}

@property(nonatomic) int actionID; // @synthesize actionID=_actionID;
- (void)dealloc;
@property(nonatomic) int fontColor; // @synthesize fontColor=_fontColor;
@property(nonatomic) _Bool hasShowed; // @synthesize hasShowed=_hasShowed;
- (id)initWithDict:(id)arg1;
@property(nonatomic) int pushTime; // @synthesize pushTime=_pushTime;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)toDictionary;

@end
