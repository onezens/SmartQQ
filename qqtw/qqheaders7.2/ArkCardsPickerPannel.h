//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class ArkUIView, NSArray, NSMutableDictionary, NSString, QQViewController, UIButton, UICollectionView;

@interface ArkCardsPickerPannel : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _didSwitchedTab;
    long long _selectedIndex;
    UIView *_toolBar;
    UIButton *_sendButton;
    UICollectionView *_appsCollectionView;
    _Bool _firstItemCreated;
    NSArray *_models;
    QQViewController *_controller;
    CDUnknownBlockType _willShareMessageBlock;
    NSMutableDictionary *_arkViewsCache;
    ArkUIView *_currentCardsListView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *arkViewsCache; // @synthesize arkViewsCache=_arkViewsCache;
- (void)asyncCreateContentViewWithCurrenModel:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(nonatomic) __weak QQViewController *controller; // @synthesize controller=_controller;
- (void)createArkCardsListViewWithModel:(id)arg1;
@property(retain, nonatomic) ArkUIView *currentCardsListView; // @synthesize currentCardsListView=_currentCardsListView;
- (void)dealloc;
@property(nonatomic) _Bool firstItemCreated; // @synthesize firstItemCreated=_firstItemCreated;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
- (void)sendButtonTaped:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType willShareMessageBlock; // @synthesize willShareMessageBlock=_willShareMessageBlock;
- (void)setup;
- (void)showArkCardsListView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

