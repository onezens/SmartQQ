//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class QQShareGroupNodeInfo, QQStorySGYearDescriptionView, TBExtendedHitButton;

@interface QQStorySGYearCell : UITableViewCell
{
    QQShareGroupNodeInfo *_model;
    QQStorySGYearDescriptionView *_yearDescriptionView;
    TBExtendedHitButton *_hotBtn;
}

+ (id)ChangeChannel;
+ (double)height;
- (void)awakeFromNib;
- (void)changeChannel:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) TBExtendedHitButton *hotBtn; // @synthesize hotBtn=_hotBtn;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) QQShareGroupNodeInfo *model; // @synthesize model=_model;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) QQStorySGYearDescriptionView *yearDescriptionView; // @synthesize yearDescriptionView=_yearDescriptionView;

@end

