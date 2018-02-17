//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NearbyVideoAuthModel, QQAsynUrlImageView, UIImageView, UILabel;

@interface NearbyVideoAuthUploadView : UIView
{
    int _summaryType;
    NearbyVideoAuthModel *_videoAuthModel;
    UIImageView *_uploadImageView;
    UILabel *_uploadPromptLabel;
    UIImageView *_playImageView;
    QQAsynUrlImageView *_coverImageView;
    id <NearbyVideoAuthUploadViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)attachGestures;
@property(nonatomic) __weak id <NearbyVideoAuthUploadViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isAuth;
- (_Bool)isHost;
- (void)layoutSubviews;
- (void)onTapVideoAuthUploadView:(id)arg1;
- (void)setDataSource:(id)arg1 summaryType:(int)arg2;

@end

