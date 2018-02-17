//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSString, QQMultimediaEditFilterComponent;

@interface QQEditFilterCollectView : UICollectionView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    NSArray *_data;
    id <QQEditFilterCollectViewDelegate> _filterDelegate;
    QQMultimediaEditFilterComponent *_filterComponent;
    long long _categoryId;
    NSString *_categoryName;
}

- (void).cxx_destruct;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
- (void)deselectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic) __weak QQMultimediaEditFilterComponent *filterComponent; // @synthesize filterComponent=_filterComponent;
@property(nonatomic) __weak id <QQEditFilterCollectViewDelegate> filterDelegate; // @synthesize filterDelegate=_filterDelegate;
- (id)indexPathsForSelectedItems;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
- (id)setSelectedID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

