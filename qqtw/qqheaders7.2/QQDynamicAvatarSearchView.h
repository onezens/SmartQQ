//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQDynamicSearchResultDefaultContentView.h"

@class NSMutableArray, UILabel;

@interface QQDynamicAvatarSearchView : QQDynamicSearchResultDefaultContentView
{
    NSMutableArray *_imageViewArray;
    UILabel *_imageCountLabel;
    double _rightViewHeight;
}

- (void).cxx_destruct;
- (double)calHeightForCell;
- (double)calRightPartHeight;
- (double)calRightPartWidth;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutRightPart;
- (struct CGSize)preferredLeftViewSize;
- (void)resetRightViewFrame;

@end

