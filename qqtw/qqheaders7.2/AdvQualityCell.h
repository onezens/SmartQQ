//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface AdvQualityCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_advImageview;
    NSString *_titleText;
    NSString *_detailText;
    UIImage *_advImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *advImage; // @synthesize advImage=_advImage;
@property(retain, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;

@end

