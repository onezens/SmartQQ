//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface QQDynamicTabSearchHotWordModel : QQModel
{
    NSString *_wordId;
    NSString *_showWord;
    NSString *_searchWord;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(copy, nonatomic) NSString *searchWord; // @synthesize searchWord=_searchWord;
@property(copy, nonatomic) NSString *showWord; // @synthesize showWord=_showWord;
@property(copy, nonatomic) NSString *wordId; // @synthesize wordId=_wordId;

@end

