//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZDrawItem.h"

@class NSString;

@interface QZDrawFMButton : QZDrawItem
{
    NSString *_title;
    NSString *_author;
    NSString *_playUrl;
    NSString *_pageUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
- (id)drawWithContainer:(id)arg1 itemIndex:(long long)arg2;
@property(retain, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end
