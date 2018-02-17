//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSString, ParseRange, QQAPNGImageView;

@interface QQEmotionImageView : UIImageView
{
    NSString *_urlKey;
    ParseRange *_parseRange;
    QQAPNGImageView *_apngImageView;
    _Bool _animated;
    _Bool _isQQEmotion;
    NSString *_emojiStr;
}

@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
- (void)dealloc;
@property(retain, nonatomic) NSString *emojiStr; // @synthesize emojiStr=_emojiStr;
- (void)handleGifDecodeNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isQQEmotion; // @synthesize isQQEmotion=_isQQEmotion;
- (void)loadGif;
@property(retain, nonatomic) ParseRange *parseRange; // @synthesize parseRange=_parseRange;
@property(retain, nonatomic) NSString *urlKey; // @synthesize urlKey=_urlKey;

@end
