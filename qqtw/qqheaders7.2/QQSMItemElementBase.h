//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQSMNode.h"

@class NSArray, NSDictionary, NSString, QQMessageModel;

@interface QQSMItemElementBase : NSObject <IQQSMNode>
{
    NSString *_elementName;
    NSDictionary *_attributes;
    NSString *_innerText;
    NSArray *_subElements;
    NSString *_elemIndex;
    long long _longPressItemIndex;
    int _showStyle;
    int _xo;
    int _accostType;
    QQMessageModel *_msgRef;
    struct CGRect layoutFrame;
}

+ (id)SMNodeForElementName:(id)arg1;
@property(nonatomic) int accostType; // @synthesize accostType=_accostType;
- (void)addElementAttrWithDic:(id)arg1 resursion:(_Bool)arg2 propertys:(id)arg3;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void)dealloc;
- (void)delElementWithName:(id)arg1 resursion:(_Bool)arg2 propertys:(id)arg3;
@property(retain, nonatomic) NSString *elemIndex; // @synthesize elemIndex=_elemIndex;
@property(retain, nonatomic) NSString *elementName; // @synthesize elementName=_elementName;
- (id)findElementWithName:(id)arg1 resursion:(_Bool)arg2;
- (id)getElementName;
- (void)handleAttrs:(id)arg1;
- (void)handleInnerText:(id)arg1;
- (void)handleSubNodes:(id)arg1;
- (id)initWithElementName:(id)arg1;
@property(retain, nonatomic) NSString *innerText; // @synthesize innerText=_innerText;
@property(nonatomic) struct CGRect layoutFrame; // @synthesize layoutFrame;
@property(nonatomic) long long longPressItemIndex; // @synthesize longPressItemIndex=_longPressItemIndex;
@property(nonatomic) QQMessageModel *msgRef; // @synthesize msgRef=_msgRef;
- (void)setElementWithDic:(id)arg1 resursion:(_Bool)arg2 propertys:(id)arg3;
- (void)setLongMsgElementWithDic:(id)arg1 resursion:(_Bool)arg2 propertys:(id)arg3;
- (void)setLongMsgLine;
@property(nonatomic) int showStyle; // @synthesize showStyle=_showStyle;
@property(retain, nonatomic) NSArray *subElements; // @synthesize subElements=_subElements;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

