//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CustomCardDIYInfo : NSObject
{
    int _fontId;
    float _rotateAngle;
    float _scale;
    float _alpha;
    NSString *_text;
    NSString *_centerPoint;
}

@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
- (struct CGPoint)center;
@property(copy, nonatomic) NSString *centerPoint; // @synthesize centerPoint=_centerPoint;
- (void)dealloc;
- (id)description;
@property(nonatomic) int fontId; // @synthesize fontId=_fontId;
- (id)init;
@property(nonatomic) float rotateAngle; // @synthesize rotateAngle=_rotateAngle;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;

@end

