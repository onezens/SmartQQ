//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "QQGSCellProtocol.h"

@class NSString, QQGroupStoryDetaiCellModel, UILabel;

@interface QQGSYearDescriptionCell : UITableViewCell <QQGSCellProtocol>
{
    QQGroupStoryDetaiCellModel *_model;
    UILabel *_yearLabel;
    UILabel *_videoCountLabel;
}

+ (double)height;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) QQGroupStoryDetaiCellModel *model; // @synthesize model=_model;
- (void)prepareForReuse;
@property(retain, nonatomic) UILabel *videoCountLabel; // @synthesize videoCountLabel=_videoCountLabel;
@property(retain, nonatomic) UILabel *yearLabel; // @synthesize yearLabel=_yearLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

