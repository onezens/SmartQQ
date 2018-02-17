//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (iCarousel)
- (void)carousel:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (struct CATransform3D)carousel:(id)arg1 itemTransformForOffset:(double)arg2 baseTransform:(struct CATransform3D)arg3;
- (_Bool)carousel:(id)arg1 shouldSelectItemAtIndex:(long long)arg2;
- (double)carousel:(id)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (void)carouselCurrentItemIndexDidChange:(id)arg1;
- (void)carouselDidEndDecelerating:(id)arg1;
- (void)carouselDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)carouselDidEndScrollingAnimation:(id)arg1;
- (void)carouselDidScroll:(id)arg1;
- (double)carouselItemWidth:(id)arg1;
- (void)carouselWillBeginDecelerating:(id)arg1;
- (void)carouselWillBeginDragging:(id)arg1;
- (void)carouselWillBeginScrollingAnimation:(id)arg1;
- (unsigned long long)numberOfPlaceholdersInCarousel:(id)arg1;
@end

