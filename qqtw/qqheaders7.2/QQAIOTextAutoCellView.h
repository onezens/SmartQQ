//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOTextCellView.h"

@class CAShapeLayer, QQAIOTextAutoModel, QQFloodlightLabel;

@interface QQAIOTextAutoCellView : QQAIOTextCellView
{
    QQAIOTextAutoModel *_textAutoModel;
    QQFloodlightLabel *_autoContentLabel;
    CAShapeLayer *_shapeLayer;
}

- (void).cxx_destruct;
- (void)drawContent:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)setAioModel:(id)arg1;

@end

