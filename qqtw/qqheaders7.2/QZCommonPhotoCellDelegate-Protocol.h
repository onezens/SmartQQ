//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQZCommonPhotoButton, NSMutableArray, QZEventPhotoModel, QzonePhotoModel;

@protocol QZCommonPhotoCellDelegate <NSObject>

@optional
- (void)onClickCommentButton:(QzonePhotoModel *)arg1;
- (void)onClickEventDescModify:(QZEventPhotoModel *)arg1;
- (void)onClickLikeButton:(QzonePhotoModel *)arg1;
- (void)onClickManageUntime;
- (void)onClickMoreUntimePhotos;
- (void)onClickPhotoDescModify:(QzonePhotoModel *)arg1;
- (void)onClickPoiModify:(QZEventPhotoModel *)arg1;
- (void)onClickUntimeCollectionConfirm;
- (void)onClickUntimeEventConfirm:(NSMutableArray *)arg1;
- (void)onSelectEventPhotosToManage:(NSMutableArray *)arg1 isSelected:(_Bool)arg2;
- (void)onSelectEventPhotosToManage:(NSMutableArray *)arg1 isSelected:(_Bool)arg2 sectionIndex:(long long)arg3;
- (void)onSelectPhotoToBrowse:(QzonePhotoModel *)arg1 btn:(MQZCommonPhotoButton *)arg2;
- (void)onSelectPhotoToManage:(QzonePhotoModel *)arg1 isSelected:(_Bool)arg2;
- (void)onSelectPhotoToManage:(QzonePhotoModel *)arg1 isSelected:(_Bool)arg2 sectionIndex:(long long)arg3;
- (void)onSelectPhotoToSelectBrowser:(QzonePhotoModel *)arg1;
- (_Bool)shouldSelectedPhoto:(_Bool)arg1;
@end

