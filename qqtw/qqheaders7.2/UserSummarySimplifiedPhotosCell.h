//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserSummaryBaseCell.h"

@class CustomUserSummaryPhotoWallView;

@interface UserSummarySimplifiedPhotosCell : UserSummaryBaseCell
{
    CustomUserSummaryPhotoWallView *_photoWallView;
    _Bool _isSelfViewing;
    _Bool _photoListHasChange;
    id _delegate;
}

- (void).cxx_destruct;
- (void)cellWillShow;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) _Bool isSelfViewing; // @synthesize isSelfViewing=_isSelfViewing;
- (void)layoutSubviews;
- (id)photoButtonFrameStringInWindow:(id)arg1;
- (id)photoButtons;
@property(nonatomic) _Bool photoListHasChange; // @synthesize photoListHasChange=_photoListHasChange;
- (void)reloadPhotoData;
- (void)setPhotoWallInfoList:(id)arg1;

@end

