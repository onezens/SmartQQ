//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQMarioFontManager : NSObject
{
    NSString *_fontname;
    _Bool _isLoaded;
}

+ (id)getInstance;
- (id)getFontPath;
- (_Bool)loadFont:(id)arg1 name:(id)arg2;
- (void)startLoadFont:(CDUnknownBlockType)arg1;

@end
