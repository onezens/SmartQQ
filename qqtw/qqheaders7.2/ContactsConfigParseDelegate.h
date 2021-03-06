//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSMutableString, NSString, QQPBConfigModel;

@interface ContactsConfigParseDelegate : NSObject <NSXMLParserDelegate>
{
    NSString *_xmlKey;
    NSMutableString *_tmpParserStr;
    int _bindGuideStyle;
    NSString *_guideWording;
    NSString *_bindGuideWording;
    QQPBConfigModel *_configModel;
}

@property(nonatomic) int bindGuideStyle; // @synthesize bindGuideStyle=_bindGuideStyle;
@property(copy, nonatomic) NSString *bindGuideWording; // @synthesize bindGuideWording=_bindGuideWording;
@property(retain, nonatomic) QQPBConfigModel *configModel; // @synthesize configModel=_configModel;
- (void)dealloc;
@property(copy, nonatomic) NSString *guideWording; // @synthesize guideWording=_guideWording;
- (id)init;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parserDidStartDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

