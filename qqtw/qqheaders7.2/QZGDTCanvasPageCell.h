//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "QZCanvasVideoViewDelegate.h"
#import "QZPhotoThumbDelegate.h"

@class NSMutableArray, NSString, QZGDTCanvasPageInfo, QzoneFeedModel;

@interface QZGDTCanvasPageCell : UITableViewCell <QZPhotoThumbDelegate, QZCanvasVideoViewDelegate>
{
    double currentY;
    struct CGRect _firstImgFrame;
    double _moveDistance;
    NSMutableArray *_imgArray;
    double _firstScreenLoadTime;
    _Bool _firstImgLoaded;
    _Bool _firstPageRendered;
    _Bool _firstPageLoadReported;
    double _canvasOpenTime;
    id <QZGDTCanvasPageCellDelegate> _delegate;
    QZGDTCanvasPageInfo *_page;
    QzoneFeedModel *_model;
}

- (void).cxx_destruct;
- (void)animationWithWiews:(id)arg1;
@property(nonatomic) __weak id <QZGDTCanvasPageCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) QzoneFeedModel *model; // @synthesize model=_model;
@property(retain, nonatomic) QZGDTCanvasPageInfo *page; // @synthesize page=_page;
- (void)render;
- (void)setComponentImage:(id)arg1 view:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

