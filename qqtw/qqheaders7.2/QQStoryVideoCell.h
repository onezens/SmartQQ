//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMoreOptionTableViewCell.h"

#import "UIActionSheetDelegate.h"

@class NSString, QQStoryUrlImageView, QQStoryVideoDisplayModel, TBCircularProgressView, UIImageView, UILabel, UIView;

@interface QQStoryVideoCell : QQMoreOptionTableViewCell <UIActionSheetDelegate>
{
    double _cellHeight;
    QQStoryUrlImageView *_storyPic;
    UIImageView *_permissionIcon;
    UIImageView *_retryIcon;
    UILabel *_describeLabel;
    UILabel *_timeStamp;
    UILabel *_commentAndLikeLabel;
    TBCircularProgressView *_circleProgress;
    int _cellType;
    QQStoryVideoDisplayModel *_cellModel;
    UIView *_topLine;
    UIView *_bottomLine;
    _Bool _isNeedToResetImage;
    _Bool _isNeedSeparateLine;
    UIView *_separateLine;
    id <TBStoryUnsuccessCellDelegate> _cellDelegate;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionShowConfirmDeleteView;
- (void)adjustCommentAndLikeLabel;
- (double)calculateTextLength:(id)arg1 font:(id)arg2;
@property(nonatomic) __weak id <TBStoryUnsuccessCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void)dealloc;
- (void)deleteFailedVideoData;
- (void)doInitCommentAndLikeView;
- (void)doInitLineView;
- (void)doInitNotification;
- (void)doInitUI;
- (id)getAccessoryStr;
- (id)getDescribeInfo:(id)arg1;
- (struct CGSize)getStrSize:(id)arg1 withFont:(id)arg2;
- (void)hiddenRightLineView:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onMarkedVideo:(id)arg1;
- (void)onTapCountLabel:(id)arg1;
- (void)onTapRetry:(id)arg1;
- (void)onUpdateSelfVideoFeatureInfo:(id)arg1;
- (void)onUpdateVideoViewCount:(id)arg1;
- (void)setCommentAndLikeInfo;
- (void)setDescribeInfo:(id)arg1;
- (void)setModel:(id)arg1 isVip:(_Bool)arg2;
- (void)setSuccessVideoData:(id)arg1;
- (void)setUnsuccessVideoData:(id)arg1;
- (void)setVideoPermission:(id)arg1 isVip:(_Bool)arg2;
- (void)updateCellState:(int)arg1;
- (void)updateVideoFeatureModelWithVid:(id)arg1;
@property(readonly, nonatomic) UIView *videoImageView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
