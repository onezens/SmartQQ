//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QQShareGroupNodeInfo, UILabel;

@interface QQStorySGYearDescriptionView : UIView
{
    QQShareGroupNodeInfo *_model;
    UILabel *_yearLabel;
    UILabel *_videoCountLabel;
}

+ (double)height;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) QQShareGroupNodeInfo *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *videoCountLabel; // @synthesize videoCountLabel=_videoCountLabel;
@property(retain, nonatomic) UILabel *yearLabel; // @synthesize yearLabel=_yearLabel;
- (void)updateFrame;

@end

