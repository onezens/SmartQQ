//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class FAModel, QQAsynUrlImageView, UILabel;

@interface FAZipItemCell : UITableViewCell
{
    QQAsynUrlImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_sizeLabel;
    FAModel *_model;
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) FAModel *model; // @synthesize model=_model;
- (void)reloadThumb;
- (void)setDirectoryName:(id)arg1;
- (void)setFileInfo:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end

