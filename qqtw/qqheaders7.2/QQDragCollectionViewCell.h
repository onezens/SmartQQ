//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class QQCircularProgressView;

@interface QQDragCollectionViewCell : UICollectionViewCell
{
    QQCircularProgressView *_progressView;
}

- (void)accessibilityElementDidBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (void)dealloc;
- (void)hideProgressView;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isAccessibilityElement;
- (void)showProgressViewWithNoNumber;
- (void)updateProgressViewWithNumber:(double)arg1;

@end
