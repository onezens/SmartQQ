//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface EmotionMap : NSObject
{
    NSMutableArray *_emotionLocalIndexArray;
    NSMutableArray *_emotionServerIndexArray;
    NSMutableArray *_emotionStringArray;
}

+ (id)intance;
- (void).cxx_destruct;
- (long long)emotionLocalIndexFromServerIndex:(long long)arg1;
- (long long)emotionServerIndexFromEmotionString:(id)arg1;
- (id)emotionStringFromServerIndex:(long long)arg1;
- (id)init;

@end

