//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSMutableArray, NSString;

@interface QQPublicAccountSearchRecommendData : QQModel
{
    int _type;
    NSString *_recommendTitle;
    NSMutableArray *_recommendItems;
}

- (void).cxx_destruct;
- (id)copy;
- (id)init;
@property(retain, nonatomic) NSMutableArray *recommendItems; // @synthesize recommendItems=_recommendItems;
@property(copy, nonatomic) NSString *recommendTitle; // @synthesize recommendTitle=_recommendTitle;
@property(nonatomic) int type; // @synthesize type=_type;

@end

