//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface PARecommandItem : NSObject
{
    NSString *_url;
    NSString *_recommend_source;
    NSString *_article_id;
    NSString *_imageName;
    UIImage *_imageData;
    NSString *_text;
    long long _tag;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *article_id; // @synthesize article_id=_article_id;
@property(retain, nonatomic) UIImage *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *recommend_source; // @synthesize recommend_source=_recommend_source;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

