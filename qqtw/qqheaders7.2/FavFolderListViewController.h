//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavListViewController.h"

@interface FavFolderListViewController : FavListViewController
{
}

- (void)deleteFavFolders;
- (id)editModeSelectTips;
- (void)initAdditionalViews;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)onClickAction:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)onDeleteFavResult:(id)arg1;
- (void)onDeleteFolderResult:(id)arg1;
- (void)onFavInvalidated:(id)arg1;
- (void)onFolderListUpdateResult:(id)arg1;
- (void)onModifyFolderResult:(id)arg1;
- (void)onMoveFavsToFolderResult:(id)arg1;
- (void)onNewFolderResult:(id)arg1;
- (void)refreshList;
- (void)renameFavFolder;
- (void)rightButtonClick:(id)arg1;
- (void)setActionBar;
- (void)switchEditMode:(id)arg1;
- (id)tableHeaderView;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end

