//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage;

@interface MQZoneBadgeView : UIView
{
    UIImage *_image;
    long long _number;
    long long _fontSize;
    _Bool _isNeedOffset;
    int _xo;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) long long fontSize; // @synthesize fontSize=_fontSize;
- (struct CGSize)getFitSize;
- (struct CGRect)getNumberDrawRect:(struct CGRect)arg1;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithCenterPosition:(struct CGPoint)arg1;
- (id)initWithCenterPosition:(struct CGPoint)arg1 withBGImg:(id)arg2 fontSize:(int)arg3;
- (id)initWithCenterPosition:(struct CGPoint)arg1 withBGImg:(id)arg2 fontSize:(int)arg3 isNeedOffset:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) long long number; // @synthesize number=_number;

@end

