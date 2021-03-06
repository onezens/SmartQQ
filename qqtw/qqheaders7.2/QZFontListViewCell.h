//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, QZCImageView, QZFontListViewCellModel, UIImageView, UILabel;

@interface QZFontListViewCell : UIView
{
    QZFontListViewCellModel *_model;
    long long _status;
    id <QZFontListViewCellDelegate> _delegate;
    QZCImageView *_imageView;
    UILabel *_textLabel;
    UIImageView *_selectedImageView;
    UIImageView *_vipImageView;
    UILabel *_priceLabel;
    UIView *_loadingView;
    NSMutableArray *_loadingBalls;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <QZFontListViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QZCImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSMutableArray *loadingBalls; // @synthesize loadingBalls=_loadingBalls;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) QZFontListViewCellModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *vipImageView; // @synthesize vipImageView=_vipImageView;

@end

