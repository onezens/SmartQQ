//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QQDynamicSearchResultSubItemModel, UIImageView, UILabel;

@interface QQDynamicSearchSubCellSogouPediaMoreInfoView : UIView
{
    UILabel *_title;
    UIImageView *_moreImageView;
    QQDynamicSearchResultSubItemModel *_model;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutViews;
@property(retain, nonatomic) QQDynamicSearchResultSubItemModel *model; // @synthesize model=_model;
- (void)setDatasourceAndUpdateAppearance:(id)arg1;

@end

