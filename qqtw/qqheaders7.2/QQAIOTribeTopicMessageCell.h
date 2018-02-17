//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSMMessageBaseCell.h"

#import "QQGroupTopicDataMgrProtocol.h"

@class NSString;

@interface QQAIOTribeTopicMessageCell : QQSMMessageBaseCell <QQGroupTopicDataMgrProtocol>
{
}

- (struct CGRect)GetPaoPaoBgRect;
- (void)QQSMItemElementView:(id)arg1 didAction:(id)arg2;
- (void)dealloc;
- (id)getCurrentIndexPathInTable;
- (id)getMenuItems;
- (struct CGRect)getPictureRect;
- (id)getUrlPictureView;
- (id)getUrlPictureViews;
- (id)getUuidPictureView;
- (void)handleGTTpVersionUpdate:(id)arg1;
- (id)initWithChatViewTable:(id)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)longPressAction;
- (void)prepareForReuse;
- (void)reqGroupTopicInfoDone:(id)arg1 error:(id)arg2;
- (void)reqGroupTopicXmlContentDone:(id)arg1 error:(id)arg2;
- (void)setAioModel:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateGroupTopicInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

