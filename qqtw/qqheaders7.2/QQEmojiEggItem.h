//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQEmojiEggItem : NSObject
{
    NSString *_emojiEggHeadString;
    NSString *_emojiEggDetailString;
    NSString *_emojiEggIconString;
    double _cellheight;
}

+ (id)createWithEmojiEggHeadString:(id)arg1 withEmojiEggDetailString:(id)arg2 withEmojiEggIconString:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) double cellheight; // @synthesize cellheight=_cellheight;
@property(retain, nonatomic) NSString *emojiEggDetailString; // @synthesize emojiEggDetailString=_emojiEggDetailString;
@property(retain, nonatomic) NSString *emojiEggHeadString; // @synthesize emojiEggHeadString=_emojiEggHeadString;
@property(retain, nonatomic) NSString *emojiEggIconString; // @synthesize emojiEggIconString=_emojiEggIconString;
- (id)init;

@end

