//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CustomUserLocationAnnotationProtocol.h"
#import "MKAnnotation.h"

@class CustomUserLocationView, NSString;

@interface CustomUserLocation : NSObject <MKAnnotation, CustomUserLocationAnnotationProtocol>
{
    CustomUserLocationView *_view;
    struct CLLocationCoordinate2D _coordinate;
}

- (void).cxx_destruct;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (id)customAnnotationView:(id)arg1 ifGoIntoNearByGroupEntrance:(_Bool)arg2;
@property(retain, nonatomic) CustomUserLocationView *view; // @synthesize view=_view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end
