//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQDynamicSearchResultDefaultContentView.h"

@class NSMutableArray, UIImageView, UILabel;

@interface QQDynamicFriendTrendsView : QQDynamicSearchResultDefaultContentView
{
    NSMutableArray *_imageViewArray;
    UILabel *_imageCountLabel;
    UIImageView *_richMediaIcon;
    UIImageView *_maskView;
}

- (void).cxx_destruct;
- (double)calRightPartHeight;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutLeftPart;
- (void)layoutRightPart;
- (struct CGSize)preferredLeftViewSize;

@end

