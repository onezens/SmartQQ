//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSArray, QQXMLMessageMetadata;

@interface QQXMLMessage : QQModel
{
    QQXMLMessageMetadata *_meta;
    NSArray *_items;
}

- (void)dealloc;
- (int)getXMLMessageType;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) QQXMLMessageMetadata *meta; // @synthesize meta=_meta;
- (id)previewText;

@end

