//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QZEmoImageUtil : NSObject
{
    NSMutableDictionary *_eidDict;
}

+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *eidDict; // @synthesize eidDict=_eidDict;
- (long long)emotionUrlToEid:(id)arg1;
- (id)filePathWithEmojiId:(long long)arg1;
- (_Bool)isLocalEmojiGif:(long long)arg1;

@end

