//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QZFeedVideoView, UITableViewCell;

@interface QZFVCellInfoModel : NSObject
{
    UITableViewCell *_cell;
    QZFeedVideoView *_currentVideoView;
    struct CGRect _currentVideoViewRectInScreen;
}

+ (id)infoModelWithCell:(id)arg1 currentVideoView:(id)arg2 videoViewRect:(struct CGRect)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
@property(nonatomic) QZFeedVideoView *currentVideoView; // @synthesize currentVideoView=_currentVideoView;
@property(nonatomic) struct CGRect currentVideoViewRectInScreen; // @synthesize currentVideoViewRectInScreen=_currentVideoViewRectInScreen;

@end
