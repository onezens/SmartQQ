//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewDelegateFlowLayout.h"

@class NSIndexPath, QQDragCollectionViewLayout, UICollectionView;

@protocol QQDragCollectionViewLayoutDelegate <UICollectionViewDelegateFlowLayout>

@optional
- (_Bool)collectionView:(UICollectionView *)arg1 allowMoveAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 atIndexPath:(NSIndexPath *)arg2 canMoveToIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 atIndexPath:(NSIndexPath *)arg2 didMoveToIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 atIndexPath:(NSIndexPath *)arg2 willMoveToIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 collectionViewLayout:(QQDragCollectionViewLayout *)arg2 didBeginDraggingItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 collectionViewLayout:(QQDragCollectionViewLayout *)arg2 didEndDraggingItemToIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 collectionViewLayout:(QQDragCollectionViewLayout *)arg2 willBeginDraggingItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 collectionViewLayout:(QQDragCollectionViewLayout *)arg2 willEndDraggingItemToIndexPath:(NSIndexPath *)arg3;
@end

