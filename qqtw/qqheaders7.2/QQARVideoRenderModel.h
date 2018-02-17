//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KeyingBaseParameters, NSString, UIColor;

@interface QQARVideoRenderModel : NSObject
{
    _Bool _autoPlayNext;
    float _distance;
    long long _arType;
    NSString *_path;
    unsigned long long _repeatCount;
    UIColor *_clipColor;
    KeyingBaseParameters *_parameter;
    struct CGRect _rect;
}

- (void).cxx_destruct;
@property(nonatomic) long long arType; // @synthesize arType=_arType;
@property(nonatomic) _Bool autoPlayNext; // @synthesize autoPlayNext=_autoPlayNext;
@property(retain, nonatomic) UIColor *clipColor; // @synthesize clipColor=_clipColor;
@property(nonatomic) float distance; // @synthesize distance=_distance;
@property(retain, nonatomic) KeyingBaseParameters *parameter; // @synthesize parameter=_parameter;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) unsigned long long repeatCount; // @synthesize repeatCount=_repeatCount;

@end
