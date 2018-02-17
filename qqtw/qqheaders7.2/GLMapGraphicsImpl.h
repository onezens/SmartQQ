//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CATextLayer, NSMutableDictionary, NSString;

@interface GLMapGraphicsImpl : NSObject
{
    NSMutableDictionary *_dictionaryFontSizes;
    CATextLayer *_textLayer;
    NSString *_fontName;
    NSString *_boldFontName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *boldFontName; // @synthesize boldFontName=_boldFontName;
- (struct _TXSize)calcTextSize:(unsigned short *)arg1 count:(int)arg2 fontSize:(int)arg3 bold:(_Bool)arg4;
@property(retain, nonatomic) NSMutableDictionary *dictionaryFontSizes; // @synthesize dictionaryFontSizes=_dictionaryFontSizes;
- (void)drawString:(struct _TXTextBitmap *)arg1 text:(unsigned short *)arg2 count:(int)arg3 fontSize:(int)arg4 bold:(_Bool)arg5 density:(float)arg6;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (id)init;
- (struct _TXBitmap *)loadImage:(const char *)arg1 code:(long long)arg2 scale:(float *)arg3 anchorPointX1:(float *)arg4 anchorPointY1:(float *)arg5;
@property(retain, nonatomic) CATextLayer *textLayer; // @synthesize textLayer=_textLayer;

@end

