//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ArkAppNameView, NSDictionary, NSString;

@interface ArkAIAppInfoItem : NSObject
{
    _Bool _resultEqualInputText;
    _Bool _resultFromServer;
    int _contextMatchType;
    ArkAppNameView *_view;
    NSString *_contextName;
    NSString *_title;
    NSDictionary *_meta;
}

+ (id)createWithAppNameView:(id)arg1 nameView:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) int contextMatchType; // @synthesize contextMatchType=_contextMatchType;
@property(copy, nonatomic) NSString *contextName; // @synthesize contextName=_contextName;
- (_Bool)isContainsToArray:(id)arg1;
- (_Bool)isEqualToAppInfo:(id)arg1;
@property(retain, nonatomic) NSDictionary *meta; // @synthesize meta=_meta;
@property(nonatomic) _Bool resultEqualInputText; // @synthesize resultEqualInputText=_resultEqualInputText;
@property(nonatomic) _Bool resultFromServer; // @synthesize resultFromServer=_resultFromServer;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) ArkAppNameView *view; // @synthesize view=_view;

@end

